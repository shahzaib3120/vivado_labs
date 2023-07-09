// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "find.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic find::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic find::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> find::ap_ST_fsm_state1 = "1";
const sc_lv<3> find::ap_ST_fsm_state2 = "10";
const sc_lv<3> find::ap_ST_fsm_state3 = "100";
const sc_lv<32> find::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> find::ap_const_lv32_1 = "1";
const sc_lv<1> find::ap_const_lv1_0 = "0";
const sc_lv<32> find::ap_const_lv32_2 = "10";
const sc_lv<4> find::ap_const_lv4_0 = "0000";
const sc_lv<4> find::ap_const_lv4_A = "1010";
const sc_lv<4> find::ap_const_lv4_1 = "1";
const sc_lv<1> find::ap_const_lv1_1 = "1";
const bool find::ap_const_boolean_1 = true;

find::find(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state2);
    sensitive << ( in_vec_empty_n );
    sensitive << ( exitcond_fu_66_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( in_vec_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_66_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( in_vec_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_66_p2 );

    SC_METHOD(thread_exitcond_fu_66_p2);
    sensitive << ( in_vec_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_66_p2 );
    sensitive << ( i_reg_55 );

    SC_METHOD(thread_i_1_fu_72_p2);
    sensitive << ( i_reg_55 );

    SC_METHOD(thread_in_vec_blk_n);
    sensitive << ( in_vec_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_66_p2 );

    SC_METHOD(thread_in_vec_read);
    sensitive << ( in_vec_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_66_p2 );

    SC_METHOD(thread_out_vec_blk_n);
    sensitive << ( out_vec_full_n );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_out_vec_din);
    sensitive << ( out_vec_full_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_reg_100 );

    SC_METHOD(thread_out_vec_write);
    sensitive << ( out_vec_full_n );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp_1_fu_78_p2);
    sensitive << ( val_r );
    sensitive << ( in_vec_dout );
    sensitive << ( in_vec_empty_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_66_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in_vec_empty_n );
    sensitive << ( out_vec_full_n );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_66_p2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "find_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, val_r, "(port)val_r");
    sc_trace(mVcdFile, in_vec_dout, "(port)in_vec_dout");
    sc_trace(mVcdFile, in_vec_empty_n, "(port)in_vec_empty_n");
    sc_trace(mVcdFile, in_vec_read, "(port)in_vec_read");
    sc_trace(mVcdFile, out_vec_din, "(port)out_vec_din");
    sc_trace(mVcdFile, out_vec_full_n, "(port)out_vec_full_n");
    sc_trace(mVcdFile, out_vec_write, "(port)out_vec_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, in_vec_blk_n, "in_vec_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond_fu_66_p2, "exitcond_fu_66_p2");
    sc_trace(mVcdFile, out_vec_blk_n, "out_vec_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, i_1_fu_72_p2, "i_1_fu_72_p2");
    sc_trace(mVcdFile, i_1_reg_95, "i_1_reg_95");
    sc_trace(mVcdFile, ap_block_state2, "ap_block_state2");
    sc_trace(mVcdFile, tmp_1_fu_78_p2, "tmp_1_fu_78_p2");
    sc_trace(mVcdFile, tmp_1_reg_100, "tmp_1_reg_100");
    sc_trace(mVcdFile, i_reg_55, "i_reg_55");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("find.hdltvin.dat");
    mHdltvoutHandle.open("find.hdltvout.dat");
}

find::~find() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void find::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(out_vec_full_n.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        i_reg_55 = i_1_reg_95.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        i_reg_55 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && !(esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0)))) {
        i_1_reg_95 = i_1_fu_72_p2.read();
    }
    if ((!(esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        tmp_1_reg_100 = tmp_1_fu_78_p2.read();
    }
}

void find::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void find::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void find::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void find::thread_ap_block_state2() {
    ap_block_state2 = (esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0));
}

void find::thread_ap_done() {
    if ((!(esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void find::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void find::thread_ap_ready() {
    if ((!(esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void find::thread_exitcond_fu_66_p2() {
    exitcond_fu_66_p2 = (!i_reg_55.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_55.read() == ap_const_lv4_A);
}

void find::thread_i_1_fu_72_p2() {
    i_1_fu_72_p2 = (!i_reg_55.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_reg_55.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void find::thread_in_vec_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0))) {
        in_vec_blk_n = in_vec_empty_n.read();
    } else {
        in_vec_blk_n = ap_const_logic_1;
    }
}

void find::thread_in_vec_read() {
    if ((!(esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0)) && 
         esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        in_vec_read = ap_const_logic_1;
    } else {
        in_vec_read = ap_const_logic_0;
    }
}

void find::thread_out_vec_blk_n() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        out_vec_blk_n = out_vec_full_n.read();
    } else {
        out_vec_blk_n = ap_const_logic_1;
    }
}

void find::thread_out_vec_din() {
    out_vec_din = esl_zext<8,1>(tmp_1_reg_100.read());
}

void find::thread_out_vec_write() {
    if ((esl_seteq<1,1,1>(out_vec_full_n.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        out_vec_write = ap_const_logic_1;
    } else {
        out_vec_write = ap_const_logic_0;
    }
}

void find::thread_tmp_1_fu_78_p2() {
    tmp_1_fu_78_p2 = (!in_vec_dout.read().is_01() || !val_r.read().is_01())? sc_lv<1>(): sc_lv<1>(in_vec_dout.read() == val_r.read());
}

void find::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else if ((!(esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(in_vec_empty_n.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(exitcond_fu_66_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(out_vec_full_n.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

void find::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"val_r\" :  \"" << val_r.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_vec_dout\" :  \"" << in_vec_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in_vec_empty_n\" :  \"" << in_vec_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"in_vec_read\" :  \"" << in_vec_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_vec_din\" :  \"" << out_vec_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_vec_full_n\" :  \"" << out_vec_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_vec_write\" :  \"" << out_vec_write.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

