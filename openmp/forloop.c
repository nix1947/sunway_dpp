#include <stdio.h>
#include "omp.h" 

void main () {
// Decleare 3 array
long long i, k, N=1000000000000; 
long long A = 0;
long B = 100;
long C 20;


// Populate the Array B and C with some random numbers. 
// You can use forloops to populate the array. 


// Run the forloop and parallelize it. 

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
