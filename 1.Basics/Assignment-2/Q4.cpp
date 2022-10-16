/*
	4. Write a program to read 10 numbers from the user then print the average.

		Input
		5 3 2 6 7 1 10 9 8 4

		Output
		5.5
*/

#include <iostream>
using namespace std;

int main()
{
	float num, avg = 0, sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		cin >> num;
		sum += num;
	}

	avg = sum / 10;

	cout << avg;

	return 0;
}