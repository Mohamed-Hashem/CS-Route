/*
	7. Write a program to input elements in two arrays and merge two arrays to the
	third array.

		Input
		first array elements: 1 4 6 9 15
		second array elements: 2 5 8 10 17

		Output
		Merged array in ascending order = 1, 2, 4, 5, 6, 8, 9, 10, 15, 17
*/

#include <iostream>
using namespace std;

int main()
{
	int arr1[5] = {}, arr2[5] = {}, arr3[10] = {};

	cout << "first array elements: ";

	for (int i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}

	cout << "second array elements: ";

	for (int i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	// Merge Two Arrays into one array
	for (int i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i];
	}

	for (int i = 0; i < 5; i++)
	{
		arr3[5 + i] = arr2[i];
	}

	// sort the Merged Array (Bubble Sort)
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++) {

			if (arr3[j] > arr3[j + 1])
			{
				int temp = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = temp;
			}
		}
	}

	cout << "Merged array in ascending order = ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr3[i] << ' ';
	}

	return 0;
}