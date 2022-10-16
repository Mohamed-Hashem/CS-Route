/*
	6. Write a program that take number from user then print yes if that number can divide by 3 and 4
	otherwise print no

		● Example1
			Input 12
			Output Yes

		● Example 2
			Input 9
			Output No
*/

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num % 3 == 0 && num % 4 == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}
