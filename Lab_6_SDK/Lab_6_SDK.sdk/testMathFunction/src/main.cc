/*
 * Empty C++ Application
 */
#include <stdio.h>
#include <xmathfunction.h>
#include <xparameters.h>
#include <math.h>
#include "AxiTimerHelper.h"

float *XVecHW = (float *)XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR;
float *resHW = (float *)XPAR_AXI_BRAM_CTRL_1_S_AXI_BASEADDR;

XMathfunction doMathFunction;
XMathfunction_Config * doMathFunction_cfg;

void init_mathCore(){
	int status=0;
	doMathFunction_cfg = XMathfunction_LookupConfig(XPAR_MATHFUNCTION_0_DEVICE_ID);
	if(doMathFunction_cfg){
		status = XMathfunction_CfgInitialize(&doMathFunction, doMathFunction_cfg);
		if(status != XST_SUCCESS){
			printf("Failed to Initialize\n");
		}
	}
}

void mathFunction(float x[100], float y, float res[100]){

	for(int i=0; i<100; i++){
		res[i]=(sin(x[i]) + sqrtf(expf(y))) / 2;
	}
}

unsigned int float_to_u32(float val)
{
	unsigned int result;
	union float_bytes {
		float v;
		unsigned char bytes[4];
	}data;
	data.v = val;

	result = (data.bytes[3] << 24) + (data.bytes[2] << 16) + (data.bytes[1] << 8) + (data.bytes[0]);
	return result;
}

float u32_to_float(unsigned int val)
{
	union {
		float val_float;
		unsigned char bytes[4];
	} data;
	data.bytes[3] = (val >> (8*3)) & 0xff;
	data.bytes[2] = (val >> (8*2)) & 0xff;
	data.bytes[1] = (val >> (8*1)) & 0xff;
	data.bytes[0] = (val >> (8*0)) & 0xff;
	return data.val_float;
}

int main()
{

	init_mathCore();
	AxiTimerHelper timer;
	printf("BRAM test\n");

	float XVecSW[100];
	float resSW[100];
	for(int i=0; i<100; i++){
		XVecSW[i]=i;
		resSW[i]=i;
	}

	timer.startTimer();
	mathFunction(XVecSW,0.01f,resSW);
	timer.stopTimer();
	double timeSW = timer.getElapsedTimerInSeconds();
	printf("Time taken by SW = %f", timeSW);


	// using the IP Core
	XMathfunction_Set_y(&doMathFunction, float_to_u32(0.01f));
	timer.startTimer();
	XMathfunction_Start(&doMathFunction);
	while(!XMathfunction_IsDone(&doMathFunction));
	timer.stopTimer();
	double timeHW = timer.getElapsedTimerInSeconds();
	printf("Time taken by HW = %f", timeHW);

	double error=0;
	for(int i=0; i<100; i++){
		error+=fabsf(resHW[i]-resSW[i]);
	}
	error/=100.0f;
	printf("Average Error is = %f", error);
	return 0;
}
