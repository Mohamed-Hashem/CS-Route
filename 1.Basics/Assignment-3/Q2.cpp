/*
	2. Write a program to print inverted right triangle star pattern series using loop.

		Input
		rows: 6

		output

		******
		*****
		****
		***
		**
		*
*/

#include <iostream>
using namespace std;

int main()
{
	int row;
	cout << "row : ";
	cin >> row;

	for (int i = 1; i <= row; i++)
	{
		for (int j = i; j <= row; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}