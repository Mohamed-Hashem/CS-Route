/*
	10. (4 Functions)

	Create a program with 4 functions:

	multiplication, division, summation, Subtraction,

	Have the user to choose which operation to perform, and ask him if he wants to repeat the program,
	if so, let him choose an operation from the start.
*/

#include<iostream>
using namespace std;

int multiplication(int x, int y) {
	return x * y;
}

int division(int x, int y) {
	if (y == 0) {
		cout << "Error: Division by zero is not allowed" << endl;
		return 0;
	}
	else
		return x / y;
}

int summation(int x, int y) {
	return x + y;
}

int Subtraction(int x, int y) {
	return x - y;
}

int main()
{

	char x;
	int y, z;

	while (true) {

		cout << "Enter 2 numbers : ";
		cin >> y >> z;

		cout << "Enter Operation =  ";
		cin >> x;

		switch (x) {

		case '+':
			cout << summation(y, z) << endl;
			break;
		case '-':
			cout << Subtraction(y, z) << endl;
			break;
		case '*':
			cout << multiplication(y, z) << endl;
			break;
		case '/':
			cout << division(y, z) << endl;
			break;
		default:
			cout << "\a you entered wrong answer" << endl;
		}

		cout << "you need to again or not (y/n) : ";
		cin >> x;

		if (x == 'y')
			continue;
		else
			break;
	}

	return 0;
}