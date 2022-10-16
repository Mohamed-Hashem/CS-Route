/*
	5. (Count Steps)

	Enter Number and Count the number of steps require to make the Number equal to Zero.
	- if Number is Odd decrease one from it
	- If Number is Even divide it by 2

		Input : 15

		Output : 7
*/

#include<iostream>
using namespace std;

int main() {

	int number, counter = 0;
	cin >> number;

	while (number > 0)
	{
		if (number % 2 == 0)
			number /= 2;
		else
			number -= 1;

		counter++;
	}


	cout << counter << '\n';

	return 0;
}