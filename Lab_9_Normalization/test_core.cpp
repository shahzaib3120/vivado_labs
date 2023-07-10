#include <stdio.h>
#include "core.h"
#include <opencv2/core/core.hpp>
#include <hls_opencv.h>

#define INPUT_IMAGE_CORE "/home/shahlarious/TUKL/vivado_labs/Lab_9_Normalization/inputImage_320x240.bmp"
#define OUTPUT_IMAGE_CORE "/home/shahlarious/TUKL/vivado_labs/Lab_9_Normalization/outputImage.bmp"
char outImage[240][320]; // opencv uses different convention: the original image size was 320x240

void saveImage(const std::string path, cv::InputArray inArr){
	double min, max;
	cv::minMaxIdx(inArr, &min, &max);
	cv::Mat adjMap;
	cv::convertScaleAbs(inArr, adjMap, 255/max);
	cv::imwrite(path, adjMap);

}

int main(){
	printf("Load Image %s\n", INPUT_IMAGE_CORE);
	cv::Mat imageSrc;
	imageSrc = cv::imread(INPUT_IMAGE_CORE, CV_LOAD_IMAGE_GRAYSCALE);
//	if(imageSrc.empty())
//	 {
//	 printf("Could not read the image: %s\n", INPUT_IMAGE_CORE);
//	 return 1;
//	 }
//	cv::cvtColor(imageSrc, imageSrc, CV_BGR2GRAY);
	printf("Image Rows: %d Cols: %d\n", imageSrc.rows, imageSrc.cols);

	hls::stream<uint_8_side_channel> inputStream;
	hls::stream<uint_8_side_channel> outputStream;

	cv::Mat imgCvOut(cv::Size(imageSrc.cols, imageSrc.rows), CV_8UC1, outImage, cv::Mat::AUTO_STEP);

	for(int row=0; row<imageSrc.rows; row++){
		for (int col = 0; col < imageSrc.cols; ++col) {
			uint_8_side_channel valIn;
			valIn.data = imageSrc.at<unsigned char>(row, col);
			valIn.keep = 1; valIn.strb = 1; valIn.user =1; valIn.id=0; valIn.dest=0;
			inputStream << valIn;
		}
	}
	Normalize(inputStream, outputStream, 0, 254);

	for(int row=0; row<imageSrc.rows; row++){
		for (int col = 0; col < imageSrc.cols; ++col) {
			uint_8_side_channel valOut;
			outputStream.read(valOut);
			outImage[row][col] = valOut.data;
		}
	}

	saveImage(std::string(OUTPUT_IMAGE_CORE), imgCvOut);
	return 0;
}


