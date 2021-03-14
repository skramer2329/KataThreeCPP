#include <iostream>
#include <cmath>
//This code is about creating and calling functions
//I need to at least declare the functions before main. Otherwise it won't work. Line 5 needs to come before main. Note: can declare AND define also.
int multiply(int, int);


int main() {

	//example of calling function
	int z = multiply(5, 2);
	std::cout << z << std::endl;

	//need to #include <cmath>
	std::cout << pow(10, 2) << std::endl;
	
	int base, exponent;
	std::cout << "What is the base?\n";
	std::cin >> base;

	std::cout << "What is the exponent?\n";
	std::cin >> exponent;

	std::cout << "The base is " << base << " and the exponent is " << exponent << std::endl;
	std::cout << "The result is " << pow(base, exponent) << std::endl;

	double power = pow(base, exponent);
	std::cout << power << std::endl;

	return 0;
}

//very basic definition of multiply function. 
int multiply(int x, int y) {
	return x * y;
}



