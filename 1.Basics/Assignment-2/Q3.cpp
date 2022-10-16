/*
	3. Write a program that takes an integer from the user then print the sum of (1 up to n).

		Input
		5

		Output:
		15

		Hint: sum = 1+2+3+4+5=15
*/

#include <iostream>
using namespace std;

int main()
{
	int num{ 0 }, sum = 0;

	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}

	cout << sum;

	return 0;
}