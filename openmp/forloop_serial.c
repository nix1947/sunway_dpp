#include <stdio.h>

void main() {

int i, N=1000; 
int k = 2; 
double A[N], B[N], C[N]; 

for(i=0; i<N; i++) {

	B[i] = i + 2;
  C[i] = (i+1) * 2; 
  A[i] = B[i] + k * C[i];
}

// Using main thread printing the value of Array A
for(i=0; i<N; i++) {

		printf("Element: %lf", A[i]);
	}

}
