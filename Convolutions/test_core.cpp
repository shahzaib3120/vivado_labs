#include <stdio.h>
#include <opencv2/core/core.hpp>
#include <hls_opencv.h>
#include "testUtils.h"
#include "core.h"

#define INPUT_IMAGE_CORE "/home/shahlarious/TUKL/vivado_labs/Convolutions/inputImage.bmp"
//#define INPUT_IMAGE_CORE "/home/shahlarious/TUKL/vivado_labs/Lab_9_Normalization/inputImage_320x240.bmp"
#define OUTPUT_IMAGE_CORE "/home/shahlarious/TUKL/vivado_labs/Convolutions/outputImage.bmp"
#define OUTPUT_IMAGE_REF "/home/shahlarious/TUKL/vivado_labs/Convolutions/outputImageRef.bmp"

void saveImage(const std::string path, cv::InputArray inArr){
	double min, max;
	cv::minMaxIdx(inArr, &min, &max);
	cv::Mat adjMap;
	cv::convertScaleAbs(inArr, adjMap, 255/max);
	cv::imwrite(path, adjMap);

}

 // impulse
char kernel[KERNEL_DIM*KERNEL_DIM]={
		0,0,0,
		0,1,0,
		0,0,0
};

 //edge
//char kernel[KERNEL_DIM*KERNEL_DIM]={
//		-1,0,+1,
//		-2,1,+2,
//		-1,0,+1
//};
//

 // gaussian
//char kernel[KERNEL_DIM*KERNEL_DIM]={
//		1,2,1,
//		2,4,2,
//		1,2,1
//};

char outImage[IMG_HEIGHT][IMG_WIDTH];
char outImageRef[IMG_HEIGHT][IMG_WIDTH];

int main(){
	printf("Load Image %s\n", INPUT_IMAGE_CORE);
	cv::Mat imageSrc;
//	imageSrc = cv::imread(INPUT_IMAGE_CORE, CV_LOAD_IMAGE_GRAYSCALE);
	imageSrc = cv::imread(INPUT_IMAGE_CORE);
	if(imageSrc.empty()){
		printf("Could not read the image: %s\n", INPUT_IMAGE_CORE);
		return 1;
	}else{
		cv::cvtColor(imageSrc, imageSrc, CV_BGR2GRAY);
	}

	printf("Image Rows=%d Cols=%d\n",imageSrc.rows, imageSrc.cols);

	system("pause");

	hls::stream<uint_8_side_channel> inputStream;
	hls::stream<int_8_side_channel> outputStream;

	cv::Mat imgCvOut(cv::Size(imageSrc.cols, imageSrc.rows), CV_8UC1, outImage, cv::Mat::AUTO_STEP);
	cv::Mat imgCvOutRef(cv::Size(imageSrc.cols, imageSrc.rows), CV_8UC1, outImageRef, cv::Mat::AUTO_STEP);

	printf("Destination Rows=%d Cols=%d\n",imageSrc.rows, imageSrc.cols);

	for (int row = 0; row < imageSrc.rows; ++row) {
		for (int col = 0; col < imageSrc.cols; ++col) {
			uint_8_side_channel valIn;
			if(imageSrc.type() == CV_8UC1){
				valIn.data = imageSrc.at<uchar>(row,col);
			}else{
				printf("not getting the value dummy!\n");
			}
			valIn.keep = 1; valIn.strb =1; valIn.user=1; valIn.id=0; valIn.dest=0;
			inputStream.write(valIn);
//			std::cout << "data = " << valIn.data << std::endl;
		}
	}


//	printf("Calling Reference function!\n");
////	conv2dByhand(imageSrc, outImageRef, kernel, KERNEL_DIM);
//	printf("Reference function ended!\n");
//
//	if(imageSrc.rows < 12){
////		printSmallMatrixCVChar("Ref Core", imgCvOutRef);
//	}else{
//		printf("Saving image...\n");
//		saveImage(std::string(OUTPUT_IMAGE_REF), imgCvOutRef);
//	}
//
	printf("Calling Core function!\n");
	ImageProcess(inputStream, outputStream, kernel, 0);
	printf("Core function ended!\n");

	for (int row = 0; row < imageSrc.rows; ++row) {
		for (int col = 0; col < imageSrc.cols; ++col) {
			int_8_side_channel valOut;
			if(!outputStream.empty()){
//				printf("Reading\n");
				outputStream.read(valOut);
				outImage[row][col] = valOut.data;
			}
//			outputStream.read(valOut);
//			outImage[row][col] = valOut.data;

		}
	}
	if(imageSrc.rows < 12){
//		printSmallMatrixCVChar("Res Core", imgCvOut);
	}else{
		printf("Saving image...\n");
		saveImage(std::string(OUTPUT_IMAGE_CORE), imgCvOut);
	}
	return 0;
}
