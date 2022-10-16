/*
	8. Write a program that reads 5 numbers and sum
		of all odd values between them.

	● Input :
		Input the first number: 11
		Input the second number: 17
		Input the third number: 13
		Input the fourth number: 12
		Input the fifth number: 5

	● Output:
		Sum of all odd values: 46
*/

#include <iostream>
using namespace std;

int main()
{
	int num1{}, num2{}, num3{}, num4{}, num5{}, sum{};

	cout << "Please enter first number: ";
	cin >> num1;

	cout << "Please enter second number: ";
	cin >> num2;

	cout << "Please enter third number: ";
	cin >> num3;

	cout << "Please enter Forth number: ";
	cin >> num4;

	cout << "Please enter Fifth number: ";
	cin >> num5;

	if (num1 % 2 != 0)
		sum += num1;

	if (num2 % 2 != 0)
		sum += num2;

	if (num3 % 2 != 0)
		sum += num3;

	if (num4 % 2 != 0)
		sum += num4;

	if (num5 % 2 != 0)
		sum += num5;

	cout << "\nSum of all odd values: " << sum;

}
