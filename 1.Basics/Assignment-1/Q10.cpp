/*
	10. Write a program to convert a given integer (in seconds) to hours, minutesand seconds.

	● Input :
		Input seconds : 25300

	● Output :
		H:M:S - 7 : 1 : 40
*/

#include <iostream>
using namespace std;

int main()
{
	cout << "Please Enter number of seconds: ";

	int num{ 0 }, hours{ 0 }, minutes{ 0 }, seconds{ 0 };

	cin >> num;

	hours = num / (60 * 60);
	minutes = (num % (60 * 60)) / 60;
	seconds = num - 60 * 60 * hours - 60 * minutes;

	cout << "H:M:S - " << hours << ":" << minutes << ":" << seconds << endl;
}