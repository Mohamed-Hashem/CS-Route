/*
	8. Write a program that allows to user to insert infinite integers until he insert negative number
	then print the max integer.

		Input
		5 3 8 7 9 4 -1

		Output
		9
*/

#include <iostream>
using namespace std;

int main()
{
	int number, max = INT_MIN;

	while (true)
	{
		cin >> number;

		if (number < 0)
		{
			break;
		}
		else if (number > max)
		{
			max = number;
		}
	}

	cout << max;

	return 0;
}