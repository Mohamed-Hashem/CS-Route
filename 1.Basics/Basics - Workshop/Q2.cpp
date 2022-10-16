/*
	Q2. (Sum from N To M)

	Write a program that allow user to insert two integers N and M
	and print the summation of all numbers between N and M.
*/

#include<iostream>
using namespace std;

int main() {

	int N, M, sum = 0;

	cin >> N >> M;

	for (int i = N; i <= M; i++)
	{
		sum += i;
	}

	cout << "sum = " << sum;

	return 0;
}