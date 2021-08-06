
// Headers files

#include<iostream>

#include <thread>

using namespace std; 

void function() {

// Logic of a function
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

// Write a Program to implement thread in C++, such that the program should run 4 threads independently. 



t1.join
t2.join
t3.join
t4.join

exit

// 




# WAP to implment simple calculator using thread. 


add(int a, int b) 
sub()
mul() 
div() 

thread t1(add, a, b) 
thread t2(sub)
thread t3(mul)
thread t4(div)

t1.join



