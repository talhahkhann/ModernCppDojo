// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LocatorValue.h"

int main()
{
	int value = 5;
	int nums[] = { 1, 2, 3 };
	struct Points
	{
		int x;
	};
	Points points{ 10 };
	getX() = 20;
	std::cout << getX() << std::endl;
	subscriptIndex(nums, 1) = 10; // This will modify the value at index 1 of the array to 10.
	std::cout << subscriptIndex(nums, 1) << std::endl;
	setValueAtAddress(&nums[2], 30); // This will modify the value at index 2 of the array to 30.
	setValueAtStructure(&points.x, 40); // This will modify the value of x in the structure to 40.
	setValueAtIncrement(value);
	setValueAtDecrement(value);
	return 0;
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
