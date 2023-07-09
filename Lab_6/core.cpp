#include <hls_math.h>

void mathFunction(float x[100], float y, float res[100]){
#pragma HLS INTERFACE s_axilite port=return bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=y bundle=CRTL_BUS
#pragma HLS INTERFACE bram port=x
#pragma HLS INTERFACE bram port=res
	for(int i=0; i<100; i++){
		res[i]=(hls::sin(x[i]) + hls::sqrtf(hls::expf(y))) / 2;

	}

}
