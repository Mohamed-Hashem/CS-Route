/*
	5. Create a function take two integers to swap them,
	then call it in main function.
*/

#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "Please First Number : ";
	cin >> a;

	cout << "Please Second Number : ";
	cin >> b;

	cout << " a in the main before changing is  " << a << endl;
	cout << " b in the main before changing is  " << b << endl;

	swap(a, b);

	cout << " a in the main after changing is  " << a << endl;
	cout << " b in the main after changing is  " << b << endl;

	return 0;
}