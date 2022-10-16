/*
	4. (Digits)

	Given a number N.
	Print the digits of that number from right to left separated by space.
*/

#include<iostream>
using namespace std;

int main() {

	int N, lastDidit;

	cin >> N;

	while (N > 0) {
		lastDidit = N % 10;
		N /= 10;
		cout << lastDidit << ' ' << endl;
	}

	return 0;
}