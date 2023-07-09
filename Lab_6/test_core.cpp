#include <stdio.h>
#include<hls_math.h>
void mathFunction(float x[100], float y, float res[100]);

int main(){
	float Xvec[100];
	float res[100];

	for(int i=0; i<100; i++){
		Xvec[i] = i;
	}
	mathFunction(Xvec, 0.01f, res);
	for(int i=0; i<100; i++){
		printf("res[%d] = %f\n", i, res[i]);
	}
	return 0;
}
