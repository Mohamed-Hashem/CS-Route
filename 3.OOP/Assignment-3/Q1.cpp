/*
	Q1. Create function take 2 params of any type then return the max (Template)
*/

#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b)
{
	return a > b ? a : b;
}

int main()
{
	cout << "Max Between Two Integers : " << Max(1, 2) << endl;

	cout << "Max Between Two Doubles : " << Max(5.5, 12.5) << endl;

	cout << "Max Between Two Strings : " << Max("Mohamed", "Ahmed") << endl;

	return 0;
}