
# include <stdio.h>
#include "omp.h"

void main()
{
	int i, k, N=1000;
	int A[N], B[N], C[N];
#pragma omp parallel for
	for (i=0; i<N; i++) {
	A[i] = B[i] + k*C[i];
	}


printf("Array eleemnt is %d", A[0]);

}
