/*
	1. What are the differences between If Condition and Switch, with example?
	mention three differences. (15 Points)
*/

/*
	1- Can't use more than one expression like if
	2_ Break statment is used after each case
	3- Switch can not use relational operators but if can use them
	4- Switch use only ( Integer / Char / String ) values only other than that, don't accept it
*/

#include<iostream>
using namespace std;

// Switch Example
int main()
{
	int num;
	cout << "1_ Male " << endl;
	cout << "2_ Female " << endl;
	cout << "Please choose your gender : ";

	cin >> num;

	switch (num)
	{
	case 1:
		cout << "You choose Male" << endl;
		break;
	case 2:
		cout << "You choose Female " << endl;
		break;
	default:
		cout << "Invalid input " << endl;
		break;
	}
	return 0;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

//If Example
int main()
{
	int num;
	cout << "1_ Male " << endl;
	cout << "2_ Female " << endl;
	cout << "Please choose your gender : ";

	cin >> num;

	if (num == 1)
	{
		cout << "You choose Male " << endl;
	}
	else if (num == 2)
	{
		cout << "You choose Female " << endl;
	}
	else
	{
		cout << "Invalid input " << endl;
	}
	return 0;
}