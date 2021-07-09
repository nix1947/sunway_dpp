#include <iostream>
#include "omp.h"

using namespace std;

long long evenSum(long num) {
	long long evens=0;
	for(int i=0; i<=num; i++){
		if(i%2 == 0) {
			evens += i;
    }
  }
	return evens;
}

long long oddSum(long num) {
	long long odds=0;
	for(int i=0; i<=num; i++){
		if(i%2 != 0) {
			odds += i;
    }
  }
	return odds;
}


int main() {

	long long num = 20000;
	long evenResult;
	long oddResult;
	
	// Run evenSum and oddSum function in parallel using two core.
	omp_set_num_threads(2); // Run using two thread.
	
	#pragma omp parallel sections 
   {
		#pragma omp section
	  evenResult = evenSum(num) ;
		#pragma omp section
	  oddResult = oddSum(num);
	}

	std::cout<<"The sum of evenNumbers is: "<<evenResult<<endl;
	std::cout<<"The sum of oddNumbers is: "<<oddResult<<endl;

return 0; 
}
