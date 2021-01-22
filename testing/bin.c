#include <stdio.h>

void bin(unsigned n) 
{ 
	unsigned i;
    unsigned iCheck = 31;
	for (i = 1 << iCheck; i > 0; i = i >> 1 ) {
		(n & i)? printf("1"): printf("0"); 
    }

	
}

int main(void){

    int a = 14;
    bin(a);

    return 0;
}