#include <stdio.h>
#include <ap_int.h>

ap_uint<17> simpleALU(ap_uint<17> inA, ap_uint<17> inB, ap_uint<1> op);

int main()
{
	ap_uint<17> A = 20;
	ap_uint<17> B = 10;
	ap_uint<17> resultSub, resultAdd;

	printf("Reference\n");
	printf("(SUM) A + B = %d\n", (unsigned int)A + (unsigned int)B);
	printf("(SUB) A - B = %d\n", (unsigned int)A - (unsigned int)B);

	resultAdd = simpleALU(A, B, 1);
	resultSub = simpleALU(A, B, 0);

	printf("HDL\n");
	printf("(SUM) A + B = %d\n", (unsigned int)resultAdd);
	printf("(SUB) A - B = %d\n", (unsigned int)resultSub);

	return 0;
}
