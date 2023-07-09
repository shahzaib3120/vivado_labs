#include <stdio.h>
void find(char val, char in_vec[10], char out_vec[10]);

int main(){
	char input[10]={1,2,3,4,5,1,2,3,4,5};
	char output[10];

	find(2,input,output);
	printf("output[]= [ ");
	for(int i=0; i<10;i++){
		printf("%d,",output[i]);
	}
	printf(" ]");
}
