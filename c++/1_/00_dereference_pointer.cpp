#include<cstdio>
#include <iostream>

/*
But what if we have a pointer and want to access the value stored in that address? That process is called dereferencing, and it is indicated by adding the operator * before the variable's name. This same operator should be used to declare a variable that is meant to store a pointer.
*/


int main() {
	 // this is an integer variable with value = 54
		int a = 54; 

	// this is a pointer that holds the address of the variable 'a'.
	// if 'a' was a float, rather than int, so should be its pointer.
	int * pointerToA = &a;  

	// If we were to print pointerToA, we'd obtain the address of 'a':
	std::cout << "pointerToA stores " << pointerToA << '\n';

	// If we want to know what is stored in this address, we can dereference pointerToA:
	std::cout << "pointerToA points to " << * pointerToA << '\n';

	return 0;

}
