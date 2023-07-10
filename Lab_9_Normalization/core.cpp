#include "core.h"
void Normalize(hls::stream<uint_8_side_channel> &inStream, hls::stream<uint_8_side_channel> &outStream, unsigned char xMin , unsigned char xMax){
#pragma HLS INTERFACE s_axilite port=return bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=xMin bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=xMax bundle=CRTL_BUS
#pragma HLS INTERFACE axis port=inStream
#pragma HLS INTERFACE axis port=outStream

	float diff = xMax-xMin;
	for(int i=0; i< (320*240); i++){
#pragma PIPELINE
		uint_8_side_channel currPixelSideChannel = inStream.read();
		uint_8_side_channel dataOutSideChanndel;

		unsigned char x_t = currPixelSideChannel.data;

		float y_t_float = ((x_t-xMin) / diff)*255;
//		float y_t_float = x_t;

		unsigned char y_t = y_t_float;

		dataOutSideChanndel.data = y_t;
		dataOutSideChanndel.keep = currPixelSideChannel.keep;
		dataOutSideChanndel.strb = currPixelSideChannel.strb;
		dataOutSideChanndel.user = currPixelSideChannel.user;
		dataOutSideChanndel.last = currPixelSideChannel.last;
		dataOutSideChanndel.id = currPixelSideChannel.id;
		dataOutSideChanndel.dest = currPixelSideChannel.dest;

		outStream.write(dataOutSideChanndel);

	}

}
