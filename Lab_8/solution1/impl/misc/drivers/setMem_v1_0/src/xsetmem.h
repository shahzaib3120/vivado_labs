// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XSETMEM_H
#define XSETMEM_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xsetmem_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
    u32 Crtl_bus_BaseAddress;
} XSetmem_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 Crtl_bus_BaseAddress;
    u32 IsReady;
} XSetmem;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XSetmem_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XSetmem_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XSetmem_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XSetmem_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XSetmem_Initialize(XSetmem *InstancePtr, u16 DeviceId);
XSetmem_Config* XSetmem_LookupConfig(u16 DeviceId);
int XSetmem_CfgInitialize(XSetmem *InstancePtr, XSetmem_Config *ConfigPtr);
#else
int XSetmem_Initialize(XSetmem *InstancePtr, const char* InstanceName);
int XSetmem_Release(XSetmem *InstancePtr);
#endif


void XSetmem_Set_address(XSetmem *InstancePtr, u32 Data);
u32 XSetmem_Get_address(XSetmem *InstancePtr);
void XSetmem_Set_value_r(XSetmem *InstancePtr, u32 Data);
u32 XSetmem_Get_value_r(XSetmem *InstancePtr);
void XSetmem_Set_size(XSetmem *InstancePtr, u32 Data);
u32 XSetmem_Get_size(XSetmem *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
