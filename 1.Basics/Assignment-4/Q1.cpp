/*
	1. Create a void function, take an integer then print it then call this method in main.
*/

#include<iostream>
using namespace std;

void print(int x) {
	cout << "\nNumber = " << x;
}

int main() {
	cout << "please enter a number : ";
	int x;
	cin >> x;

	print(x);

	return 0;
}
