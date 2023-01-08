#include "stdio.h"
#include "flexint.h"




int flexcmp(flexint_t *a, flexint_t *b){

	//validates to make sure width is in compliance with long bit size

	if(a->width >1 && a->width < 65 && b->width > 1 && b->width < 65){

		printf("\n\nunsigned long value of arguement 1: %lu\n", a->val);

		//shift to left to remove insignificant bits
		signed long n = a->val << (64-a->width);
		
		//move imortant bits back in place
		n = n >> (64-a->width);

		printf("2's compliment of arguement 1: %ld\n\n", n);






		printf("unsigned long value of arguement 2: %lu\n", b->val);

		//shift left to remove unimportnat bits
		signed long m = b->val << (64-b->width);

		m = m >> (64-b->width);

		//move bits back in place
		printf("2's compliment of arguement 2: %ld\n", m);


		//now comparison should be between two 2's compliments and system can do this. 1 if arg 1 > arg 2, -1 if arg 2 > arg 1, 0 if arg 1 = arg 2

		if(n>m)
			return 1;
		else if(n<m)
			return -1;
		else
			return 0;
	}
}

