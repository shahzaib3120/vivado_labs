// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="distPoints_fix,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=9.927000,HLS_SYN_LAT=25,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=1409,HLS_SYN_LUT=2699,HLS_VERSION=2018_2}" *)

module distPoints_fix (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x1_V,
        y1_V,
        x2_V,
        y2_V,
        ap_return
);

parameter    ap_ST_fsm_state1 = 26'd1;
parameter    ap_ST_fsm_state2 = 26'd2;
parameter    ap_ST_fsm_state3 = 26'd4;
parameter    ap_ST_fsm_state4 = 26'd8;
parameter    ap_ST_fsm_state5 = 26'd16;
parameter    ap_ST_fsm_state6 = 26'd32;
parameter    ap_ST_fsm_state7 = 26'd64;
parameter    ap_ST_fsm_state8 = 26'd128;
parameter    ap_ST_fsm_state9 = 26'd256;
parameter    ap_ST_fsm_state10 = 26'd512;
parameter    ap_ST_fsm_state11 = 26'd1024;
parameter    ap_ST_fsm_state12 = 26'd2048;
parameter    ap_ST_fsm_state13 = 26'd4096;
parameter    ap_ST_fsm_state14 = 26'd8192;
parameter    ap_ST_fsm_state15 = 26'd16384;
parameter    ap_ST_fsm_state16 = 26'd32768;
parameter    ap_ST_fsm_state17 = 26'd65536;
parameter    ap_ST_fsm_state18 = 26'd131072;
parameter    ap_ST_fsm_state19 = 26'd262144;
parameter    ap_ST_fsm_state20 = 26'd524288;
parameter    ap_ST_fsm_state21 = 26'd1048576;
parameter    ap_ST_fsm_state22 = 26'd2097152;
parameter    ap_ST_fsm_state23 = 26'd4194304;
parameter    ap_ST_fsm_state24 = 26'd8388608;
parameter    ap_ST_fsm_state25 = 26'd16777216;
parameter    ap_ST_fsm_state26 = 26'd33554432;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [15:0] x1_V;
input  [15:0] y1_V;
input  [15:0] x2_V;
input  [15:0] y2_V;
output  [15:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [25:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [16:0] r_V_fu_149_p2;
reg   [16:0] r_V_reg_675;
wire  signed [33:0] p_Val2_1_fu_658_p2;
reg  signed [33:0] p_Val2_1_reg_680;
wire   [0:0] tmp_3_fu_176_p2;
reg   [0:0] tmp_3_reg_685;
wire    ap_CS_fsm_state2;
wire   [0:0] is_neg_fu_181_p3;
reg   [0:0] is_neg_reg_690;
wire  signed [33:0] p_Val2_4_fu_193_p3;
reg  signed [33:0] p_Val2_4_reg_695;
wire  signed [34:0] p_Val2_4_cast_fu_200_p1;
reg  signed [34:0] p_Val2_4_cast_reg_701;
wire    ap_CS_fsm_state3;
wire   [31:0] msb_idx_fu_233_p2;
reg   [31:0] msb_idx_reg_706;
wire   [30:0] tmp_9_fu_239_p1;
reg   [30:0] tmp_9_reg_711;
reg   [0:0] tmp_11_reg_716;
wire   [31:0] tmp32_V_3_fu_315_p3;
reg   [31:0] tmp32_V_3_reg_721;
wire    ap_CS_fsm_state4;
wire   [31:0] tmp32_V_6_fu_323_p1;
reg   [31:0] tmp32_V_6_reg_726;
wire    ap_CS_fsm_state10;
wire   [0:0] tmp_2_fu_337_p2;
reg   [0:0] tmp_2_reg_731;
wire   [31:0] temp_fu_381_p3;
reg   [31:0] temp_reg_736;
wire    ap_CS_fsm_state11;
wire   [31:0] grp_fu_136_p2;
reg   [31:0] v_assign_reg_741;
wire    ap_CS_fsm_state23;
reg   [0:0] isneg_reg_746;
wire    ap_CS_fsm_state24;
reg   [10:0] exp_tmp_V_reg_752;
wire   [51:0] tmp_36_fu_414_p1;
reg   [51:0] tmp_36_reg_757;
wire   [0:0] tmp_13_fu_418_p2;
reg   [0:0] tmp_13_reg_762;
wire   [53:0] man_V_2_fu_444_p3;
reg   [53:0] man_V_2_reg_768;
wire    ap_CS_fsm_state25;
wire   [0:0] tmp_14_fu_457_p2;
reg   [0:0] tmp_14_reg_773;
wire  signed [11:0] sh_amt_fu_475_p3;
reg  signed [11:0] sh_amt_reg_779;
wire   [0:0] tmp_17_fu_483_p2;
reg   [0:0] tmp_17_reg_785;
wire  signed [15:0] tmp_37_fu_489_p1;
reg  signed [15:0] tmp_37_reg_791;
wire   [0:0] icmp9_fu_503_p2;
reg   [0:0] icmp9_reg_797;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state12;
wire  signed [16:0] tmp_fu_141_p1;
wire  signed [16:0] tmp_1_fu_145_p1;
wire  signed [16:0] tmp_5_fu_155_p1;
wire  signed [16:0] tmp_6_fu_159_p1;
wire   [16:0] r_V_1_fu_163_p2;
wire  signed [33:0] grp_fu_664_p3;
(* use_dsp48 = "no" *) wire   [33:0] tmp_7_fu_188_p2;
reg   [34:0] p_Result_s_fu_203_p4;
wire   [63:0] p_Result_1_fu_213_p3;
reg   [63:0] tmp_8_fu_221_p3;
wire   [31:0] num_zeros_fu_229_p1;
wire   [30:0] msb_idx_1_fu_251_p3;
wire   [25:0] tmp_20_fu_261_p4;
wire   [31:0] msb_idx_1_cast_fu_257_p1;
wire   [31:0] tmp32_V_fu_277_p1;
wire   [31:0] tmp_s_fu_280_p2;
wire   [5:0] tmp_25_fu_292_p1;
wire   [5:0] tmp_29_fu_296_p2;
wire   [34:0] tmp_30_fu_302_p1;
wire   [34:0] tmp_31_fu_306_p2;
wire   [0:0] icmp_fu_271_p2;
wire   [31:0] tmp32_V_1_fu_286_p2;
wire   [31:0] tmp32_V_2_fu_311_p1;
wire   [31:0] grp_fu_130_p1;
wire   [7:0] p_Result_4_fu_327_p4;
wire   [7:0] tmp24_cast_cast_fu_346_p3;
wire   [7:0] tmp_33_fu_343_p1;
wire   [7:0] p_Repl2_1_trunc_fu_353_p2;
wire   [8:0] tmp_4_fu_359_p3;
wire   [31:0] p_Result_2_fu_366_p5;
wire   [31:0] f_fu_377_p1;
wire   [63:0] d_assign_fu_133_p1;
wire   [63:0] ireg_V_fu_388_p1;
wire   [62:0] tmp_34_fu_392_p1;
wire   [52:0] tmp_12_fu_427_p3;
wire   [53:0] p_Result_3_fu_434_p1;
wire   [53:0] man_V_1_fu_438_p2;
wire   [11:0] tmp_10_fu_424_p1;
wire   [11:0] F2_fu_451_p2;
wire   [11:0] tmp_15_fu_463_p2;
wire   [11:0] tmp_16_fu_469_p2;
wire   [7:0] tmp_38_fu_493_p4;
wire    ap_CS_fsm_state26;
wire  signed [31:0] sh_amt_cast_fu_509_p1;
wire   [53:0] tmp_19_fu_517_p1;
wire   [53:0] tmp_21_fu_521_p2;
wire  signed [31:0] tmp_23_fu_537_p1;
wire   [31:0] tmp_24_fu_540_p2;
wire   [0:0] sel_tmp1_fu_550_p2;
wire   [0:0] sel_tmp6_demorgan_fu_560_p2;
wire   [0:0] sel_tmp6_fu_564_p2;
wire   [0:0] tmp_18_fu_512_p2;
wire   [0:0] sel_tmp7_fu_570_p2;
wire   [0:0] sel_tmp8_fu_575_p2;
wire   [0:0] sel_tmp21_demorgan_fu_593_p2;
wire   [0:0] sel_tmp3_fu_598_p2;
wire   [0:0] sel_tmp4_fu_604_p2;
wire   [15:0] tmp_40_fu_546_p1;
wire   [15:0] tmp_39_fu_526_p1;
wire   [0:0] sel_tmp_fu_587_p2;
wire   [0:0] sel_tmp9_fu_581_p2;
wire   [15:0] tmp_22_fu_530_p3;
wire   [0:0] sel_tmp2_fu_555_p2;
wire   [0:0] or_cond_fu_617_p2;
wire   [15:0] newSel_fu_609_p3;
wire   [15:0] newSel1_fu_623_p3;
wire   [0:0] or_cond1_fu_630_p2;
wire   [0:0] or_cond2_fu_644_p2;
wire   [15:0] newSel2_fu_636_p3;
wire  signed [16:0] p_Val2_1_fu_658_p0;
wire  signed [33:0] OP1_V_1_fu_169_p1;
wire  signed [16:0] p_Val2_1_fu_658_p1;
wire  signed [16:0] grp_fu_664_p0;
wire  signed [33:0] OP1_V_fu_173_p1;
wire  signed [16:0] grp_fu_664_p1;
reg   [25:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 26'd1;
end

distPoints_fix_uibkb #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
distPoints_fix_uibkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp32_V_3_reg_721),
    .ce(1'b1),
    .dout(grp_fu_130_p1)
);

distPoints_fix_fpcud #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
distPoints_fix_fpcud_U2(
    .din0(v_assign_reg_741),
    .dout(d_assign_fu_133_p1)
);

distPoints_fix_fsdEe #(
    .ID( 1 ),
    .NUM_STAGE( 12 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
distPoints_fix_fsdEe_U3(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(32'd0),
    .din1(temp_reg_736),
    .ce(1'b1),
    .dout(grp_fu_136_p2)
);

distPoints_fix_mueOg #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 17 ),
    .din1_WIDTH( 17 ),
    .dout_WIDTH( 34 ))
distPoints_fix_mueOg_U4(
    .din0(p_Val2_1_fu_658_p0),
    .din1(p_Val2_1_fu_658_p1),
    .dout(p_Val2_1_fu_658_p2)
);

distPoints_fix_mafYi #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 17 ),
    .din1_WIDTH( 17 ),
    .din2_WIDTH( 34 ),
    .dout_WIDTH( 34 ))
distPoints_fix_mafYi_U5(
    .din0(grp_fu_664_p0),
    .din1(grp_fu_664_p1),
    .din2(p_Val2_1_reg_680),
    .dout(grp_fu_664_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        exp_tmp_V_reg_752 <= {{ireg_V_fu_388_p1[62:52]}};
        isneg_reg_746 <= ireg_V_fu_388_p1[32'd63];
        tmp_13_reg_762 <= tmp_13_fu_418_p2;
        tmp_36_reg_757 <= tmp_36_fu_414_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state25)) begin
        icmp9_reg_797 <= icmp9_fu_503_p2;
        man_V_2_reg_768 <= man_V_2_fu_444_p3;
        sh_amt_reg_779 <= sh_amt_fu_475_p3;
        tmp_14_reg_773 <= tmp_14_fu_457_p2;
        tmp_17_reg_785 <= tmp_17_fu_483_p2;
        tmp_37_reg_791 <= tmp_37_fu_489_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        is_neg_reg_690 <= grp_fu_664_p3[32'd33];
        p_Val2_4_reg_695 <= p_Val2_4_fu_193_p3;
        tmp_3_reg_685 <= tmp_3_fu_176_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_3_reg_685 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        msb_idx_reg_706 <= msb_idx_fu_233_p2;
        p_Val2_4_cast_reg_701 <= p_Val2_4_cast_fu_200_p1;
        tmp_11_reg_716 <= msb_idx_fu_233_p2[32'd31];
        tmp_9_reg_711 <= tmp_9_fu_239_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        p_Val2_1_reg_680 <= p_Val2_1_fu_658_p2;
        r_V_reg_675 <= r_V_fu_149_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        temp_reg_736 <= temp_fu_381_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_3_reg_685 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        tmp32_V_3_reg_721 <= tmp32_V_3_fu_315_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_3_reg_685 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
        tmp32_V_6_reg_726 <= tmp32_V_6_fu_323_p1;
        tmp_2_reg_731 <= tmp_2_fu_337_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        v_assign_reg_741 <= grp_fu_136_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state26)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state26)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign F2_fu_451_p2 = (12'd1075 - tmp_10_fu_424_p1);

assign OP1_V_1_fu_169_p1 = $signed(r_V_1_fu_163_p2);

assign OP1_V_fu_173_p1 = $signed(r_V_reg_675);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_return = ((or_cond2_fu_644_p2[0:0] === 1'b1) ? newSel2_fu_636_p3 : 16'd0);

assign f_fu_377_p1 = p_Result_2_fu_366_p5;

assign grp_fu_664_p0 = OP1_V_fu_173_p1;

assign grp_fu_664_p1 = OP1_V_fu_173_p1;

assign icmp9_fu_503_p2 = ((tmp_38_fu_493_p4 == 8'd0) ? 1'b1 : 1'b0);

assign icmp_fu_271_p2 = ((tmp_20_fu_261_p4 == 26'd0) ? 1'b1 : 1'b0);

assign ireg_V_fu_388_p1 = d_assign_fu_133_p1;

assign is_neg_fu_181_p3 = grp_fu_664_p3[32'd33];

assign man_V_1_fu_438_p2 = (54'd0 - p_Result_3_fu_434_p1);

assign man_V_2_fu_444_p3 = ((isneg_reg_746[0:0] === 1'b1) ? man_V_1_fu_438_p2 : p_Result_3_fu_434_p1);

assign msb_idx_1_cast_fu_257_p1 = msb_idx_1_fu_251_p3;

assign msb_idx_1_fu_251_p3 = ((tmp_11_reg_716[0:0] === 1'b1) ? 31'd0 : tmp_9_reg_711);

assign msb_idx_fu_233_p2 = (32'd34 - num_zeros_fu_229_p1);

assign newSel1_fu_623_p3 = ((sel_tmp9_fu_581_p2[0:0] === 1'b1) ? tmp_22_fu_530_p3 : tmp_37_reg_791);

assign newSel2_fu_636_p3 = ((or_cond_fu_617_p2[0:0] === 1'b1) ? newSel_fu_609_p3 : newSel1_fu_623_p3);

assign newSel_fu_609_p3 = ((sel_tmp4_fu_604_p2[0:0] === 1'b1) ? tmp_40_fu_546_p1 : tmp_39_fu_526_p1);

assign num_zeros_fu_229_p1 = tmp_8_fu_221_p3[31:0];

assign or_cond1_fu_630_p2 = (sel_tmp9_fu_581_p2 | sel_tmp2_fu_555_p2);

assign or_cond2_fu_644_p2 = (or_cond_fu_617_p2 | or_cond1_fu_630_p2);

assign or_cond_fu_617_p2 = (sel_tmp_fu_587_p2 | sel_tmp4_fu_604_p2);

assign p_Repl2_1_trunc_fu_353_p2 = (tmp24_cast_cast_fu_346_p3 + tmp_33_fu_343_p1);

assign p_Result_1_fu_213_p3 = {{29'd536870911}, {p_Result_s_fu_203_p4}};

assign p_Result_2_fu_366_p5 = {{tmp_4_fu_359_p3}, {tmp32_V_6_reg_726[22:0]}};

assign p_Result_3_fu_434_p1 = tmp_12_fu_427_p3;

assign p_Result_4_fu_327_p4 = {{tmp32_V_6_fu_323_p1[30:23]}};

integer ap_tvar_int_0;

always @ (p_Val2_4_cast_fu_200_p1) begin
    for (ap_tvar_int_0 = 35 - 1; ap_tvar_int_0 >= 0; ap_tvar_int_0 = ap_tvar_int_0 - 1) begin
        if (ap_tvar_int_0 > 34 - 0) begin
            p_Result_s_fu_203_p4[ap_tvar_int_0] = 1'b0;
        end else begin
            p_Result_s_fu_203_p4[ap_tvar_int_0] = p_Val2_4_cast_fu_200_p1[34 - ap_tvar_int_0];
        end
    end
end

assign p_Val2_1_fu_658_p0 = OP1_V_1_fu_169_p1;

assign p_Val2_1_fu_658_p1 = OP1_V_1_fu_169_p1;

assign p_Val2_4_cast_fu_200_p1 = p_Val2_4_reg_695;

assign p_Val2_4_fu_193_p3 = ((is_neg_fu_181_p3[0:0] === 1'b1) ? tmp_7_fu_188_p2 : grp_fu_664_p3);

assign r_V_1_fu_163_p2 = ($signed(tmp_5_fu_155_p1) - $signed(tmp_6_fu_159_p1));

assign r_V_fu_149_p2 = ($signed(tmp_fu_141_p1) - $signed(tmp_1_fu_145_p1));

assign sel_tmp1_fu_550_p2 = (tmp_13_reg_762 ^ 1'd1);

assign sel_tmp21_demorgan_fu_593_p2 = (tmp_14_reg_773 | sel_tmp6_demorgan_fu_560_p2);

assign sel_tmp2_fu_555_p2 = (tmp_17_reg_785 & sel_tmp1_fu_550_p2);

assign sel_tmp3_fu_598_p2 = (sel_tmp21_demorgan_fu_593_p2 ^ 1'd1);

assign sel_tmp4_fu_604_p2 = (sel_tmp3_fu_598_p2 & icmp9_reg_797);

assign sel_tmp6_demorgan_fu_560_p2 = (tmp_17_reg_785 | tmp_13_reg_762);

assign sel_tmp6_fu_564_p2 = (sel_tmp6_demorgan_fu_560_p2 ^ 1'd1);

assign sel_tmp7_fu_570_p2 = (tmp_14_reg_773 & sel_tmp6_fu_564_p2);

assign sel_tmp8_fu_575_p2 = (tmp_18_fu_512_p2 ^ 1'd1);

assign sel_tmp9_fu_581_p2 = (sel_tmp8_fu_575_p2 & sel_tmp7_fu_570_p2);

assign sel_tmp_fu_587_p2 = (tmp_18_fu_512_p2 & sel_tmp7_fu_570_p2);

assign sh_amt_cast_fu_509_p1 = sh_amt_reg_779;

assign sh_amt_fu_475_p3 = ((tmp_14_fu_457_p2[0:0] === 1'b1) ? tmp_15_fu_463_p2 : tmp_16_fu_469_p2);

assign temp_fu_381_p3 = ((tmp_3_reg_685[0:0] === 1'b1) ? 32'd0 : f_fu_377_p1);

assign tmp24_cast_cast_fu_346_p3 = ((tmp_2_reg_731[0:0] === 1'b1) ? 8'd106 : 8'd105);

assign tmp32_V_1_fu_286_p2 = tmp32_V_fu_277_p1 << tmp_s_fu_280_p2;

assign tmp32_V_2_fu_311_p1 = tmp_31_fu_306_p2[31:0];

assign tmp32_V_3_fu_315_p3 = ((icmp_fu_271_p2[0:0] === 1'b1) ? tmp32_V_1_fu_286_p2 : tmp32_V_2_fu_311_p1);

assign tmp32_V_6_fu_323_p1 = grp_fu_130_p1;

assign tmp32_V_fu_277_p1 = p_Val2_4_reg_695[31:0];

assign tmp_10_fu_424_p1 = exp_tmp_V_reg_752;

assign tmp_12_fu_427_p3 = {{1'd1}, {tmp_36_reg_757}};

assign tmp_13_fu_418_p2 = ((tmp_34_fu_392_p1 == 63'd0) ? 1'b1 : 1'b0);

assign tmp_14_fu_457_p2 = (($signed(F2_fu_451_p2) > $signed(12'd11)) ? 1'b1 : 1'b0);

assign tmp_15_fu_463_p2 = ($signed(12'd4085) + $signed(F2_fu_451_p2));

assign tmp_16_fu_469_p2 = (12'd11 - F2_fu_451_p2);

assign tmp_17_fu_483_p2 = ((F2_fu_451_p2 == 12'd11) ? 1'b1 : 1'b0);

assign tmp_18_fu_512_p2 = ((sh_amt_reg_779 < 12'd54) ? 1'b1 : 1'b0);

assign tmp_19_fu_517_p1 = $unsigned(sh_amt_cast_fu_509_p1);

assign tmp_1_fu_145_p1 = $signed(x1_V);

assign tmp_20_fu_261_p4 = {{msb_idx_1_fu_251_p3[30:5]}};

assign tmp_21_fu_521_p2 = $signed(man_V_2_reg_768) >>> tmp_19_fu_517_p1;

assign tmp_22_fu_530_p3 = ((isneg_reg_746[0:0] === 1'b1) ? 16'd65535 : 16'd0);

assign tmp_23_fu_537_p1 = tmp_37_reg_791;

assign tmp_24_fu_540_p2 = tmp_23_fu_537_p1 << sh_amt_cast_fu_509_p1;

assign tmp_25_fu_292_p1 = msb_idx_1_fu_251_p3[5:0];

assign tmp_29_fu_296_p2 = ($signed(6'd33) + $signed(tmp_25_fu_292_p1));

assign tmp_2_fu_337_p2 = ((p_Result_4_fu_327_p4 != 8'd158) ? 1'b1 : 1'b0);

assign tmp_30_fu_302_p1 = tmp_29_fu_296_p2;

assign tmp_31_fu_306_p2 = p_Val2_4_cast_reg_701 >> tmp_30_fu_302_p1;

assign tmp_33_fu_343_p1 = msb_idx_reg_706[7:0];

assign tmp_34_fu_392_p1 = ireg_V_fu_388_p1[62:0];

assign tmp_36_fu_414_p1 = ireg_V_fu_388_p1[51:0];

assign tmp_37_fu_489_p1 = man_V_2_fu_444_p3[15:0];

assign tmp_38_fu_493_p4 = {{sh_amt_fu_475_p3[11:4]}};

assign tmp_39_fu_526_p1 = tmp_21_fu_521_p2[15:0];

assign tmp_3_fu_176_p2 = ((grp_fu_664_p3 == 34'd0) ? 1'b1 : 1'b0);

assign tmp_40_fu_546_p1 = tmp_24_fu_540_p2[15:0];

assign tmp_4_fu_359_p3 = {{is_neg_reg_690}, {p_Repl2_1_trunc_fu_353_p2}};

assign tmp_5_fu_155_p1 = $signed(y2_V);

assign tmp_6_fu_159_p1 = $signed(y1_V);

assign tmp_7_fu_188_p2 = ($signed(34'd0) - $signed(grp_fu_664_p3));


always @ (p_Result_1_fu_213_p3) begin
    if (p_Result_1_fu_213_p3[0] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd0;
    end else if (p_Result_1_fu_213_p3[1] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd1;
    end else if (p_Result_1_fu_213_p3[2] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd2;
    end else if (p_Result_1_fu_213_p3[3] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd3;
    end else if (p_Result_1_fu_213_p3[4] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd4;
    end else if (p_Result_1_fu_213_p3[5] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd5;
    end else if (p_Result_1_fu_213_p3[6] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd6;
    end else if (p_Result_1_fu_213_p3[7] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd7;
    end else if (p_Result_1_fu_213_p3[8] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd8;
    end else if (p_Result_1_fu_213_p3[9] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd9;
    end else if (p_Result_1_fu_213_p3[10] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd10;
    end else if (p_Result_1_fu_213_p3[11] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd11;
    end else if (p_Result_1_fu_213_p3[12] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd12;
    end else if (p_Result_1_fu_213_p3[13] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd13;
    end else if (p_Result_1_fu_213_p3[14] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd14;
    end else if (p_Result_1_fu_213_p3[15] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd15;
    end else if (p_Result_1_fu_213_p3[16] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd16;
    end else if (p_Result_1_fu_213_p3[17] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd17;
    end else if (p_Result_1_fu_213_p3[18] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd18;
    end else if (p_Result_1_fu_213_p3[19] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd19;
    end else if (p_Result_1_fu_213_p3[20] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd20;
    end else if (p_Result_1_fu_213_p3[21] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd21;
    end else if (p_Result_1_fu_213_p3[22] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd22;
    end else if (p_Result_1_fu_213_p3[23] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd23;
    end else if (p_Result_1_fu_213_p3[24] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd24;
    end else if (p_Result_1_fu_213_p3[25] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd25;
    end else if (p_Result_1_fu_213_p3[26] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd26;
    end else if (p_Result_1_fu_213_p3[27] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd27;
    end else if (p_Result_1_fu_213_p3[28] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd28;
    end else if (p_Result_1_fu_213_p3[29] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd29;
    end else if (p_Result_1_fu_213_p3[30] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd30;
    end else if (p_Result_1_fu_213_p3[31] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd31;
    end else if (p_Result_1_fu_213_p3[32] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd32;
    end else if (p_Result_1_fu_213_p3[33] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd33;
    end else if (p_Result_1_fu_213_p3[34] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd34;
    end else if (p_Result_1_fu_213_p3[35] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd35;
    end else if (p_Result_1_fu_213_p3[36] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd36;
    end else if (p_Result_1_fu_213_p3[37] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd37;
    end else if (p_Result_1_fu_213_p3[38] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd38;
    end else if (p_Result_1_fu_213_p3[39] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd39;
    end else if (p_Result_1_fu_213_p3[40] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd40;
    end else if (p_Result_1_fu_213_p3[41] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd41;
    end else if (p_Result_1_fu_213_p3[42] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd42;
    end else if (p_Result_1_fu_213_p3[43] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd43;
    end else if (p_Result_1_fu_213_p3[44] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd44;
    end else if (p_Result_1_fu_213_p3[45] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd45;
    end else if (p_Result_1_fu_213_p3[46] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd46;
    end else if (p_Result_1_fu_213_p3[47] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd47;
    end else if (p_Result_1_fu_213_p3[48] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd48;
    end else if (p_Result_1_fu_213_p3[49] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd49;
    end else if (p_Result_1_fu_213_p3[50] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd50;
    end else if (p_Result_1_fu_213_p3[51] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd51;
    end else if (p_Result_1_fu_213_p3[52] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd52;
    end else if (p_Result_1_fu_213_p3[53] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd53;
    end else if (p_Result_1_fu_213_p3[54] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd54;
    end else if (p_Result_1_fu_213_p3[55] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd55;
    end else if (p_Result_1_fu_213_p3[56] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd56;
    end else if (p_Result_1_fu_213_p3[57] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd57;
    end else if (p_Result_1_fu_213_p3[58] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd58;
    end else if (p_Result_1_fu_213_p3[59] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd59;
    end else if (p_Result_1_fu_213_p3[60] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd60;
    end else if (p_Result_1_fu_213_p3[61] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd61;
    end else if (p_Result_1_fu_213_p3[62] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd62;
    end else if (p_Result_1_fu_213_p3[63] == 1'b1) begin
        tmp_8_fu_221_p3 = 64'd63;
    end else begin
        tmp_8_fu_221_p3 = 64'd64;
    end
end

assign tmp_9_fu_239_p1 = msb_idx_fu_233_p2[30:0];

assign tmp_fu_141_p1 = $signed(x2_V);

assign tmp_s_fu_280_p2 = (32'd31 - msb_idx_1_cast_fu_257_p1);

endmodule //distPoints_fix
