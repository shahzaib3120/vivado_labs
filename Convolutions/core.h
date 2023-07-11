#include "hls_video.h"
#define IMG_WIDTH 320
#define IMG_HEIGHT 240

#define KERNEL_DIM 3



#include <ap_axi_sdata.h>
typedef ap_axiu<8,2,5,6> uint_8_side_channel;
typedef ap_axis<8,2,5,6> int_8_side_channel;


// reference
short convolve2d(hls::Window<KERNEL_DIM, KERNEL_DIM, char>, char kernel[KERNEL_DIM*KERNEL_DIM]);

// our IP
short sumWindow(hls::Window<KERNEL_DIM, KERNEL_DIM, short> *window);
short minWindow(hls::Window<KERNEL_DIM, KERNEL_DIM, short> *window);
short maxWindow(hls::Window<KERNEL_DIM, KERNEL_DIM, short> *window);
void ImageProcess(hls::stream<uint_8_side_channel> &inStream, hls::stream<int_8_side_channel> &outStream, char kernel[KERNEL_DIM*KERNEL_DIM], int operation);
