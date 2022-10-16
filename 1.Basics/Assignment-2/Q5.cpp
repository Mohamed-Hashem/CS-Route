/*
	5. Write a program i to display the multiplication table of a given integer

		Input
		5

		Output
		1*5 = 5
		2*5 = 10
		…
		…
		12*5 = 60
*/

#include <iostream>
using namespace std;

int main()
{
	int num;

	cin >> num;

	for (int i = 1; i <= 12; i++)
	{
		cout << i << " * " << num << " = " << i * num << endl;
	}

	return 0;
}