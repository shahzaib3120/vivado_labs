#include <stdio.h>
#include <ap_fixed.h>

typedef ap_fixed<16, 5> fix_t;

double distPoints_double(double x1, double y1, double x2, double y2);
float distPoints_float(float x1, float y1, float x2, float y2);
fix_t distPoints_fix(fix_t x1, fix_t y1, fix_t x2, fix_t y2);

int main(){

	double x1= 1;
	double y1= 2.5f;
	double x2= 0.5f;
	double y2= 4.5f;

	double dist_double = distPoints_double(x1, y1, x2, y2);
	float dist_float = distPoints_float(x1, y1, x2, y2);
	fix_t dist_fixed = distPoints_fix(x1, y1, x2, y2);

	printf("Distance (Double) = %f\n",(float)dist_double);
	printf("Distance (Float) = %f\n",(float)dist_float);
	printf("Distance (Fixed) = %f\n",(float)dist_fixed);

	return 0;
}
