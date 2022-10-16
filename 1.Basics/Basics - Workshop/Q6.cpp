/*
	6. (sum of series)

	Enter Number N and Find the sum of the series 1 +11 + 111 + 1111 + .. N terms

	Input :
	5

	Output :
	1 + 11 + 111 + 1111 + 11111
	The sum of the series = 12345
*/

#include<iostream>
using namespace std;

int main() {
	int number, sum = 0;

	cin >> number;

	for (int i = 1; i <= number; i++) {
		sum += i;

		for (int j = 1; j <= i; j++) {
			cout << "1";
		}

		if (i != number) cout << " + ";
	}

	cout << "\nThe sum of series = " << sum << '\n';

	return 0;
}