/*
	5. Write a program to input elements in an array and copy all elements of the
	first array into the second array.

		Input
		array1 elements: 10 1 95 30 45 12 60 89 40 -4

		output
		Array1: 10 1 95 30 45 12 60 89 40 -4
		Array2: 10 1 95 30 45 12 60 89 40 -4
*/

#include <iostream>
using namespace std;

int main()
{
	int arr1[10] = {}, arr2[10] = {};

	cout << "array1 elements: ";

	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	cout << "\nArray1 : ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr1[i] << ' ';
	}

	cout << "\nArray2 : ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr2[i] << ' ';
	}

	return 0;
}