set C_TypeInfoList {{ 
"find" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"val": [[], {"scalar": "char"}] }, {"in_vec": [[], {"array": [ {"scalar": "char"}, [10]]}] }, {"out_vec": [[], {"array": [ {"scalar": "char"}, [10]]}] }],[],""]
}}
set moduleName find
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
set C_modelName {find}
set C_modelType { void 0 }
set C_modelArgList {
	{ val_r int 8 regular  }
	{ in_vec int 8 regular {fifo 0 volatile }  }
	{ out_vec int 8 regular {fifo 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "val_r", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "val","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "in_vec", "interface" : "fifo", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "in_vec","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "out_vec", "interface" : "fifo", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "out_vec","cData": "char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 9,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 13
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ val_r sc_in sc_lv 8 signal 0 } 
	{ in_vec_dout sc_in sc_lv 8 signal 1 } 
	{ in_vec_empty_n sc_in sc_logic 1 signal 1 } 
	{ in_vec_read sc_out sc_logic 1 signal 1 } 
	{ out_vec_din sc_out sc_lv 8 signal 2 } 
	{ out_vec_full_n sc_in sc_logic 1 signal 2 } 
	{ out_vec_write sc_out sc_logic 1 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "val_r", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "val_r", "role": "default" }} , 
 	{ "name": "in_vec_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "in_vec", "role": "dout" }} , 
 	{ "name": "in_vec_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_vec", "role": "empty_n" }} , 
 	{ "name": "in_vec_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_vec", "role": "read" }} , 
 	{ "name": "out_vec_din", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "out_vec", "role": "din" }} , 
 	{ "name": "out_vec_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_vec", "role": "full_n" }} , 
 	{ "name": "out_vec_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_vec", "role": "write" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "find",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "21",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "val_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_vec", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "in_vec_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "out_vec", "Type" : "Fifo", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "out_vec_blk_n", "Type" : "RtlSignal"}]}]}]}


set ArgLastReadFirstWriteLatency {
	find {
		val_r {Type I LastRead 0 FirstWrite -1}
		in_vec {Type I LastRead 1 FirstWrite -1}
		out_vec {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "21", "Max" : "21"}
	, {"Name" : "Interval", "Min" : "22", "Max" : "22"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	val_r { ap_none {  { val_r in_data 0 8 } } }
	in_vec { ap_fifo {  { in_vec_dout fifo_data 0 8 }  { in_vec_empty_n fifo_status 0 1 }  { in_vec_read fifo_update 1 1 } } }
	out_vec { ap_fifo {  { out_vec_din fifo_data 1 8 }  { out_vec_full_n fifo_status 0 1 }  { out_vec_write fifo_update 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	in_vec { fifo_read 10 no_conditional }
	out_vec { fifo_write 10 no_conditional }
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
