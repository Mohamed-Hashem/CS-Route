/*
	11. Write a program that allows the user to insert integer number then Even or Odd
	using ternary operators

	● Example 1
		Input 8
		Output even

	● Example 2
		Input 7
		Output odd
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Please Enter number : ";

	int num{};

	cin >> num;

	cout << ((num % 2 == 0) ? "Even" : "Odd") << endl;
}