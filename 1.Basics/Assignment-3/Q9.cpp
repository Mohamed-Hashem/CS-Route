/*
	9. Write a C program to print a rhombus star pattern of N rows using a loop.

		input:
		Enter number of rows: 6

		output:
			 ******
			******
		   ******
		  ******
		 ******
		******

*/

#include <iostream>
using namespace std;

int main()
{
	int row;
	cout << "Enter number of rows : ";
	cin >> row;

	for (int i = 1; i <= row; i++)
	{
		for (int j = i; j <= row - 1; j++)
		{
			cout << " ";
		}

		for (int k = 1; k <= row; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}