#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {

	float cubeSide = 5.4;
	float sphereRadius = 2.33;
	float coneRadius = 7.65; 
	float coneHeight = 15; 

	// Volume Calculation
	float volCube, volSphere, volCone = 0;
	

	volCube = std::pow(cubeSide, 3);
	volSphere = (4.0/3.0) * M_PI * std::pow(sphereRadius, 3); // M_PI is in MATH
	volCone = M_PI * std::pow(coneRadius, 2) * (coneHeight/3);

	// Output
	std::cout<<"\nVolume of the cube:"<<volCube<<"\n";
	std::cout <<"\nVolume of Sphere: "<<volSphere<<"\n";
  std::cout <<"\nVolume of Cone: "<<volCone<<"\n";
	return 0;



	}
