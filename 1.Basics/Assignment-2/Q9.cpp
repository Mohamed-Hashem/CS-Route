/*
	9. Write a program to input a number and calculate its factorial.

		Input:
		5

		Output:
		The factorial is: 120

		Hint: factorial of 5 is 1 * 2 *  3 * 4 * 5 = 120
*/

#include <iostream>
using namespace std;

int main()
{
	int number, factorial{ 1 };

	cout << "Enter Number : ";
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}

	cout << "The factorial is: " << factorial;

	return 0;
}