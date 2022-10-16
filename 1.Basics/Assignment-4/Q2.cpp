/*
	2. Create a function, take three integers then return the average as float value then
	call this method in main.
*/

#include<iostream>
using namespace std;


float Avrage(int x, int y, int z) {

	return (x + y + z) / 3.0;
}

int main() {
	cout << "please enter 3 numbers : \n";
	int x, y, z;

	cin >> x >> y >> z;

	cout << "the Avg is = " << Avrage(x, y, z);

	return 0;
}