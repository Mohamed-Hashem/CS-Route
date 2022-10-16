/*
	12. Write a program that take character from user then if it
	is vowel chars (a,e,I,o,u), then print vowel otherwise print consonant

	Example 1
		Input o
		Output vowel

	Example 2
		Input b
		Output consonant
 */

#include <iostream>
using namespace std;

int main()
{
	char c;

	cout << "Please Enter a char : ";
	cin >> c;

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		cout << "vowel" << endl;
	else
		cout << "consonant" << endl;

	return 0;
}