#include <stdio.h>
#include "core.h"

unsigned int someMem[100];
int main(){
	setMem(55, someMem, 100);
	for (int i = 0; i < 100; ++i) {
		printf("Value at someMem[%d]=0x%X\n", i, someMem[i]);
	}
}
