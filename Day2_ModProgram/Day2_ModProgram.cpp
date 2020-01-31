/*
CSCI 182 - Assignment 1
Day2_ModProgram.cpp
Manually create a Mod function for use

Landon Reekstin
v1.0 1/29/2020
*/

#include <iostream>



// Get the min value of two input values
int GetMinValue(int valueA, int valueB)
{
	if (valueA < valueB) {
		return valueA;
	}
	else {
		return valueB;
	}
}

//Finding mod by div, mult, then sub
int Mod1(int valueA, int valueB) {
	if (valueB != 0) { //make sure it does not divide by 0
		int valueC = valueA / valueB;
		int mod = valueA - (valueC * valueB);

		return mod;
	}
}

//Finding mod by repeatedly subtracting valueB from valueA until it can b longer do so and be positive. This leaves valueA as the remainder
int Mod2(int valueA, int valueB) {
	if (valueB != 0) {
		while (valueA >= valueB) {
			valueA = valueA - valueB;
		}
		return valueA;
	}

} 



int main()
{
	//   std::cout << "Hello World!\n";

	int a = 400;

	int b = 150;

	// Find the minimum value and pretty print to the console
	std::cout << "Min Value: " << GetMinValue(a, b) << "\n";
	std::cout << "Modulous Method 1: " << Mod1(a, b) << "\n";
	std::cout << "Modulous Method 2: " << Mod2(a, b) << "\n";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
