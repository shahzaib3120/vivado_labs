#include "core.h"

void ImageProcess(hls::stream<uint_8_side_channel> &inStream, hls::stream<int_8_side_channel> &outStream, char kernel[KERNEL_DIM*KERNEL_DIM], int operation){
#pragma HLS INTERFACE s_axilite port=return bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=operation bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=kernel bundle=KERNEL_BUS
#pragma HLS INTERFACE axis register both port=outStream
#pragma HLS INTERFACE axis register both port=inStream

	hls::LineBuffer<KERNEL_DIM, IMG_WIDTH, unsigned char> lineBuff;
	hls::Window<KERNEL_DIM, KERNEL_DIM, short> window;

	int col=0;
	int row=0;
	int pixConvolved =0;

	int waitTicks = (IMG_WIDTH*(KERNEL_DIM-1)+KERNEL_DIM)/2;
	int countWait =0;
	int sentPixels=0;

	int_8_side_channel dataOutSideChannel;
	uint_8_side_channel currPixelSideChannel;

	for (int pixel = 0; pixel < (IMG_WIDTH*IMG_HEIGHT); ++pixel) {
#pragma PIPELINE
		currPixelSideChannel = inStream.read();
		unsigned char pixelIn = currPixelSideChannel.data;

		lineBuff.shift_up(col);
		lineBuff.insert_top(pixelIn,col);

		for (int WinRow = 0; WinRow < KERNEL_DIM; ++WinRow) {
			for (int WinCol = 0; WinCol < KERNEL_DIM; ++WinCol) {
				short val = (short)lineBuff.getval(WinRow,WinCol+pixConvolved);

				val = (short)kernel[(WinRow*KERNEL_DIM)+WinCol]*val;
				window.insert(val, WinRow, WinCol);
			}
		}

		short valOutput = 0;
		if((row >= KERNEL_DIM-1) && (col >= KERNEL_DIM-1)){
			switch (operation){
			case 0:
				// convolution
				valOutput = sumWindow(&window);
				if(valOutput<0){
					valOutput=0;
				}
				break;
			case 1:
				// erode
				valOutput = minWindow(&window);
				break;
			case 2:
				// Dilate
				valOutput = maxWindow(&window);
				break;
			}
			pixConvolved++;
		}
		if(col<IMG_WIDTH-1){
			col++;
		}else{
			col =0;
			row++;
			pixConvolved = 0;
		}

// THIS WORKS JUST FINE AS WELL !!
// the image is slightly shifted to bottom right corner slightly sometimes
// this sends one row at a time rather than one pixel at a time
// leveraging the "stream"

//		dataOutSideChannel.data = valOutput/16;
//		dataOutSideChannel.keep = currPixelSideChannel.keep;
//		dataOutSideChannel.strb = currPixelSideChannel.strb;
//		dataOutSideChannel.user = currPixelSideChannel.user;
//		dataOutSideChannel.last = currPixelSideChannel.last;
//		dataOutSideChannel.id = currPixelSideChannel.id;
//		dataOutSideChannel.dest = currPixelSideChannel.dest;
//
//		outStream.write(dataOutSideChannel);

		countWait++;
		if (countWait > waitTicks){
			dataOutSideChannel.data = valOutput;
			dataOutSideChannel.keep = currPixelSideChannel.keep;
			dataOutSideChannel.strb = currPixelSideChannel.strb;
			dataOutSideChannel.user = currPixelSideChannel.user;
			dataOutSideChannel.last = 0 ;
			dataOutSideChannel.id = currPixelSideChannel.id;
			dataOutSideChannel.dest = currPixelSideChannel.dest;
			outStream.write(dataOutSideChannel);
			sentPixels++;
		}
	}

	for (countWait = 0; countWait < waitTicks; countWait++){
		dataOutSideChannel.data = 0;
		dataOutSideChannel.keep = currPixelSideChannel.keep;
		dataOutSideChannel.strb = currPixelSideChannel.strb;
		dataOutSideChannel.user = currPixelSideChannel.user;
		if (countWait < waitTicks -1){
			dataOutSideChannel.last = 1;
		}else{
			dataOutSideChannel.last = 0;
		}
		dataOutSideChannel.id = currPixelSideChannel.id;
		dataOutSideChannel.dest = currPixelSideChannel.dest;
		outStream.write(dataOutSideChannel);
	}
}

short minWindow(hls::Window<KERNEL_DIM, KERNEL_DIM, short> *window){
	unsigned char minValue = 255;
	for (int row = 0; row < KERNEL_DIM; ++row) {
		for (int col = 0; col < KERNEL_DIM; ++col) {
			unsigned char valInWindow;
			valInWindow = (unsigned char)window->getval(row, col);
			if(valInWindow < minValue){
				minValue = valInWindow;
			}
		}
	}
	return minValue;
}

short maxWindow(hls::Window<KERNEL_DIM, KERNEL_DIM, short> *window){
	unsigned char maxValue = 0;
	for (int row = 0; row < KERNEL_DIM; ++row) {
		for (int col = 0; col < KERNEL_DIM; ++col) {
			unsigned char valInWindow;
			valInWindow = (unsigned char)window->getval(row, col);
			if(valInWindow > maxValue){
				maxValue = valInWindow;
			}
		}
	}
	return maxValue;
}

short sumWindow(hls::Window<KERNEL_DIM, KERNEL_DIM, short> *window){
	short accumulator = 0;
	for (int row = 0; row < KERNEL_DIM; ++row) {
		for (int col = 0; col < KERNEL_DIM; ++col) {
			accumulator += (short)window->getval(row, col);
		}
	}
	return accumulator;
}
