/*
		3. Write a program to input elements in an array from the user and count even and odd
		elements in the array.

			Input
			array: 1 2 3 4 5 6 7 8 9

			Total even elements: 4
			Total odd elements: 5
*/

#include <iostream>
using namespace std;

int main()
{
	int arr[9] = {}, even{ 0 }, odd{ 0 };
	cout << "array: ";

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];

		if (arr[i] % 2 == 0)
			even++;
		else
			odd++;
	}

	cout << "Total even elements: " << even << endl;
	cout << "Total odd elements: " << odd << endl;

	return 0;
}