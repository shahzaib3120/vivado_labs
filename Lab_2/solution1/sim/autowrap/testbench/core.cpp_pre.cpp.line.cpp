#pragma line 1 "F:/Machine-Learning/vivado_labs/Lab_2/core.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "F:/Machine-Learning/vivado_labs/Lab_2/core.cpp"
void find(char val, char in_vec[10], char out_vec[10]){
#pragma empty_line
#pragma empty_line
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
