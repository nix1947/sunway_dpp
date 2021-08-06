#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

// Shared variable to implement the inter thread communication
long long evenSumResult=0; 
long long oddSumResult=0; 

std::mutex mu;

void shared_print(string msg, long long result) {
	mu.lock();
   std::cout<<msg<<result<<endl;
  mu.unlock();
}

void evenSum(long long num) {
	long long evens = 0;
 for(int i=1; i<=num; i++) {
    if(i%2 == 0)
  		evens += i; 
	}
	
	evenSumResult = evens;
	// shared_print(string("The odd sum using core Thread 1 is"), evens);
}

void oddSum(long long num) {
	long long odds = 0;
 for(int i=1; i<=num; i++) {
    if(i%2 != 0)
  		odds += i; 
	}
	
	oddSumResult = odds;
	// shared_print(string("The even sum using core Thread 2 is"), odds);
}


int main() {

	long long num = 1250;
	std::thread t1(evenSum, num); 
	std::thread t2(oddSum, num );

	// Access the result of thread 1 and thread 2 by reading the value of evenSumResult and oddSumResult and do the compution
  // Using this main thread. 

	long long finalResult; 

  finalResult = evenSumResult + oddSumResult; 
	std::cout<<"The total sum is "<<finalResult<<endl; 

	// make main thread to wait for child thread
 	t1.join();
	t2.join();
   
	return 0; 
}
