#include "LocatorValue.h"
int x = 10; // x is an lvalue, and it has an address in memory. It can be modified and accessed.
int& getX() { return x; } //getX() = 20; This will modify the value of x to 20, since getX() returns a reference to x.


int& subscriptIndex(int arr[], int index)
{
	return arr[index]; // arr[index] is an lvalue, and it has an address in memory. It can be modified and accessed.
}

void setValueAtAddress(int* ptr, int value)
{
	*ptr = value;
}

void setValueAtStructure(int* ptr, int value)
{
	*ptr = value;
}

void setValueAtIncrement(int &value)
{
	++value = 10; // This will assign the value 10 to the parameter 'value', but it will not affect the original argument passed to the function.
}

void setValueAtDecrement(int &value)
{
	value-- = 20; // This will assign the value 20 to the parameter 'value', but it will not affect the original argument passed to the function.
}







