/*
	6. (Frequency Array)

	Write a program to count the frequency of each element of an array.

		Input :
		25 12 43 25 10

		Output :
		The frequency of all elements of an array :
		25 occurs 2 times
		12 occurs 1 times
		43 occurs 1 times
*/

#include<iostream>
using namespace std;

int main() {
	int arr[10], freq[10]{}, maxNumber = -5465; // enter from 1 to 10

	for (int i = 0; i < 10; i++) {

		cin >> arr[i];

		if (arr[i] > maxNumber)
			maxNumber = arr[i]; // to make a flag to the biggest number to loop until it.

		freq[arr[i]]++; // freq[arr[i]] = freq[arr[i]] + 1;
	}

	for (int i = 0; i < maxNumber; i++)
	{
		if (freq[i] != 0)
			cout << i << " occurs " << freq[i] << " times" << endl;
	}

	return 0;
}