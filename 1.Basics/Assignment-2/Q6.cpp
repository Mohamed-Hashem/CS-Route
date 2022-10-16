/*
	6. Write a program to print alphabets from a to z

	Output:
	a b c d …. Z
*/

#include <iostream>
using namespace std;

int main()
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		cout << i << ' ';
	}

	for (char i = 'A'; i <= 'Z'; i++)
	{
		cout << i << ' ';
	}

	return 0;
}