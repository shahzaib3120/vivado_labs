# General Flow

<!-- add table of contents -->

- [Vivado HLS](#1-viva-hls)
  - [Top Function Definition](#11-top-function-definition)
  - [Test Bench Creation](#12-test-bench-creation)
  - [C Simulation](#13-c-simulation)
  - [Synthesis](#14-synthesis)
  - [Cosimulation](#15-cosimulation)
  - [Export RTL](#16-export-rtl)
- [Vivado Implementation](#2-vivado-implementation)
  - [Create Project](#21-create-project)
  - [Create Block Design](#22-create-block-design)
  - [Adding Custom IP](#23-adding-custom-ip)
  - [Generate Bitstream](#24-generate-bitstream)
  - [Export Hardware](#25-export-hardware)

## 1. Vivado HLS

### 1.1 Top Function Definition

### 1.2 Test Bench Creation

### 1.3 C Simulation

### 1.4. Synthesis

### 1.5 Cosimulation

### 1.6 Export RTL

## 2. Vivado Implementation

### 2.1 Create Project

### 2.2 Create Block Design

### 2.3 Adding Custom IP

### 2.4 Generate Bitstream

### 2.5 Export

## 3. Xilinx SDK

### 3.1 Create Application Project

- Create a new application project
- Select C++ as the language
- Select Empty Application as the template
- Verify the driver (our Top Function) is added by clicking on <code>Modify this BSP's Settings</code>

### 3.2 Add Code to Source Files

- Locate the <code>src/main.cc</code> file in the project explorer
- include the following header files

REPLACE <code>%ip_name%</code> WITH YOUR IP NAME

```c++
#include <xparameters.h>
#include <x%ip_name%.h>
#include "platform.h"
#include "AxiTimerHelper.h"
```

For <code>platform.h</code> you have to create a blank C project and copy the following files from there.

- <code>platform.cc</code> (rename c to cc)
- <code>platform.h</code>
- <code>platform_config.h</code>

If <code>AxiTimerHelper.h</code> is not present in the project, you can copy the header and implementation file from [here](https://github.com/ZhangSirM/Xilinx_SDK_Image_Processing/blob/master/ConvolutionSyn/ConvolutionSyn.sdk/test/src/AxiTimerHelper.cpp)

Add your Software Code to the <code>main.cc</code> file. The one you created in the HLS project. This is to verify the code is working as expected on the hardware.

Use the following template to write your code.

```c++
#include <stdio.h>
#include <xmathfunction.h>
#include <xparameters.h>
#include <math.h>
#include "AxiTimerHelper.h"

unsigned int float_to_u32(float val);
float u32_to_float(unsigned int val);

float *XVecHW = (float *)XPAR_AXI_BRAM_CTRL_0_S_AXI_BASEADDR;
float *resHW = (float *)XPAR_AXI_BRAM_CTRL_1_S_AXI_BASEADDR;

// replace XMathfunction with your "X<ip_name>"
// the ip_name should be capitalized
// also replace XPAR_MATHFUNCTION_0_DEVICE_ID with your XPAR_<IP_NAME>_0_DEVICE_ID
// here the IP_NAME should be all caps

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

```

We need to convert float to u32 and vice versa. For this we need to add the following functions to the <code>main.cc</code> file.

```c++
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
```
