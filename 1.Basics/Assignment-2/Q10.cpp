/*
	10. Write a program to find the power of a number.

		Input base: 2
		Input exponent: 5

		Output:
		2^5 = 32
*/

#include <iostream>
using namespace std;

int main()
{
	int base, exponent, result{ 1 };

	cout << "Input base: ";
	cin >> base;

	cout << "Input exponent: ";
	cin >> exponent;

	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}

	cout << base << '^' << exponent << " = " << result;

	return 0;
}