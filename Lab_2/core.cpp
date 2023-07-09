void find(char val, char in_vec[10], char out_vec[10]){
//#pragma HLS INTERFACE ap_memory port=in_vec
//#pragma HLS INTERFACE ap_memory port=out_vec
#pragma HLS INTERFACE ap_fifo port=in_vec
#pragma HLS INTERFACE ap_fifo port=out_vec
	for(int i=0; i<10;i++){
		if(in_vec[i] == val){
			out_vec[i]=1;
		}else{
			out_vec[i]=0;
		}
	}
}
