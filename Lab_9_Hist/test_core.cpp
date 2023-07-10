#include <stdio.h>
#include <hls_stream.h>
#include <ap_axi_sdata.h>
#include <hls_opencv.h>
#include <opencv2/core/core.hpp>
#include <fstream>
typedef ap_axiu<8,2,5,6> uint_8_side_channel;
void doHist(hls::stream<uint_8_side_channel> &inStream, int histo[256]);

#define INPUT_IMAGE_CORE "E:\\Lab_9_HIST\\image.bsp"
#define FILE_HISTOGRAM "Histogram.txt"
char outImage[320][240];
int histo[256];
int lutMult[256];

void saveImage(const std::string path, cv::InputArray inArr){
	double min, max;
	cv::minMaxIdx(inArr, &min, &max);
	cv::Mat adjMap;
	cv::convertScaleAbs(inArr, adjMap, 255/max);
	cv::imwrite(path,adjMap);
}

void saveHistogram(const char* filename, int* histPointer){
	FILE *pFile;
	if(pFile != NULL){
		for(int i=0; i<256; i++){
			fprintf(pFile, "Bin[%d]=%d\n",i, histPointer[i]);
		}
	}
}

int main(){
	printf("Load image %s\n", INPUT_IMAGE_CORE);
	cv::Mat imageSrc;
	imageSrc = cv::imread(INPUT_IMAGE_CORE);
	cv::cvtColor(imageSrc, imageSrc, CV_BGR2GRAY);
	printf("Image Rows: %d Colors: %d\n", imageSrc.rows, imageSrc.cols);

	hls::stream<uint_8_side_channel> inputStream;

	for(int row=0; row<imageSrc.rows;row++){
		for(int col=0; col<imageSrc.cols;col++){
			uint_8_side_channel valIn;
			valIn.data = imageSrc.at<unsigned char>(row, col);
			valIn.keep = 1;
			valIn.strb = 1;
			valIn.user = 1;
			valIn.id = 0;
			valIn.dest = 0;
			inputStream << valIn;
		}
	}
	doHist(inputStream, histo);

	saveHistogram(FILE_HISTOGRAM, histo);

	return 0;
}
