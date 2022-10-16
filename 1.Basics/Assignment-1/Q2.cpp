/*
	2. write a program that ask user to insert 3 numbers then print the sum

		● input
			Please enter first number: 5
			Please enter second number: 3
			Please enter third number: 4

		● output
			Summation of 3 integers is 12
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Please enter first number: ";
	cin >> num1;

	cout << "Please enter second number: ";
	cin >> num2;

	cout << "Please enter third number: ";
	cin >> num3;

	cout << "\nSummation of 3 integers is " << num1 + num2 + num3;

	return 0;
}