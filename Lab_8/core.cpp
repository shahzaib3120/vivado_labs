int setMem(unsigned char value, unsigned int *address, int size){
#pragma HLS INTERFACE m_axi depth=100 port=address offset=slave bundle=MASTER
#pragma HLS INTERFACE s_axilite port=size bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=value bundle=CRTL_BUS

	if(size < 204800){
		for(int memAddr=0; memAddr<size; memAddr++){
	#pragma PIPELINE
			address[memAddr] = value;
		}
		return 0;
	}else{
		return -1;
	}
}
