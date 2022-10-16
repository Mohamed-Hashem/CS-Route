/*
	8. (Diagonals of matrix 2D)

	Print the Diagonals (الاقطار) of Matrix 2D

		Input :
		1 2 3
		4 5 6
		7 8 9

		Output:
		1 3 5 7 9
*/

#include<iostream>
using namespace std;

int main() {

	int arr[3][3];

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 3; j++) {

			if (i == j || (i + j) == 2) {

				cout << arr[i][j] << ' ';
			}
		}
	}

	return 0;
}