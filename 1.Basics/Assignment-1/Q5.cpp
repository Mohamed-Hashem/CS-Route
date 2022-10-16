/*
	5. Write a program to convert specified days into years, weeks and days.

		● Input : Number of days : 1329

		● Output :
			Years: 3
			Weeks: 33
			Days: 3
*/

#include <iostream>
using namespace std;

int main()
{
	int day = { 0 }, years{ 0 }, weeks = { 0 }, days = { 0 };

	cout << "Number of days : ";

	cin >> day;

	years = day / 365;

	weeks = (day % 365) / 7;

	days = day - ((years * 365) + (weeks * 7));

	cout << "Years = " << years << endl;
	cout << "weeks = " << weeks << endl;
	cout << "Days = " << days << endl;

	return 0;
}