/*
	4. Write a function take an integer array and return average, then call it in
	 main function.
*/

#include <iostream>
using namespace std;

float avg(int arr[], int size)
{
	float sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum / size;
}

int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number : ";
		cin >> arr[i];
	}

	cout << "the average of array is " << avg(arr, 10) << endl;

	return 0;
}
