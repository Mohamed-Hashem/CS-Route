/*
	10.Write a program to read elements in a matrix and find the sum of main diagonal
	(major diagonal) elements of the matrix.

		Input
		Input array elements:
		1 2 3
		4 5 6
		7 8 9

		Output
		Sum of main diagonal elements = 15
*/

#include<iostream>
using namespace std;

int main() {
	int arr[3][3];
	int sum = 0;

	cout << "Input elements in matrix1: \n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				sum += arr[i][j];
			}
		}
	}

	cout << "Sum of main diagonal elements = " << sum;
	return 0;
}