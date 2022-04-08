#include <stdio.h>
#include "omp.h" 

void main () {

long long i, k, N=100000; 
long long A = 0;
long B = 100;
long C = 20;


#pragma omp parallel 
{
for(i=0; i<N; i++) {
	B = i * 2; // For initilizing the value in Array B
	C = i + 2; // For initilizing the value in Array C 

	A += B + k * C;
	printf("%l", A);
  }

}



} 
