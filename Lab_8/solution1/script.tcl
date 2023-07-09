############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Lab_8
set_top setMem
add_files Lab_8/core.cpp
add_files Lab_8/core.h
add_files -tb Lab_8/test_core.cpp
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./Lab_8/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
