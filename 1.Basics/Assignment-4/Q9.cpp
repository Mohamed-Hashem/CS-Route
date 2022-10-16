/*
	9. Write a program to read elements in two matrices and add elements of both
	matrices.

		Input
		Input elements in 3x3 matrix1:
		1 2 3
		4 5 6
		7 8 9

		Input elements in 3x3 matrix2:
		9 8 7
		6 5 4
		3 2 1

		Output
		Sum of both matrix =
		10 10 10
		10 10 10
		10 10 10
*/

#include<iostream>
using namespace std;


int main() {

	int arr1[3][3], arr2[3][3];

	cout << "Input elements in matrix1: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr1[i][j];
		}
	}

	cout << "Input elements in matrix1: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr2[i][j];
		}
	}

	cout << "Sum of both matrix : \n";
	int sum[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {
			cout << sum[i][j] << " ";
		}

		cout << endl;
	}
	return 0;
}