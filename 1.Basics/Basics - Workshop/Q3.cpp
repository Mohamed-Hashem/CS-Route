/*
	3. (N Divisors)

	Given a number N.
	Print all the divisors of N in ascending order.
*/

#include<iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {

		if (N % i == 0) {
			cout << i << ' ';
		}
	}

	return 0;
}