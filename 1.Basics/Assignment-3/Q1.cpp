/*
	1. Write a program to print hollow right triangle star pattern series using loop.

			Input
			rows: 6

			output
			*
			**
			* *
			*  *
			*   *
			******
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
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i || i == row)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}