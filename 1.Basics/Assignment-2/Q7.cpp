/*
	7. Write a program that allows to user to insert infinite integers until he insert negative number
	then print summation of all integers

		Input
		5 7 8 3 2 -1

		Output
		25
*/

#include <iostream>
using namespace std;

int main()
{
	int number, sum = 0;

	while (true)
	{
		cin >> number;

		if (number < 0)
		{
			break;
		}

		sum += number;
	}

	cout << sum;

	return 0;
}