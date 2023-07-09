#include <stdio.h>
void divide(unsigned char N, unsigned char D, unsigned char *Q, unsigned char *R);

int main(){
	unsigned char N = 60;
	unsigned char D = 5;
	unsigned char R,Q;

	divide(N,D,&Q,&R);
	printf("%d/%d = <%d , %d>",N,D,Q,R);

}
