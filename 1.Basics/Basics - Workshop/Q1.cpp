/*
	1. (Swap Two Numbers)
	
	How to Swap Two Numbers

		Input : 5 6

		Output: 6 5
*/

#include<iostream>
using namespace std;

int main() {

	int N, M, temp = 0;

	cout << "First Num = ";
	cin >> N;
	cout << "Second Num = ";
	cin >> M;

	temp = N;
	N = M;
	M = temp;

	cout << "First Num = " << N << endl;
	cout << "Second Num = " << M << endl;

	return 0;
}
