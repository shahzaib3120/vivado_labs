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
```

For <code>platform.h</code> you have to create a blank C project and copy the following files from there.

- <code>platform.cc</code> (rename c to cc)
- <code>platform.h</code>
- <code>platform_config.h</code>

Add your Software Code to the <code>main.cc</code> file. The one you created in the HLS project. This is to verify the code is working as expected on the hardware.

Use the following template to write your code in `main()`

```c++
int main()
{
	init_platform();

    // replace XGravity with your "X<ip_name>"
    // the ip_name should be capitalized
    // also replace XPAR_GRAVITY_0_DEVICE_ID with your XPAR_<IP_NAME>_0_DEVICE_ID
    // here the IP_NAME should be all caps

	int status;
	XGravity doGravity;
	XGravity_Config *doGravity_cfg;

	doGravity_cfg = XGravity_LookupConfig(XPAR_GRAVITY_0_DEVICE_ID);
	if (!doGravity_cfg)
		printf("Error loading config for doGravirty_cfg\n");

	status = XGravity_CfgInitialize(&doGravity,doGravity_cfg);
	if(status!=XST_SUCCESS)
		printf("Erro initailizing for doGravity!\n");
	//XGravity_Initialize(&doGravity,XPAR_GRAVITY_0_DEVICE_ID);


	//running code on SW on the PS and comparing to goldenRef
	printf("Runnig algorithm (SW) mode\n");
	float errorAcc = 0;// Matlab using 64bit double hence for sure there will be errors
	for (int idx = 0;idx <10;idx++)
	{
		float force = gravity(10,20,idx);

		float errorCalc = fabsf(force-goldRef[idx]);
		errorAcc += errorCalc;
		printf("%d) Force: %f Ref: %f Diff:%f\n",idx+1,force,goldRef[idx],errorCalc);
	}
	printf("No error occured, total erros: %f\n",errorAcc/10.0f);


	//running code on hardware
	errorAcc = 0;
	for (int idx = 0;idx <10;idx++)
		{
		XGravity_Set_m1(&doGravity,float_to_u32(10.0f));
		XGravity_Set_m2(&doGravity,float_to_u32(20.0f));
		XGravity_Set_dist(&doGravity,float_to_u32(idx)); //idx is distance in gravity function so float
		XGravity_Start(&doGravity);

		while(!XGravity_IsDone(&doGravity)) ;

		float force_hw = u32_to_float(XGravity_Get_return(&doGravity));

		float errorCalc = fabsf(force_hw-goldRef[idx]);
			errorAcc+=errorCalc;
			printf("%d) Force: %f Ref: %f Diff:%f\n",idx+1,force_hw,goldRef[idx],errorCalc);
		}
		printf("No error occured, total erros: %f",errorAcc/10.0f);
		printf("\n");
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
