#include<iostream>
#include <thread>
using namespace std; 

void function() {
	for(int i=0; i<100; i++)
		std::cout<<"Child Thread "<<i<<endl; 
}


int main() {

	// g++-8 -pthread filename.cpp -o outputfile
	std::thread t1(function); // start t1 thread
	
	for(int i=0; i < 100; i++) {
		std::cout<<"Main Thread"<<i<<endl;
	}


	t1.join(); // Main thread waits for t1 to finish.
	return 0;

}
