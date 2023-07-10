############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Lab_9_Hist
set_top doHist
add_files Lab_9_Hist/core.cpp
add_files -tb Lab_9_Hist/test_core.cpp
open_solution "solution1"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
#source "./Lab_9_Hist/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
