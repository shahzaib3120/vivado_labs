// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "MASTER"
#define AUTOTB_TVOUT_MASTER  "../tv/cdatafile/c.setMem.autotvout_MASTER.dat"
#define AUTOTB_TVIN_MASTER  "../tv/cdatafile/c.setMem.autotvin_MASTER.dat"
// wrapc file define: "value_r"
#define AUTOTB_TVIN_value_r  "../tv/cdatafile/c.setMem.autotvin_value_r.dat"
// wrapc file define: "address"
#define AUTOTB_TVIN_address  "../tv/cdatafile/c.setMem.autotvin_address.dat"
// wrapc file define: "size"
#define AUTOTB_TVIN_size  "../tv/cdatafile/c.setMem.autotvin_size.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.setMem.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "MASTER"
#define AUTOTB_TVOUT_PC_MASTER  "../tv/rtldatafile/rtl.setMem.autotvout_MASTER.dat"
// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.setMem.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			MASTER_depth = 0;
			value_r_depth = 0;
			address_depth = 0;
			size_depth = 0;
			ap_return_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{MASTER " << MASTER_depth << "}\n";
			total_list << "{value_r " << value_r_depth << "}\n";
			total_list << "{address " << address_depth << "}\n";
			total_list << "{size " << size_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int MASTER_depth;
		int value_r_depth;
		int address_depth;
		int size_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern int setMem (
unsigned char value,
unsigned int* address,
int size);

int AESL_WRAP_setMem (
unsigned char value,
unsigned int* address,
int size)
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		int AESL_return;

		// output port post check: "MASTER"
		aesl_fh.read(AUTOTB_TVOUT_PC_MASTER, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_MASTER, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_MASTER, AESL_token); // data

			sc_bv<32> *MASTER_pc_buffer = new sc_bv<32>[100];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MASTER', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'MASTER', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					MASTER_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_MASTER, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_MASTER))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: MASTER
				{
					// bitslice(31, 0)
					// {
						// celement: address(31, 0)
						// {
							sc_lv<32>* address_lv0_0_99_1 = new sc_lv<32>[100];
						// }
					// }

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: address(31, 0)
						{
							// carray: (0) => (99) @ (1)
							for (int i_0 = 0; i_0 <= 99; i_0 += 1)
							{
								if (&(address[0]) != NULL) // check the null address if the c port is array or others
								{
									address_lv0_0_99_1[hls_map_index].range(31, 0) = sc_bv<32>(MASTER_pc_buffer[hls_map_index].range(31, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						int hls_map_index = 0;
						// celement: address(31, 0)
						{
							// carray: (0) => (99) @ (1)
							for (int i_0 = 0; i_0 <= 99; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : address[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : address[0]
								// output_left_conversion : address[i_0]
								// output_type_conversion : (address_lv0_0_99_1[hls_map_index]).to_uint64()
								if (&(address[0]) != NULL) // check the null address if the c port is array or others
								{
									address[i_0] = (address_lv0_0_99_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] MASTER_pc_buffer;
		}

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<32> ap_return_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(31, 0)
					// {
						// celement: return(31, 0)
						// {
							sc_lv<32> return_lv0_0_1_0;
						// }
					// }

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									return_lv0_0_1_0.range(31, 0) = sc_bv<32>(ap_return_pc_buffer.range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (return_lv0_0_1_0).to_uint64()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (return_lv0_0_1_0).to_uint64();
								}
							}
						}
					}
				}
			}
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "MASTER"
		char* tvin_MASTER = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_MASTER);
		char* tvout_MASTER = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_MASTER);

		// "value_r"
		char* tvin_value_r = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_value_r);

		// "address"
		char* tvin_address = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_address);

		// "size"
		char* tvin_size = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_size);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_MASTER, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_MASTER, tvin_MASTER);

		sc_bv<32>* MASTER_tvin_wrapc_buffer = new sc_bv<32>[100];

		// RTL Name: MASTER
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: address(31, 0)
				{
					// carray: (0) => (99) @ (1)
					for (int i_0 = 0; i_0 <= 99; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : address[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : address[0]
						// regulate_c_name       : address
						// input_type_conversion : address[i_0]
						if (&(address[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> address_tmp_mem;
							address_tmp_mem = address[i_0];
							MASTER_tvin_wrapc_buffer[hls_map_index].range(31, 0) = address_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 100; i++)
		{
			sprintf(tvin_MASTER, "%s\n", (MASTER_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_MASTER, tvin_MASTER);
		}

		tcl_file.set_num(100, &tcl_file.MASTER_depth);
		sprintf(tvin_MASTER, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_MASTER, tvin_MASTER);

		// release memory allocation
		delete [] MASTER_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_value_r, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_value_r, tvin_value_r);

		sc_bv<8> value_r_tvin_wrapc_buffer;

		// RTL Name: value_r
		{
			// bitslice(7, 0)
			{
				// celement: value(7, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : value
						// sub_1st_elem          : 
						// ori_name_1st_elem     : value
						// regulate_c_name       : value
						// input_type_conversion : value
						if (&(value) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> value_tmp_mem;
							value_tmp_mem = value;
							value_r_tvin_wrapc_buffer.range(7, 0) = value_tmp_mem.range(7, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_value_r, "%s\n", (value_r_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_value_r, tvin_value_r);
		}

		tcl_file.set_num(1, &tcl_file.value_r_depth);
		sprintf(tvin_value_r, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_value_r, tvin_value_r);

		// [[transaction]]
		sprintf(tvin_address, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_address, tvin_address);

		sc_bv<32> address_tvin_wrapc_buffer;

		// RTL Name: address
		{
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_address, "%s\n", (address_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_address, tvin_address);
		}

		tcl_file.set_num(1, &tcl_file.address_depth);
		sprintf(tvin_address, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_address, tvin_address);

		// [[transaction]]
		sprintf(tvin_size, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_size, tvin_size);

		sc_bv<32> size_tvin_wrapc_buffer;

		// RTL Name: size
		{
			// bitslice(31, 0)
			{
				// celement: size(31, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : size
						// sub_1st_elem          : 
						// ori_name_1st_elem     : size
						// regulate_c_name       : size
						// input_type_conversion : size
						if (&(size) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> size_tmp_mem;
							size_tmp_mem = size;
							size_tvin_wrapc_buffer.range(31, 0) = size_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_size, "%s\n", (size_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_size, tvin_size);
		}

		tcl_file.set_num(1, &tcl_file.size_depth);
		sprintf(tvin_size, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_size, tvin_size);

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		int AESL_return = setMem(value, address, size);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_MASTER, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_MASTER, tvout_MASTER);

		sc_bv<32>* MASTER_tvout_wrapc_buffer = new sc_bv<32>[100];

		// RTL Name: MASTER
		{
			// bitslice(31, 0)
			{
				int hls_map_index = 0;
				// celement: address(31, 0)
				{
					// carray: (0) => (99) @ (1)
					for (int i_0 = 0; i_0 <= 99; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : address[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : address[0]
						// regulate_c_name       : address
						// input_type_conversion : address[i_0]
						if (&(address[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> address_tmp_mem;
							address_tmp_mem = address[i_0];
							MASTER_tvout_wrapc_buffer[hls_map_index].range(31, 0) = address_tmp_mem.range(31, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 100; i++)
		{
			sprintf(tvout_MASTER, "%s\n", (MASTER_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_MASTER, tvout_MASTER);
		}

		tcl_file.set_num(100, &tcl_file.MASTER_depth);
		sprintf(tvout_MASTER, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_MASTER, tvout_MASTER);

		// release memory allocation
		delete [] MASTER_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<32> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(31, 0)
			{
				// celement: return(31, 0)
				{
					// carray: (0) => (1) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : return
						// input_type_conversion : AESL_return
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> return_tmp_mem;
							return_tmp_mem = AESL_return;
							ap_return_tvout_wrapc_buffer.range(31, 0) = return_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "MASTER"
		delete [] tvout_MASTER;
		delete [] tvin_MASTER;
		// release memory allocation: "value_r"
		delete [] tvin_value_r;
		// release memory allocation: "address"
		delete [] tvin_address;
		// release memory allocation: "size"
		delete [] tvin_size;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

