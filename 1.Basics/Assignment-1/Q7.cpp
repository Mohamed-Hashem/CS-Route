/*
	7. Write a program that allows the user to insert an integer then print negative
		if it is a negative number otherwise print positive.

	● Example
		Input - 5
		Output negative
	● Example2
		Input 10
		Output positive
*/

#include <iostream>
using namespace std;

int main()
{
	int num{};

	cout << "Please Enter number : ";

	cin >> num;

	if (num > 0)
		cout << "Positive\n";
	else if (num < 0)
		cout << "Negative\n";
	else
		cout << "Zero is Natural Number (Not Positive or Negative)" << endl;
	
	return 0;
}
