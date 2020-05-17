#include <stdio.h>

int main(void) {

	#pragma omp parallel 

{
		
		printf("Hell world.\n");

	}

}
