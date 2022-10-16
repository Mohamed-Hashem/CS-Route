/*
	6. Write a program to print all elements of an array using the function.

		Input
		Input elements: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

		Output
		Array elements: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
*/

#include<iostream>
using namespace std;

int arraySum(int arr[], int size) {

	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	return sum;
}

int main() {

	int arr[10];
	cout << "input array (10 elements): ";

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	cout << "Sum of array: " << arraySum(arr, 10);
	return 0;
}