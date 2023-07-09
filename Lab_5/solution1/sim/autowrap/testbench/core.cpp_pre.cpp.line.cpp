#pragma line 1 "F:/Machine-Learning/vivado_labs/Lab_5/core.cpp"
#pragma line 1 "<built-in>"
#pragma line 1 "<command-line>"
#pragma line 1 "F:/Machine-Learning/vivado_labs/Lab_5/core.cpp"
float gravity(float m1, float m2, float distance){
#pragma HLS INTERFACE s_axilite port=return bundle=CRTLS
#pragma HLS INTERFACE s_axilite port=m1 bundle=CRTLS
#pragma HLS INTERFACE s_axilite port=m2 bundle=CRTLS
#pragma HLS INTERFACE s_axilite port=distance bundle=CRTLS
 float force = 0;
 float dist_square = (distance+0.0001f)*(distance+0.0001f);
 force = (m1*m2)/(dist_square);
 return force;
}
