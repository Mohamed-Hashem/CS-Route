/*
	8. Write a program to find the maximum element in an array using the function.

		Input
		Elements in array: 5, 1, 6, 10, 2, 3, 6, 50, -7, 4

		Output
		Maximum element = 50
*/

#include<iostream>
using namespace std;

int arraymax(int arr[], int size) {

	int max = 0;

	for (int i = 0; i < size; i++) {

		if (max < arr[i])
			max = arr[i];
	}

	return max;
}

int main() {

	int arr[10];

	cout << "input array (10 elements): ";

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	cout << "Max of array: " << arraymax(arr, 10);
	return 0;
}