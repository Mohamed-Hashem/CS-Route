/*
	6. Write a program to input elements in array and print all unique elements in
	array.

		Input
		array elements: 1 2 3 5 1 5 20 2 12 10

		Output
		All unique elements in the array are: 3, 20, 12, 10
*/

#include <iostream>
using namespace std;

int main()
{
	int arr[10] = {};

	cout << "array1 elements: ";

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int counter = 0; // to check if element is unique or not

	cout << "All unique elements in the array are: ";
	for (int i = 0; i < 10; i++)
	{
		counter = 0;

		for (int j = 0; j < 10; j++) {
			{
				if (arr[i] == arr[j])
				{
					counter++;
				}
			}
		}

		if (counter == 1)
			cout << arr[i] << ' ';
	}
	return 0;
}