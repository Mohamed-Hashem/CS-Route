/*
	9. (second smallest element in an array)

	Write a program  to find the second smallest element in an array.

		Input :
		5 7 2 1 8

		Output :
		2
*/

#include<iostream>
using namespace std;


int main() {
	int arr[10], size, min = 0, secondMin = 0;

	for (int i = 0; i < 10; i++) {
		
		cin >> arr[i];
	}

	min = arr[0];
	secondMin = arr[1];

	for (int i = 2; i < 10; i++) {

		if (arr[i] < min) {
			secondMin = min;
			min = arr[i];
		}
		else if (arr[i] < secondMin)
		{
			secondMin = arr[i];
		}
	}

	cout << "second smallest  : " << secondMin << '\n';

	return 0;
}