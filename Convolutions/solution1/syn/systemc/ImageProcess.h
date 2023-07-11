// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _ImageProcess_HH_
#define _ImageProcess_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "ImageProcess_mux_eOg.h"
#include "ImageProcess_mux_fYi.h"
#include "ImageProcess_linebkb.h"
#include "ImageProcess_CRTL_BUS_s_axi.h"
#include "ImageProcess_KERNEL_BUS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_CRTL_BUS_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_CRTL_BUS_DATA_WIDTH = 32,
         unsigned int C_S_AXI_KERNEL_BUS_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_KERNEL_BUS_DATA_WIDTH = 32>
struct ImageProcess : public sc_module {
    // Port declarations 55
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<8> > inStream_TDATA;
    sc_in< sc_logic > inStream_TVALID;
    sc_out< sc_logic > inStream_TREADY;
    sc_in< sc_lv<1> > inStream_TKEEP;
    sc_in< sc_lv<1> > inStream_TSTRB;
    sc_in< sc_lv<2> > inStream_TUSER;
    sc_in< sc_lv<1> > inStream_TLAST;
    sc_in< sc_lv<5> > inStream_TID;
    sc_in< sc_lv<6> > inStream_TDEST;
    sc_out< sc_lv<8> > outStream_TDATA;
    sc_out< sc_logic > outStream_TVALID;
    sc_in< sc_logic > outStream_TREADY;
    sc_out< sc_lv<1> > outStream_TKEEP;
    sc_out< sc_lv<1> > outStream_TSTRB;
    sc_out< sc_lv<2> > outStream_TUSER;
    sc_out< sc_lv<1> > outStream_TLAST;
    sc_out< sc_lv<5> > outStream_TID;
    sc_out< sc_lv<6> > outStream_TDEST;
    sc_in< sc_logic > s_axi_CRTL_BUS_AWVALID;
    sc_out< sc_logic > s_axi_CRTL_BUS_AWREADY;
    sc_in< sc_uint<C_S_AXI_CRTL_BUS_ADDR_WIDTH> > s_axi_CRTL_BUS_AWADDR;
    sc_in< sc_logic > s_axi_CRTL_BUS_WVALID;
    sc_out< sc_logic > s_axi_CRTL_BUS_WREADY;
    sc_in< sc_uint<C_S_AXI_CRTL_BUS_DATA_WIDTH> > s_axi_CRTL_BUS_WDATA;
    sc_in< sc_uint<C_S_AXI_CRTL_BUS_DATA_WIDTH/8> > s_axi_CRTL_BUS_WSTRB;
    sc_in< sc_logic > s_axi_CRTL_BUS_ARVALID;
    sc_out< sc_logic > s_axi_CRTL_BUS_ARREADY;
    sc_in< sc_uint<C_S_AXI_CRTL_BUS_ADDR_WIDTH> > s_axi_CRTL_BUS_ARADDR;
    sc_out< sc_logic > s_axi_CRTL_BUS_RVALID;
    sc_in< sc_logic > s_axi_CRTL_BUS_RREADY;
    sc_out< sc_uint<C_S_AXI_CRTL_BUS_DATA_WIDTH> > s_axi_CRTL_BUS_RDATA;
    sc_out< sc_lv<2> > s_axi_CRTL_BUS_RRESP;
    sc_out< sc_logic > s_axi_CRTL_BUS_BVALID;
    sc_in< sc_logic > s_axi_CRTL_BUS_BREADY;
    sc_out< sc_lv<2> > s_axi_CRTL_BUS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_in< sc_logic > s_axi_KERNEL_BUS_AWVALID;
    sc_out< sc_logic > s_axi_KERNEL_BUS_AWREADY;
    sc_in< sc_uint<C_S_AXI_KERNEL_BUS_ADDR_WIDTH> > s_axi_KERNEL_BUS_AWADDR;
    sc_in< sc_logic > s_axi_KERNEL_BUS_WVALID;
    sc_out< sc_logic > s_axi_KERNEL_BUS_WREADY;
    sc_in< sc_uint<C_S_AXI_KERNEL_BUS_DATA_WIDTH> > s_axi_KERNEL_BUS_WDATA;
    sc_in< sc_uint<C_S_AXI_KERNEL_BUS_DATA_WIDTH/8> > s_axi_KERNEL_BUS_WSTRB;
    sc_in< sc_logic > s_axi_KERNEL_BUS_ARVALID;
    sc_out< sc_logic > s_axi_KERNEL_BUS_ARREADY;
    sc_in< sc_uint<C_S_AXI_KERNEL_BUS_ADDR_WIDTH> > s_axi_KERNEL_BUS_ARADDR;
    sc_out< sc_logic > s_axi_KERNEL_BUS_RVALID;
    sc_in< sc_logic > s_axi_KERNEL_BUS_RREADY;
    sc_out< sc_uint<C_S_AXI_KERNEL_BUS_DATA_WIDTH> > s_axi_KERNEL_BUS_RDATA;
    sc_out< sc_lv<2> > s_axi_KERNEL_BUS_RRESP;
    sc_out< sc_logic > s_axi_KERNEL_BUS_BVALID;
    sc_in< sc_logic > s_axi_KERNEL_BUS_BREADY;
    sc_out< sc_lv<2> > s_axi_KERNEL_BUS_BRESP;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    ImageProcess(sc_module_name name);
    SC_HAS_PROCESS(ImageProcess);

    ~ImageProcess();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    ImageProcess_CRTL_BUS_s_axi<C_S_AXI_CRTL_BUS_ADDR_WIDTH,C_S_AXI_CRTL_BUS_DATA_WIDTH>* ImageProcess_CRTL_BUS_s_axi_U;
    ImageProcess_KERNEL_BUS_s_axi<C_S_AXI_KERNEL_BUS_ADDR_WIDTH,C_S_AXI_KERNEL_BUS_DATA_WIDTH>* ImageProcess_KERNEL_BUS_s_axi_U;
    ImageProcess_linebkb* lineBuff_val_0_U;
    ImageProcess_linebkb* lineBuff_val_1_U;
    ImageProcess_linebkb* lineBuff_val_2_U;
    ImageProcess_mux_eOg<1,1,8,8,8,2,8>* ImageProcess_mux_eOg_U1;
    ImageProcess_mux_fYi<1,1,16,16,16,16,16,16,16,16,16,4,16>* ImageProcess_mux_fYi_U2;
    ImageProcess_mux_fYi<1,1,16,16,16,16,16,16,16,16,16,4,16>* ImageProcess_mux_fYi_U3;
    ImageProcess_mux_fYi<1,1,16,16,16,16,16,16,16,16,16,4,16>* ImageProcess_mux_fYi_U4;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<8> > inStream_V_data_V_0_data_out;
    sc_signal< sc_logic > inStream_V_data_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_data_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_data_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_data_V_0_ack_out;
    sc_signal< sc_lv<8> > inStream_V_data_V_0_payload_A;
    sc_signal< sc_lv<8> > inStream_V_data_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_data_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_data_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_data_V_0_sel;
    sc_signal< sc_logic > inStream_V_data_V_0_load_A;
    sc_signal< sc_logic > inStream_V_data_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_data_V_0_state;
    sc_signal< sc_logic > inStream_V_data_V_0_state_cmp_full;
    sc_signal< sc_lv<1> > inStream_V_keep_V_0_data_out;
    sc_signal< sc_logic > inStream_V_keep_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_keep_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_keep_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_keep_V_0_ack_out;
    sc_signal< sc_lv<1> > inStream_V_keep_V_0_payload_A;
    sc_signal< sc_lv<1> > inStream_V_keep_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_keep_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_keep_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_keep_V_0_sel;
    sc_signal< sc_logic > inStream_V_keep_V_0_load_A;
    sc_signal< sc_logic > inStream_V_keep_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_keep_V_0_state;
    sc_signal< sc_logic > inStream_V_keep_V_0_state_cmp_full;
    sc_signal< sc_lv<1> > inStream_V_strb_V_0_data_out;
    sc_signal< sc_logic > inStream_V_strb_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_strb_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_strb_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_strb_V_0_ack_out;
    sc_signal< sc_lv<1> > inStream_V_strb_V_0_payload_A;
    sc_signal< sc_lv<1> > inStream_V_strb_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_strb_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_strb_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_strb_V_0_sel;
    sc_signal< sc_logic > inStream_V_strb_V_0_load_A;
    sc_signal< sc_logic > inStream_V_strb_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_strb_V_0_state;
    sc_signal< sc_logic > inStream_V_strb_V_0_state_cmp_full;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_data_out;
    sc_signal< sc_logic > inStream_V_user_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_user_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_user_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_user_V_0_ack_out;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_payload_A;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_user_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_user_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_user_V_0_sel;
    sc_signal< sc_logic > inStream_V_user_V_0_load_A;
    sc_signal< sc_logic > inStream_V_user_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_user_V_0_state;
    sc_signal< sc_logic > inStream_V_user_V_0_state_cmp_full;
    sc_signal< sc_lv<5> > inStream_V_id_V_0_data_out;
    sc_signal< sc_logic > inStream_V_id_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_id_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_id_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_id_V_0_ack_out;
    sc_signal< sc_lv<5> > inStream_V_id_V_0_payload_A;
    sc_signal< sc_lv<5> > inStream_V_id_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_id_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_id_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_id_V_0_sel;
    sc_signal< sc_logic > inStream_V_id_V_0_load_A;
    sc_signal< sc_logic > inStream_V_id_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_id_V_0_state;
    sc_signal< sc_logic > inStream_V_id_V_0_state_cmp_full;
    sc_signal< sc_lv<6> > inStream_V_dest_V_0_data_out;
    sc_signal< sc_logic > inStream_V_dest_V_0_vld_in;
    sc_signal< sc_logic > inStream_V_dest_V_0_vld_out;
    sc_signal< sc_logic > inStream_V_dest_V_0_ack_in;
    sc_signal< sc_logic > inStream_V_dest_V_0_ack_out;
    sc_signal< sc_lv<6> > inStream_V_dest_V_0_payload_A;
    sc_signal< sc_lv<6> > inStream_V_dest_V_0_payload_B;
    sc_signal< sc_logic > inStream_V_dest_V_0_sel_rd;
    sc_signal< sc_logic > inStream_V_dest_V_0_sel_wr;
    sc_signal< sc_logic > inStream_V_dest_V_0_sel;
    sc_signal< sc_logic > inStream_V_dest_V_0_load_A;
    sc_signal< sc_logic > inStream_V_dest_V_0_load_B;
    sc_signal< sc_lv<2> > inStream_V_dest_V_0_state;
    sc_signal< sc_logic > inStream_V_dest_V_0_state_cmp_full;
    sc_signal< sc_lv<8> > outStream_V_data_V_1_data_in;
    sc_signal< sc_lv<8> > outStream_V_data_V_1_data_out;
    sc_signal< sc_logic > outStream_V_data_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_data_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_data_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_data_V_1_ack_out;
    sc_signal< sc_lv<8> > outStream_V_data_V_1_payload_A;
    sc_signal< sc_lv<8> > outStream_V_data_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_data_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_data_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_data_V_1_sel;
    sc_signal< sc_logic > outStream_V_data_V_1_load_A;
    sc_signal< sc_logic > outStream_V_data_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_data_V_1_state;
    sc_signal< sc_logic > outStream_V_data_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > outStream_V_keep_V_1_data_in;
    sc_signal< sc_lv<1> > outStream_V_keep_V_1_data_out;
    sc_signal< sc_logic > outStream_V_keep_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_keep_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_keep_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_keep_V_1_ack_out;
    sc_signal< sc_lv<1> > outStream_V_keep_V_1_payload_A;
    sc_signal< sc_lv<1> > outStream_V_keep_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_keep_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_keep_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_keep_V_1_sel;
    sc_signal< sc_logic > outStream_V_keep_V_1_load_A;
    sc_signal< sc_logic > outStream_V_keep_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_keep_V_1_state;
    sc_signal< sc_logic > outStream_V_keep_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > outStream_V_strb_V_1_data_in;
    sc_signal< sc_lv<1> > outStream_V_strb_V_1_data_out;
    sc_signal< sc_logic > outStream_V_strb_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_strb_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_strb_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_strb_V_1_ack_out;
    sc_signal< sc_lv<1> > outStream_V_strb_V_1_payload_A;
    sc_signal< sc_lv<1> > outStream_V_strb_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_strb_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_strb_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_strb_V_1_sel;
    sc_signal< sc_logic > outStream_V_strb_V_1_load_A;
    sc_signal< sc_logic > outStream_V_strb_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_strb_V_1_state;
    sc_signal< sc_logic > outStream_V_strb_V_1_state_cmp_full;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_data_in;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_data_out;
    sc_signal< sc_logic > outStream_V_user_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_user_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_user_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_user_V_1_ack_out;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_payload_A;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_user_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_user_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_user_V_1_sel;
    sc_signal< sc_logic > outStream_V_user_V_1_load_A;
    sc_signal< sc_logic > outStream_V_user_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_user_V_1_state;
    sc_signal< sc_logic > outStream_V_user_V_1_state_cmp_full;
    sc_signal< sc_lv<1> > outStream_V_last_V_1_data_in;
    sc_signal< sc_lv<1> > outStream_V_last_V_1_data_out;
    sc_signal< sc_logic > outStream_V_last_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_last_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_last_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_last_V_1_ack_out;
    sc_signal< sc_lv<1> > outStream_V_last_V_1_payload_A;
    sc_signal< sc_lv<1> > outStream_V_last_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_last_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_last_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_last_V_1_sel;
    sc_signal< sc_logic > outStream_V_last_V_1_load_A;
    sc_signal< sc_logic > outStream_V_last_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_last_V_1_state;
    sc_signal< sc_logic > outStream_V_last_V_1_state_cmp_full;
    sc_signal< sc_lv<5> > outStream_V_id_V_1_data_in;
    sc_signal< sc_lv<5> > outStream_V_id_V_1_data_out;
    sc_signal< sc_logic > outStream_V_id_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_id_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_id_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_id_V_1_ack_out;
    sc_signal< sc_lv<5> > outStream_V_id_V_1_payload_A;
    sc_signal< sc_lv<5> > outStream_V_id_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_id_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_id_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_id_V_1_sel;
    sc_signal< sc_logic > outStream_V_id_V_1_load_A;
    sc_signal< sc_logic > outStream_V_id_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_id_V_1_state;
    sc_signal< sc_logic > outStream_V_id_V_1_state_cmp_full;
    sc_signal< sc_lv<6> > outStream_V_dest_V_1_data_in;
    sc_signal< sc_lv<6> > outStream_V_dest_V_1_data_out;
    sc_signal< sc_logic > outStream_V_dest_V_1_vld_in;
    sc_signal< sc_logic > outStream_V_dest_V_1_vld_out;
    sc_signal< sc_logic > outStream_V_dest_V_1_ack_in;
    sc_signal< sc_logic > outStream_V_dest_V_1_ack_out;
    sc_signal< sc_lv<6> > outStream_V_dest_V_1_payload_A;
    sc_signal< sc_lv<6> > outStream_V_dest_V_1_payload_B;
    sc_signal< sc_logic > outStream_V_dest_V_1_sel_rd;
    sc_signal< sc_logic > outStream_V_dest_V_1_sel_wr;
    sc_signal< sc_logic > outStream_V_dest_V_1_sel;
    sc_signal< sc_logic > outStream_V_dest_V_1_load_A;
    sc_signal< sc_logic > outStream_V_dest_V_1_load_B;
    sc_signal< sc_lv<2> > outStream_V_dest_V_1_state;
    sc_signal< sc_logic > outStream_V_dest_V_1_state_cmp_full;
    sc_signal< sc_lv<4> > kernel_address0;
    sc_signal< sc_logic > kernel_ce0;
    sc_signal< sc_lv<8> > kernel_q0;
    sc_signal< sc_lv<32> > operation;
    sc_signal< sc_logic > inStream_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > outStream_TDATA_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<1> > tmp_10_fu_1231_p2;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > tmp_10_reg_1521;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<1> > exitcond_fu_1243_p2;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > operation_read_reg_1316;
    sc_signal< sc_lv<64> > tmp_s_fu_676_p1;
    sc_signal< sc_lv<64> > tmp_s_reg_1323;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond1_fu_670_p2;
    sc_signal< sc_lv<9> > lineBuff_val_1_addr_reg_1328;
    sc_signal< sc_lv<9> > lineBuff_val_2_addr_reg_1333;
    sc_signal< sc_lv<1> > tmp_keep_V_1_reg_1338;
    sc_signal< sc_lv<1> > tmp_strb_V_1_reg_1344;
    sc_signal< sc_lv<2> > tmp_user_V_1_reg_1350;
    sc_signal< sc_lv<5> > tmp_id_V_1_reg_1356;
    sc_signal< sc_lv<6> > tmp_dest_V_1_reg_1362;
    sc_signal< sc_lv<2> > WinRow_fu_717_p2;
    sc_signal< sc_lv<2> > WinRow_reg_1371;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > tmp_4_fu_735_p2;
    sc_signal< sc_lv<5> > tmp_4_reg_1376;
    sc_signal< sc_lv<1> > exitcond2_fu_711_p2;
    sc_signal< sc_lv<1> > or_cond_fu_773_p2;
    sc_signal< sc_lv<1> > or_cond_reg_1381;
    sc_signal< sc_lv<2> > WinCol_fu_793_p2;
    sc_signal< sc_lv<2> > WinCol_reg_1388;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > exitcond3_fu_787_p2;
    sc_signal< sc_lv<5> > tmp_7_fu_812_p2;
    sc_signal< sc_lv<5> > tmp_7_reg_1408;
    sc_signal< sc_lv<8> > tmp_fu_817_p5;
    sc_signal< sc_lv<8> > tmp_reg_1413;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<2> > row_5_fu_901_p2;
    sc_signal< sc_lv<2> > row_5_reg_1426;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<4> > tmp_13_i_fu_919_p2;
    sc_signal< sc_lv<4> > tmp_13_i_reg_1431;
    sc_signal< sc_lv<1> > exitcond1_i2_fu_895_p2;
    sc_signal< sc_lv<2> > col_4_fu_931_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<8> > valInWindow_0_maxVal_fu_980_p3;
    sc_signal< sc_lv<1> > exitcond_i2_fu_925_p2;
    sc_signal< sc_lv<2> > row_4_fu_994_p2;
    sc_signal< sc_lv<2> > row_4_reg_1452;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<4> > tmp_7_i_fu_1012_p2;
    sc_signal< sc_lv<4> > tmp_7_i_reg_1457;
    sc_signal< sc_lv<1> > exitcond1_i1_fu_988_p2;
    sc_signal< sc_lv<2> > col_3_fu_1024_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<8> > valInWindow_0_minVal_fu_1073_p3;
    sc_signal< sc_lv<1> > exitcond_i1_fu_1018_p2;
    sc_signal< sc_lv<2> > row_3_fu_1087_p2;
    sc_signal< sc_lv<2> > row_3_reg_1478;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<4> > tmp_1_i_fu_1105_p2;
    sc_signal< sc_lv<4> > tmp_1_i_reg_1483;
    sc_signal< sc_lv<1> > exitcond1_i_fu_1081_p2;
    sc_signal< sc_lv<8> > p_s_fu_1123_p3;
    sc_signal< sc_lv<2> > col_2_fu_1137_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<16> > accumulator_fu_1176_p2;
    sc_signal< sc_lv<1> > exitcond_i_fu_1131_p2;
    sc_signal< sc_lv<32> > col_1_fu_1207_p3;
    sc_signal< sc_lv<32> > col_1_reg_1506;
    sc_signal< bool > ap_block_state14_io;
    sc_signal< sc_lv<32> > row_1_fu_1215_p3;
    sc_signal< sc_lv<32> > row_1_reg_1511;
    sc_signal< sc_lv<32> > pixConvolved_2_fu_1223_p3;
    sc_signal< sc_lv<32> > pixConvolved_2_reg_1516;
    sc_signal< sc_lv<17> > phitmp_fu_1237_p2;
    sc_signal< bool > ap_block_state15_io;
    sc_signal< sc_lv<9> > countWait_2_fu_1249_p2;
    sc_signal< sc_lv<9> > countWait_2_reg_1533;
    sc_signal< bool > ap_block_state16;
    sc_signal< bool > ap_block_state16_io;
    sc_signal< sc_lv<1> > tmp_last_V_fu_1255_p2;
    sc_signal< sc_lv<9> > lineBuff_val_0_address0;
    sc_signal< sc_logic > lineBuff_val_0_ce0;
    sc_signal< sc_logic > lineBuff_val_0_we0;
    sc_signal< sc_lv<8> > lineBuff_val_0_q0;
    sc_signal< sc_lv<9> > lineBuff_val_1_address0;
    sc_signal< sc_logic > lineBuff_val_1_ce0;
    sc_signal< sc_logic > lineBuff_val_1_we0;
    sc_signal< sc_lv<8> > lineBuff_val_1_q0;
    sc_signal< sc_lv<9> > lineBuff_val_2_address0;
    sc_signal< sc_logic > lineBuff_val_2_ce0;
    sc_signal< sc_logic > lineBuff_val_2_we0;
    sc_signal< sc_lv<8> > lineBuff_val_2_q0;
    sc_signal< sc_lv<5> > dataOutSideChannel_i_reg_315;
    sc_signal< sc_lv<2> > dataOutSideChannel_u_reg_328;
    sc_signal< sc_lv<1> > dataOutSideChannel_s_reg_341;
    sc_signal< sc_lv<1> > dataOutSideChannel_k_reg_354;
    sc_signal< sc_lv<6> > dataOutSideChannel_d_reg_367;
    sc_signal< sc_lv<32> > col_assign_reg_380;
    sc_signal< sc_lv<32> > row_reg_392;
    sc_signal< sc_lv<32> > pixConvolved_reg_404;
    sc_signal< sc_lv<17> > countWait_reg_416;
    sc_signal< sc_lv<2> > row_assign_reg_428;
    sc_signal< sc_lv<2> > col_assign_2_reg_440;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<2> > row_assign_3_reg_452;
    sc_signal< sc_lv<8> > maxValue_i_reg_463;
    sc_signal< sc_lv<8> > maxValue_1_i_reg_475;
    sc_signal< sc_lv<2> > col_assign_5_reg_487;
    sc_signal< sc_lv<2> > row_assign_2_reg_498;
    sc_signal< sc_lv<8> > minValue_i_reg_509;
    sc_signal< sc_lv<8> > minValue_1_i_reg_521;
    sc_signal< sc_lv<2> > col_assign_4_reg_533;
    sc_signal< sc_lv<2> > row_assign_1_reg_544;
    sc_signal< sc_lv<16> > valOutput_reg_555;
    sc_signal< sc_lv<16> > accumulator_1_i_reg_567;
    sc_signal< sc_lv<2> > col_assign_3_reg_579;
    sc_signal< sc_lv<8> > valOutput_1_reg_590;
    sc_signal< sc_lv<32> > pixConvolved_3_fu_1182_p2;
    sc_signal< sc_lv<32> > ap_phi_mux_pixConvolved_1_phi_fu_610_p4;
    sc_signal< sc_lv<32> > pixConvolved_1_reg_607;
    sc_signal< sc_lv<8> > ap_phi_mux_dataOutSideChannel_d_1_phi_fu_622_p4;
    sc_signal< sc_lv<8> > dataOutSideChannel_d_1_reg_617;
    sc_signal< sc_lv<9> > countWait_1_reg_632;
    sc_signal< sc_lv<64> > tmp_6_fu_805_p1;
    sc_signal< sc_lv<64> > tmp_8_fu_832_p1;
    sc_signal< sc_lv<16> > window_val_2_2_fu_144;
    sc_signal< sc_lv<16> > window_val_2_0_fu_844_p2;
    sc_signal< sc_lv<16> > window_val_2_2_1_fu_148;
    sc_signal< sc_lv<16> > window_val_2_2_2_fu_152;
    sc_signal< sc_lv<16> > window_val_2_2_3_fu_156;
    sc_signal< sc_lv<16> > window_val_2_2_4_fu_160;
    sc_signal< sc_lv<16> > window_val_2_2_5_fu_164;
    sc_signal< sc_lv<16> > window_val_2_2_6_fu_168;
    sc_signal< sc_lv<16> > window_val_2_2_7_fu_172;
    sc_signal< sc_lv<16> > window_val_2_2_8_fu_176;
    sc_signal< sc_lv<4> > p_shl_fu_723_p3;
    sc_signal< sc_lv<5> > p_shl_cast_fu_731_p1;
    sc_signal< sc_lv<5> > row_assign_cast_fu_707_p1;
    sc_signal< sc_lv<31> > tmp_2_fu_741_p4;
    sc_signal< sc_lv<31> > tmp_3_fu_757_p4;
    sc_signal< sc_lv<1> > icmp_fu_751_p2;
    sc_signal< sc_lv<1> > icmp7_fu_767_p2;
    sc_signal< sc_lv<32> > col_assign_2_cast1_fu_783_p1;
    sc_signal< sc_lv<32> > col_assign_1_fu_799_p2;
    sc_signal< sc_lv<5> > col_assign_2_cast_fu_779_p1;
    sc_signal< sc_lv<32> > tmp_7_cast_fu_829_p1;
    sc_signal< sc_lv<8> > window_val_2_0_fu_844_p0;
    sc_signal< sc_lv<8> > window_val_2_0_fu_844_p1;
    sc_signal< sc_lv<4> > p_shl_i2_fu_911_p3;
    sc_signal< sc_lv<4> > tmp_12_i_fu_907_p1;
    sc_signal< sc_lv<4> > tmp_14_i_fu_937_p1;
    sc_signal< sc_lv<4> > tmp_13_fu_946_p10;
    sc_signal< sc_lv<16> > tmp_13_fu_946_p11;
    sc_signal< sc_lv<8> > maxValue_fu_970_p1;
    sc_signal< sc_lv<1> > tmp_i_28_fu_974_p2;
    sc_signal< sc_lv<4> > p_shl_i1_fu_1004_p3;
    sc_signal< sc_lv<4> > tmp_6_i_fu_1000_p1;
    sc_signal< sc_lv<4> > tmp_8_i_fu_1030_p1;
    sc_signal< sc_lv<4> > tmp_12_fu_1039_p10;
    sc_signal< sc_lv<16> > tmp_12_fu_1039_p11;
    sc_signal< sc_lv<8> > minValue_fu_1063_p1;
    sc_signal< sc_lv<1> > tmp_5_i_fu_1067_p2;
    sc_signal< sc_lv<4> > p_shl_i_fu_1097_p3;
    sc_signal< sc_lv<4> > tmp_i_fu_1093_p1;
    sc_signal< sc_lv<1> > tmp_14_fu_1115_p3;
    sc_signal< sc_lv<8> > tmp_5_fu_1111_p1;
    sc_signal< sc_lv<4> > tmp_2_i_fu_1143_p1;
    sc_signal< sc_lv<4> > tmp_11_fu_1152_p10;
    sc_signal< sc_lv<16> > tmp_11_fu_1152_p11;
    sc_signal< sc_lv<1> > tmp_1_fu_1189_p2;
    sc_signal< sc_lv<32> > col_fu_1195_p2;
    sc_signal< sc_lv<32> > row_2_fu_1201_p2;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    sc_signal< sc_lv<16> > window_val_2_0_fu_844_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_state2;
    static const sc_lv<17> ap_ST_fsm_state3;
    static const sc_lv<17> ap_ST_fsm_state4;
    static const sc_lv<17> ap_ST_fsm_state5;
    static const sc_lv<17> ap_ST_fsm_state6;
    static const sc_lv<17> ap_ST_fsm_state7;
    static const sc_lv<17> ap_ST_fsm_state8;
    static const sc_lv<17> ap_ST_fsm_state9;
    static const sc_lv<17> ap_ST_fsm_state10;
    static const sc_lv<17> ap_ST_fsm_state11;
    static const sc_lv<17> ap_ST_fsm_state12;
    static const sc_lv<17> ap_ST_fsm_state13;
    static const sc_lv<17> ap_ST_fsm_state14;
    static const sc_lv<17> ap_ST_fsm_state15;
    static const sc_lv<17> ap_ST_fsm_state16;
    static const sc_lv<17> ap_ST_fsm_state17;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const bool ap_const_boolean_0;
    static const sc_lv<17> ap_const_lv17_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<17> ap_const_lv17_12C01;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_13F;
    static const sc_lv<17> ap_const_lv17_141;
    static const sc_lv<9> ap_const_lv9_141;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<9> ap_const_lv9_140;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_WinCol_fu_793_p2();
    void thread_WinRow_fu_717_p2();
    void thread_accumulator_fu_1176_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state14_io();
    void thread_ap_block_state15_io();
    void thread_ap_block_state16();
    void thread_ap_block_state16_io();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_dataOutSideChannel_d_1_phi_fu_622_p4();
    void thread_ap_phi_mux_pixConvolved_1_phi_fu_610_p4();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_col_1_fu_1207_p3();
    void thread_col_2_fu_1137_p2();
    void thread_col_3_fu_1024_p2();
    void thread_col_4_fu_931_p2();
    void thread_col_assign_1_fu_799_p2();
    void thread_col_assign_2_cast1_fu_783_p1();
    void thread_col_assign_2_cast_fu_779_p1();
    void thread_col_fu_1195_p2();
    void thread_countWait_2_fu_1249_p2();
    void thread_exitcond1_fu_670_p2();
    void thread_exitcond1_i1_fu_988_p2();
    void thread_exitcond1_i2_fu_895_p2();
    void thread_exitcond1_i_fu_1081_p2();
    void thread_exitcond2_fu_711_p2();
    void thread_exitcond3_fu_787_p2();
    void thread_exitcond_fu_1243_p2();
    void thread_exitcond_i1_fu_1018_p2();
    void thread_exitcond_i2_fu_925_p2();
    void thread_exitcond_i_fu_1131_p2();
    void thread_icmp7_fu_767_p2();
    void thread_icmp_fu_751_p2();
    void thread_inStream_TDATA_blk_n();
    void thread_inStream_TREADY();
    void thread_inStream_V_data_V_0_ack_in();
    void thread_inStream_V_data_V_0_ack_out();
    void thread_inStream_V_data_V_0_data_out();
    void thread_inStream_V_data_V_0_load_A();
    void thread_inStream_V_data_V_0_load_B();
    void thread_inStream_V_data_V_0_sel();
    void thread_inStream_V_data_V_0_state_cmp_full();
    void thread_inStream_V_data_V_0_vld_in();
    void thread_inStream_V_data_V_0_vld_out();
    void thread_inStream_V_dest_V_0_ack_in();
    void thread_inStream_V_dest_V_0_ack_out();
    void thread_inStream_V_dest_V_0_data_out();
    void thread_inStream_V_dest_V_0_load_A();
    void thread_inStream_V_dest_V_0_load_B();
    void thread_inStream_V_dest_V_0_sel();
    void thread_inStream_V_dest_V_0_state_cmp_full();
    void thread_inStream_V_dest_V_0_vld_in();
    void thread_inStream_V_dest_V_0_vld_out();
    void thread_inStream_V_id_V_0_ack_in();
    void thread_inStream_V_id_V_0_ack_out();
    void thread_inStream_V_id_V_0_data_out();
    void thread_inStream_V_id_V_0_load_A();
    void thread_inStream_V_id_V_0_load_B();
    void thread_inStream_V_id_V_0_sel();
    void thread_inStream_V_id_V_0_state_cmp_full();
    void thread_inStream_V_id_V_0_vld_in();
    void thread_inStream_V_id_V_0_vld_out();
    void thread_inStream_V_keep_V_0_ack_in();
    void thread_inStream_V_keep_V_0_ack_out();
    void thread_inStream_V_keep_V_0_data_out();
    void thread_inStream_V_keep_V_0_load_A();
    void thread_inStream_V_keep_V_0_load_B();
    void thread_inStream_V_keep_V_0_sel();
    void thread_inStream_V_keep_V_0_state_cmp_full();
    void thread_inStream_V_keep_V_0_vld_in();
    void thread_inStream_V_keep_V_0_vld_out();
    void thread_inStream_V_strb_V_0_ack_in();
    void thread_inStream_V_strb_V_0_ack_out();
    void thread_inStream_V_strb_V_0_data_out();
    void thread_inStream_V_strb_V_0_load_A();
    void thread_inStream_V_strb_V_0_load_B();
    void thread_inStream_V_strb_V_0_sel();
    void thread_inStream_V_strb_V_0_state_cmp_full();
    void thread_inStream_V_strb_V_0_vld_in();
    void thread_inStream_V_strb_V_0_vld_out();
    void thread_inStream_V_user_V_0_ack_in();
    void thread_inStream_V_user_V_0_ack_out();
    void thread_inStream_V_user_V_0_data_out();
    void thread_inStream_V_user_V_0_load_A();
    void thread_inStream_V_user_V_0_load_B();
    void thread_inStream_V_user_V_0_sel();
    void thread_inStream_V_user_V_0_state_cmp_full();
    void thread_inStream_V_user_V_0_vld_in();
    void thread_inStream_V_user_V_0_vld_out();
    void thread_kernel_address0();
    void thread_kernel_ce0();
    void thread_lineBuff_val_0_address0();
    void thread_lineBuff_val_0_ce0();
    void thread_lineBuff_val_0_we0();
    void thread_lineBuff_val_1_address0();
    void thread_lineBuff_val_1_ce0();
    void thread_lineBuff_val_1_we0();
    void thread_lineBuff_val_2_address0();
    void thread_lineBuff_val_2_ce0();
    void thread_lineBuff_val_2_we0();
    void thread_maxValue_fu_970_p1();
    void thread_minValue_fu_1063_p1();
    void thread_or_cond_fu_773_p2();
    void thread_outStream_TDATA();
    void thread_outStream_TDATA_blk_n();
    void thread_outStream_TDEST();
    void thread_outStream_TID();
    void thread_outStream_TKEEP();
    void thread_outStream_TLAST();
    void thread_outStream_TSTRB();
    void thread_outStream_TUSER();
    void thread_outStream_TVALID();
    void thread_outStream_V_data_V_1_ack_in();
    void thread_outStream_V_data_V_1_ack_out();
    void thread_outStream_V_data_V_1_data_in();
    void thread_outStream_V_data_V_1_data_out();
    void thread_outStream_V_data_V_1_load_A();
    void thread_outStream_V_data_V_1_load_B();
    void thread_outStream_V_data_V_1_sel();
    void thread_outStream_V_data_V_1_state_cmp_full();
    void thread_outStream_V_data_V_1_vld_in();
    void thread_outStream_V_data_V_1_vld_out();
    void thread_outStream_V_dest_V_1_ack_in();
    void thread_outStream_V_dest_V_1_ack_out();
    void thread_outStream_V_dest_V_1_data_in();
    void thread_outStream_V_dest_V_1_data_out();
    void thread_outStream_V_dest_V_1_load_A();
    void thread_outStream_V_dest_V_1_load_B();
    void thread_outStream_V_dest_V_1_sel();
    void thread_outStream_V_dest_V_1_state_cmp_full();
    void thread_outStream_V_dest_V_1_vld_in();
    void thread_outStream_V_dest_V_1_vld_out();
    void thread_outStream_V_id_V_1_ack_in();
    void thread_outStream_V_id_V_1_ack_out();
    void thread_outStream_V_id_V_1_data_in();
    void thread_outStream_V_id_V_1_data_out();
    void thread_outStream_V_id_V_1_load_A();
    void thread_outStream_V_id_V_1_load_B();
    void thread_outStream_V_id_V_1_sel();
    void thread_outStream_V_id_V_1_state_cmp_full();
    void thread_outStream_V_id_V_1_vld_in();
    void thread_outStream_V_id_V_1_vld_out();
    void thread_outStream_V_keep_V_1_ack_in();
    void thread_outStream_V_keep_V_1_ack_out();
    void thread_outStream_V_keep_V_1_data_in();
    void thread_outStream_V_keep_V_1_data_out();
    void thread_outStream_V_keep_V_1_load_A();
    void thread_outStream_V_keep_V_1_load_B();
    void thread_outStream_V_keep_V_1_sel();
    void thread_outStream_V_keep_V_1_state_cmp_full();
    void thread_outStream_V_keep_V_1_vld_in();
    void thread_outStream_V_keep_V_1_vld_out();
    void thread_outStream_V_last_V_1_ack_in();
    void thread_outStream_V_last_V_1_ack_out();
    void thread_outStream_V_last_V_1_data_in();
    void thread_outStream_V_last_V_1_data_out();
    void thread_outStream_V_last_V_1_load_A();
    void thread_outStream_V_last_V_1_load_B();
    void thread_outStream_V_last_V_1_sel();
    void thread_outStream_V_last_V_1_state_cmp_full();
    void thread_outStream_V_last_V_1_vld_in();
    void thread_outStream_V_last_V_1_vld_out();
    void thread_outStream_V_strb_V_1_ack_in();
    void thread_outStream_V_strb_V_1_ack_out();
    void thread_outStream_V_strb_V_1_data_in();
    void thread_outStream_V_strb_V_1_data_out();
    void thread_outStream_V_strb_V_1_load_A();
    void thread_outStream_V_strb_V_1_load_B();
    void thread_outStream_V_strb_V_1_sel();
    void thread_outStream_V_strb_V_1_state_cmp_full();
    void thread_outStream_V_strb_V_1_vld_in();
    void thread_outStream_V_strb_V_1_vld_out();
    void thread_outStream_V_user_V_1_ack_in();
    void thread_outStream_V_user_V_1_ack_out();
    void thread_outStream_V_user_V_1_data_in();
    void thread_outStream_V_user_V_1_data_out();
    void thread_outStream_V_user_V_1_load_A();
    void thread_outStream_V_user_V_1_load_B();
    void thread_outStream_V_user_V_1_sel();
    void thread_outStream_V_user_V_1_state_cmp_full();
    void thread_outStream_V_user_V_1_vld_in();
    void thread_outStream_V_user_V_1_vld_out();
    void thread_p_s_fu_1123_p3();
    void thread_p_shl_cast_fu_731_p1();
    void thread_p_shl_fu_723_p3();
    void thread_p_shl_i1_fu_1004_p3();
    void thread_p_shl_i2_fu_911_p3();
    void thread_p_shl_i_fu_1097_p3();
    void thread_phitmp_fu_1237_p2();
    void thread_pixConvolved_2_fu_1223_p3();
    void thread_pixConvolved_3_fu_1182_p2();
    void thread_row_1_fu_1215_p3();
    void thread_row_2_fu_1201_p2();
    void thread_row_3_fu_1087_p2();
    void thread_row_4_fu_994_p2();
    void thread_row_5_fu_901_p2();
    void thread_row_assign_cast_fu_707_p1();
    void thread_tmp_10_fu_1231_p2();
    void thread_tmp_11_fu_1152_p10();
    void thread_tmp_12_fu_1039_p10();
    void thread_tmp_12_i_fu_907_p1();
    void thread_tmp_13_fu_946_p10();
    void thread_tmp_13_i_fu_919_p2();
    void thread_tmp_14_fu_1115_p3();
    void thread_tmp_14_i_fu_937_p1();
    void thread_tmp_1_fu_1189_p2();
    void thread_tmp_1_i_fu_1105_p2();
    void thread_tmp_2_fu_741_p4();
    void thread_tmp_2_i_fu_1143_p1();
    void thread_tmp_3_fu_757_p4();
    void thread_tmp_4_fu_735_p2();
    void thread_tmp_5_fu_1111_p1();
    void thread_tmp_5_i_fu_1067_p2();
    void thread_tmp_6_fu_805_p1();
    void thread_tmp_6_i_fu_1000_p1();
    void thread_tmp_7_cast_fu_829_p1();
    void thread_tmp_7_fu_812_p2();
    void thread_tmp_7_i_fu_1012_p2();
    void thread_tmp_8_fu_832_p1();
    void thread_tmp_8_i_fu_1030_p1();
    void thread_tmp_i_28_fu_974_p2();
    void thread_tmp_i_fu_1093_p1();
    void thread_tmp_last_V_fu_1255_p2();
    void thread_tmp_s_fu_676_p1();
    void thread_valInWindow_0_maxVal_fu_980_p3();
    void thread_valInWindow_0_minVal_fu_1073_p3();
    void thread_window_val_2_0_fu_844_p0();
    void thread_window_val_2_0_fu_844_p1();
    void thread_window_val_2_0_fu_844_p10();
    void thread_window_val_2_0_fu_844_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
