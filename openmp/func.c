#include <stdio.h>
#include <omp.h>

int add(int, int);
int sub(int, int);

int main () {

	#pragma omp parallel sections 
	{
			#pragma omp section
			add(2, 3);

			#pragma omp section
			sub(4, 5);
	} // End of parallel region.

	return 0;
}

int add(int a, int b) {
	return a + b;
}


int sub(int a, int b) {
	return a - b;
}
