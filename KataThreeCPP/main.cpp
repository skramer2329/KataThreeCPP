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

	//bool datatypes:
	bool found = false;
	//search algorithm -> if found, found = true;
	//std::cout << found << std::endl; will only print found as 0 to the console. std::boolalpha will print found as false to the console.
	std::cout << std::boolalpha << found << std::endl;

	//This is another way to print...
	found = true;
	if (found) std::cout << "This is true";

	//floating point numbers:

	double b = 7.7E4; //This is one way to store a double, 77000
	std::cout << b << std::endl;

	float a = 10.0 / 3; //float is 6 precise digits. Double is 15 precise digits. Long double is 18 precise digits. Best to go with doubles for the most part...

	//Constants:
	const int x = 5; //read only variable
	enum { y = 100 }; //another constant... not sure what difference is.

	return 0;
}

//very basic definition of multiply function. 
int multiply(int x, int y) {
	return x * y;
}



