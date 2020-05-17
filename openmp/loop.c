#include <stdio.h>
#include <omp.h>

int main () {

	int i; 
	int n=20;
	int a[20];
	
	#pragma omp parallel for shared(n, a,i) 
		for(i=0; i<n; i++) {
				printf("%d", i);
			}
return 0;
}
