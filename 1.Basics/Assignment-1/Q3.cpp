/*
	3. write a program that ask user to insert 3 integers then print the average as decimal number

		● input
			Please enter first number: 6
			Please enter second number: 4
			Please enter third number: 4

		● output
			The average = 4.66667
*/

#include <iostream>
using namespace std;

int main()
{
	float num1, num2, num3;

	cout << "Please enter first number: ";
	cin >> num1;

	cout << "Please enter second number: ";
	cin >> num2;

	cout << "Please enter third number: ";
	cin >> num3;

	float Average = (num1 + num2 + num3) / 3;

	cout << "\nSummation of 3 integers is " << Average;

	return 0;
}