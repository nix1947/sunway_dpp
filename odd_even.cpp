#include <iostream>
#include <thread>
#include <mutex>

using namespace std;


std::mutex mu;

void shared_print(string msg, int result) {
	mu.lock();
   std::cout<<msg<<result<<endl;
  mu.unlock();
}

void evenSum(long num) {
	int evens = 0;
 for(int i=1; i<=num; i++) {
    if(i%2 == 0)
  		evens += i; 
	}
	
	shared_print(string("The odd sum using core Thread 1 is"), evens);
}

void oddSum(long num) {
	int odds = 0;
 for(int i=1; i<=num; i++) {
    if(i%2 != 0)
  		odds += i; 
	}
	
	shared_print(string("The even sum using core Thread 2 is"), odds);
}


int main() {

	long num = 2456789129;
	std::thread t1(evenSum, num); 
	std::thread t2(oddSum, num );

	// make main thread to wait for child thread
 	t1.join();
	t2.join();
	return 0; 
}
