#include <stdio.h>
#include <math.h>

float gravity(float m1, float m2, float distance);
double ref[]={200.0, 50.0, 22.22222222222222, 12.5, 8.0, 5.555555555555555, 4.081632653061225, 3.125, 2.4691358024691357, 2.0};
int main(){
	printf("TestBench\n");
	float error =0;
	for(int i=0; i<10; i++){
		float force = gravity(10,20,i+1);
		float errorCalc = fabsf(force-ref[i]);
		error+=errorCalc;
	}
	printf("Average Error %f = ", error);
	return 0;
}
