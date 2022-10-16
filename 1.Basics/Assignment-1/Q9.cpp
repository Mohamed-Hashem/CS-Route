/*
	9. Write a program that reads an integer between 1
	and 12 and print the month of the year in English.

	● Input :
		Input a number between 1 to 12 to get the month name : 8
	● Output :
		August
*/


#include <iostream>
using namespace std;

int main()
{
	cout << "Please Enter the month number : ";

	int num{};
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "JAN\n";
		break;
	case 2:
		cout << "FEB\n";
		break;
	case 3:
		cout << "MAR\n";
		break;
	case 4:
		cout << "APR\n";
		break;
	case 5:
		cout << "MAY\n";
		break;
	case 6:
		cout << "JUN\n";
		break;
	case 7:
		cout << "Jul\n";
		break;
	case 8:
		cout << "AUG\n";
		break;
	case 9:
		cout << "SEP\n";
		break;
	case 10:
		cout << "OCT\n";
		break;
	case 11:
		cout << "NOV\n";
		break;
	case 12:
		cout << "DEC\n";
		break;
	default:
		cout << "Your Number Should be between 1 to 12\n";
		break;
	}
}