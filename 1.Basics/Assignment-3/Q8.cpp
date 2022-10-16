/*
	1. Write a program to print an equilateral triangle or Pyramid star pattern series
	of n rows using a loop.

	Input
		rows: 5

	Output
		*
	   ***
	  *****
	 *******

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
		for (int j = i; j <= row - 1; j++)
		{
			cout << " ";
		}

		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}