#include <stdio.h>
#include <omp.h>

int main () {

	int a[100];
	int n[100];
	int b[100];

	#pragma omp parallel shared(n, a, b) private(i)
	{
		#pragma omp for
		for(i=0; i<n; i++) a[i] = i + 1;
		// there is an implied barrier, all threads wait for each other to complete.


	#pragma omp for
	for(i=0; i<n; i++) b[i] = 2 * a[i];

	} // End of parallel region.

return 0;
}
