#include <stdio.h>


void main () {
	// Declare variables
	int i;
	int n = 100;
	float x;
	float w = 1.0/n;
	double sum = 0.0;

	for(i=1; i<=n; i++) {
			x = w*(i-0.5);
			sum += x;	

	}
	

	printf("The sum is %d", w*sum);


}
