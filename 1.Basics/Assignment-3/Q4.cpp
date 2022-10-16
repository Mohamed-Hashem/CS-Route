/*
	4. Write a program to input elements in an array and search whether an element
	exists in the array or not.

		Input
		elements in array: 10, 12, 20, 25, 13, 10, 9, 40, 60, 5
		Element : 25

		output
		Element found at index 3
*/

#include <iostream>
using namespace std;

int main()
{
	int arr[10] = {}, target, index = 0;

	cout << "elements in array: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	cout << "Element : ";
	cin >> target;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == target)
		{
			index = i;
			break;
		}
	}

	if (index != 0)
		cout << "Element found at index: " << index << endl;
	else
		cout << "Element Not Found in Array: ";

	return 0;
}