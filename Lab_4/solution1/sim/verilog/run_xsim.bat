
set PATH=
call C:/Xilinx/Vivado/2018.2/bin/xelab xil_defaultlib.apatb_distPoints_fix_top glbl -prj distPoints_fix.prj -L smartconnect_v1_0 -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 -L xil_defaultlib -L unisims_ver -L xpm --initfile "C:/Xilinx/Vivado/2018.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s distPoints_fix 
call C:/Xilinx/Vivado/2018.2/bin/xsim --noieeewarnings distPoints_fix -tclbatch distPoints_fix.tcl

