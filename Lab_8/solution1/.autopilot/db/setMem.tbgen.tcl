set C_TypeInfoList {{ 
"setMem" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"value": [[], {"scalar": "unsigned char"}] }, {"address": [[],{ "pointer":  {"scalar": "unsigned int"}}] }, {"size": [[], {"scalar": "int"}] }],[],""]
}}
set moduleName setMem
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {setMem}
set C_modelType { int 32 }
set C_modelArgList {
	{ MASTER int 32 regular {axi_master 1}  }
	{ value_r int 8 regular {axi_slave 0}  }
	{ address int 32 regular {axi_slave 0}  }
	{ size int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "MASTER", "interface" : "axi_master", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "address","cData": "unsigned int","bit_use": { "low": 0,"up": 31},"offset": { "type": "dynamic","port_name": "address","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "value_r", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "value","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "address", "interface" : "axi_slave", "bundle":"AXILiteS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "size", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "size","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 86
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ m_axi_MASTER_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_MASTER_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_MASTER_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_MASTER_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_MASTER_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_MASTER_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_MASTER_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_MASTER_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_MASTER_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_MASTER_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_MASTER_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_MASTER_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_MASTER_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_MASTER_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_MASTER_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_MASTER_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_MASTER_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_MASTER_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_MASTER_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_MASTER_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_MASTER_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_MASTER_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_MASTER_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_MASTER_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_MASTER_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_MASTER_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_MASTER_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_MASTER_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_MASTER_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_MASTER_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_MASTER_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_MASTER_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_MASTER_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_MASTER_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_MASTER_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_MASTER_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_MASTER_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_MASTER_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_MASTER_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_MASTER_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_MASTER_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_MASTER_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_MASTER_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_MASTER_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_MASTER_BUSER sc_in sc_lv 1 signal 0 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_AXILiteS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_AXILiteS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_AXILiteS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_AXILiteS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_AXILiteS_BRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CRTL_BUS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_AWADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_CRTL_BUS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CRTL_BUS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CRTL_BUS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_ARADDR sc_in sc_lv 5 signal -1 } 
	{ s_axi_CRTL_BUS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CRTL_BUS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CRTL_BUS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_BRESP sc_out sc_lv 2 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_AXILiteS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWADDR" },"address":[{"name":"address","role":"data","value":"16"}] },
	{ "name": "s_axi_AXILiteS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWVALID" } },
	{ "name": "s_axi_AXILiteS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "AWREADY" } },
	{ "name": "s_axi_AXILiteS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WVALID" } },
	{ "name": "s_axi_AXILiteS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WREADY" } },
	{ "name": "s_axi_AXILiteS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WDATA" } },
	{ "name": "s_axi_AXILiteS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "AXILiteS", "role": "WSTRB" } },
	{ "name": "s_axi_AXILiteS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARADDR" },"address":[] },
	{ "name": "s_axi_AXILiteS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARVALID" } },
	{ "name": "s_axi_AXILiteS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "ARREADY" } },
	{ "name": "s_axi_AXILiteS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RVALID" } },
	{ "name": "s_axi_AXILiteS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RREADY" } },
	{ "name": "s_axi_AXILiteS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RDATA" } },
	{ "name": "s_axi_AXILiteS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "RRESP" } },
	{ "name": "s_axi_AXILiteS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BVALID" } },
	{ "name": "s_axi_AXILiteS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BREADY" } },
	{ "name": "s_axi_AXILiteS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "AXILiteS", "role": "BRESP" } },
	{ "name": "s_axi_CRTL_BUS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "AWADDR" },"address":[{"name":"value_r","role":"data","value":"16"},{"name":"size","role":"data","value":"24"}] },
	{ "name": "s_axi_CRTL_BUS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "AWVALID" } },
	{ "name": "s_axi_CRTL_BUS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "AWREADY" } },
	{ "name": "s_axi_CRTL_BUS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WVALID" } },
	{ "name": "s_axi_CRTL_BUS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WREADY" } },
	{ "name": "s_axi_CRTL_BUS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WDATA" } },
	{ "name": "s_axi_CRTL_BUS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WSTRB" } },
	{ "name": "s_axi_CRTL_BUS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "ARADDR" },"address":[] },
	{ "name": "s_axi_CRTL_BUS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "ARVALID" } },
	{ "name": "s_axi_CRTL_BUS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "ARREADY" } },
	{ "name": "s_axi_CRTL_BUS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RVALID" } },
	{ "name": "s_axi_CRTL_BUS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RREADY" } },
	{ "name": "s_axi_CRTL_BUS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RDATA" } },
	{ "name": "s_axi_CRTL_BUS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RRESP" } },
	{ "name": "s_axi_CRTL_BUS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "BVALID" } },
	{ "name": "s_axi_CRTL_BUS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "BREADY" } },
	{ "name": "s_axi_CRTL_BUS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "BRESP" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "m_axi_MASTER_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "AWVALID" }} , 
 	{ "name": "m_axi_MASTER_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "AWREADY" }} , 
 	{ "name": "m_axi_MASTER_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "MASTER", "role": "AWADDR" }} , 
 	{ "name": "m_axi_MASTER_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "AWID" }} , 
 	{ "name": "m_axi_MASTER_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "MASTER", "role": "AWLEN" }} , 
 	{ "name": "m_axi_MASTER_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "MASTER", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_MASTER_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MASTER", "role": "AWBURST" }} , 
 	{ "name": "m_axi_MASTER_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MASTER", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_MASTER_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MASTER", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_MASTER_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "MASTER", "role": "AWPROT" }} , 
 	{ "name": "m_axi_MASTER_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MASTER", "role": "AWQOS" }} , 
 	{ "name": "m_axi_MASTER_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MASTER", "role": "AWREGION" }} , 
 	{ "name": "m_axi_MASTER_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "AWUSER" }} , 
 	{ "name": "m_axi_MASTER_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "WVALID" }} , 
 	{ "name": "m_axi_MASTER_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "WREADY" }} , 
 	{ "name": "m_axi_MASTER_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "MASTER", "role": "WDATA" }} , 
 	{ "name": "m_axi_MASTER_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MASTER", "role": "WSTRB" }} , 
 	{ "name": "m_axi_MASTER_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "WLAST" }} , 
 	{ "name": "m_axi_MASTER_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "WID" }} , 
 	{ "name": "m_axi_MASTER_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "WUSER" }} , 
 	{ "name": "m_axi_MASTER_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "ARVALID" }} , 
 	{ "name": "m_axi_MASTER_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "ARREADY" }} , 
 	{ "name": "m_axi_MASTER_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "MASTER", "role": "ARADDR" }} , 
 	{ "name": "m_axi_MASTER_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "ARID" }} , 
 	{ "name": "m_axi_MASTER_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "MASTER", "role": "ARLEN" }} , 
 	{ "name": "m_axi_MASTER_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "MASTER", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_MASTER_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MASTER", "role": "ARBURST" }} , 
 	{ "name": "m_axi_MASTER_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MASTER", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_MASTER_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MASTER", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_MASTER_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "MASTER", "role": "ARPROT" }} , 
 	{ "name": "m_axi_MASTER_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MASTER", "role": "ARQOS" }} , 
 	{ "name": "m_axi_MASTER_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "MASTER", "role": "ARREGION" }} , 
 	{ "name": "m_axi_MASTER_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "ARUSER" }} , 
 	{ "name": "m_axi_MASTER_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "RVALID" }} , 
 	{ "name": "m_axi_MASTER_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "RREADY" }} , 
 	{ "name": "m_axi_MASTER_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "MASTER", "role": "RDATA" }} , 
 	{ "name": "m_axi_MASTER_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "RLAST" }} , 
 	{ "name": "m_axi_MASTER_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "RID" }} , 
 	{ "name": "m_axi_MASTER_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "RUSER" }} , 
 	{ "name": "m_axi_MASTER_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MASTER", "role": "RRESP" }} , 
 	{ "name": "m_axi_MASTER_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "BVALID" }} , 
 	{ "name": "m_axi_MASTER_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "BREADY" }} , 
 	{ "name": "m_axi_MASTER_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "MASTER", "role": "BRESP" }} , 
 	{ "name": "m_axi_MASTER_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "BID" }} , 
 	{ "name": "m_axi_MASTER_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "MASTER", "role": "BUSER" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "setMem",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "204805",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "MASTER", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "MASTER_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "MASTER_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "MASTER_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "value_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "address", "Type" : "None", "Direction" : "I"},
			{"Name" : "size", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.setMem_AXILiteS_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.setMem_CRTL_BUS_s_axi_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.setMem_MASTER_m_axi_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	setMem {
		MASTER {Type O LastRead 2 FirstWrite 2}
		value_r {Type I LastRead 0 FirstWrite -1}
		address {Type I LastRead 0 FirstWrite -1}
		size {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "204805"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "204806"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	MASTER { m_axi {  { m_axi_MASTER_AWVALID VALID 1 1 }  { m_axi_MASTER_AWREADY READY 0 1 }  { m_axi_MASTER_AWADDR ADDR 1 32 }  { m_axi_MASTER_AWID ID 1 1 }  { m_axi_MASTER_AWLEN LEN 1 8 }  { m_axi_MASTER_AWSIZE SIZE 1 3 }  { m_axi_MASTER_AWBURST BURST 1 2 }  { m_axi_MASTER_AWLOCK LOCK 1 2 }  { m_axi_MASTER_AWCACHE CACHE 1 4 }  { m_axi_MASTER_AWPROT PROT 1 3 }  { m_axi_MASTER_AWQOS QOS 1 4 }  { m_axi_MASTER_AWREGION REGION 1 4 }  { m_axi_MASTER_AWUSER USER 1 1 }  { m_axi_MASTER_WVALID VALID 1 1 }  { m_axi_MASTER_WREADY READY 0 1 }  { m_axi_MASTER_WDATA DATA 1 32 }  { m_axi_MASTER_WSTRB STRB 1 4 }  { m_axi_MASTER_WLAST LAST 1 1 }  { m_axi_MASTER_WID ID 1 1 }  { m_axi_MASTER_WUSER USER 1 1 }  { m_axi_MASTER_ARVALID VALID 1 1 }  { m_axi_MASTER_ARREADY READY 0 1 }  { m_axi_MASTER_ARADDR ADDR 1 32 }  { m_axi_MASTER_ARID ID 1 1 }  { m_axi_MASTER_ARLEN LEN 1 8 }  { m_axi_MASTER_ARSIZE SIZE 1 3 }  { m_axi_MASTER_ARBURST BURST 1 2 }  { m_axi_MASTER_ARLOCK LOCK 1 2 }  { m_axi_MASTER_ARCACHE CACHE 1 4 }  { m_axi_MASTER_ARPROT PROT 1 3 }  { m_axi_MASTER_ARQOS QOS 1 4 }  { m_axi_MASTER_ARREGION REGION 1 4 }  { m_axi_MASTER_ARUSER USER 1 1 }  { m_axi_MASTER_RVALID VALID 0 1 }  { m_axi_MASTER_RREADY READY 1 1 }  { m_axi_MASTER_RDATA DATA 0 32 }  { m_axi_MASTER_RLAST LAST 0 1 }  { m_axi_MASTER_RID ID 0 1 }  { m_axi_MASTER_RUSER USER 0 1 }  { m_axi_MASTER_RRESP RESP 0 2 }  { m_axi_MASTER_BVALID VALID 0 1 }  { m_axi_MASTER_BREADY READY 1 1 }  { m_axi_MASTER_BRESP RESP 0 2 }  { m_axi_MASTER_BID ID 0 1 }  { m_axi_MASTER_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ MASTER { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ MASTER 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ MASTER 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
