#include "hls_math.h"
#include <math.h>
#include <ap_fixed.h>

typedef ap_fixed<16, 5> fix_t;

double distPoints_double(double x1, double y1, double x2, double y2){
    return hls::sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

float distPoints_float(float x1, float y1, float x2, float y2){
    return hls::sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

fix_t distPoints_fix(fix_t x1, fix_t y1, fix_t x2, fix_t y2){
	float temp = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
    return hls::sqrt(temp);
}
