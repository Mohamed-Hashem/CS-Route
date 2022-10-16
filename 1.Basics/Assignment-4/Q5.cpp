/*
	5. Write a C program to input radius of circle from user and find diameter,
	circumference and area of the given circle using function.

		Input
		Input radius: 10

		Output
		Diameter = 20 units
		Circumference = 62.83 units
		Area = 314.16 sq. units
*/

#include<iostream>
using namespace std;

void circle(int r) {

	cout << "Diameter = " << r * 2 << " units\n";

	cout << "Circumference = " << 2 * 3.1415 * r << " units\n";

	cout << "Area = " << 3.1415 * r * r << " sq.units\n";
}

int main() {
	int r;
	cin >> r;
	cout << "please enter the radius : ";

	circle(r);

	return 0;
}