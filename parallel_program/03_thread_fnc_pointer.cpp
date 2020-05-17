#include <iostream>
#include <thread>
#include <string>
using namespace std;

void func(std::string name) {

	for(int i=0; i<1000; i++){
		std::cout<<"thread function execution"<<name<<std::endl;
		std::cout<<"ID:"<<std::this_thread::get_id()<<std::endl;
	}
}


int main () {

	std::thread t1(func, "1");
	std::thread t2(func, "2");

	int t1_id = t1.get_id();
	int t2_id = t2.get_id();


	std::cout<<"Thread 1 id is"<<t1_id<<std::endl;
	std::cout<<"Thread 2 id is"<<t2_id<<std::endl;


	// Main thread code
	for(int i=0; i<100; i++) {
		std::cout<<"Main thread execcution"<<std::endl;
	}

	// Wait main program completeion
	t1.join(); 
	t2.join();

	// Completion of main thread.
	std::cout<<"Exit from main thread"<<std::endl;
	
	// Printing the thread id
	std::this_thread::get_id();

	return 0;

}





