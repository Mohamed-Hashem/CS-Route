/*
	4. Write a function to find a cube of a given number.

		Input
		Input any number: 5

		Output
		Cube of 5 = 125
*/

#include<iostream>
using namespace std;

int cube(int x) {
	return x * x * x;
}

int main() {
	int x;
	cin >> x;

	cout << "please enter a number : \n";

	cout << x << "^3 = " << cube(x) << endl;

	return 0;
}