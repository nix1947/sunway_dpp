#include<iostream>
#include <thread>
using namespace std; 

void function() {
	std::cout<<"Hello world!!"<<endl; 
}


int main() {

	std::thread t1(function); // start t1 thread
	t1.join(); // Main thread waits for t1 to finish.

	return 0;

}
