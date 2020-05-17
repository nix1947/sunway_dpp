#include<stdio.h>
#include <omp.h>
void main () {
	
	float pi = 0.0;
	int n = 100;
	float x = 0;
	float w = 1.0/n
	float sum = 0.0;
	int i;
	
	#pragma omp for 
	for(i=1; i<=n; i++) {
		x = w * (1 - 0.5);	
		sum += x;

	}
	#pragma omp critical
	pi = pi + w * sum;








}
