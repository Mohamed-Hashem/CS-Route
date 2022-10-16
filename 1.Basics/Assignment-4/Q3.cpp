/*
	3. Create a function, take an integer then return true if this number is prime
	otherwise return false
*/

#include<iostream>
using namespace std;

bool is_prime(int x) {

	int count = 0;
	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
			count++;
	}

	if (count == 2)
		return true;
	else
		return false;
}

int main() {

	int num;
	cin >> num;
	cout << "please enter number :\n ";

	if (is_prime(num))
		cout << "Your Number is prime  \n";
	else
		cout << "Your Number not prime \n";

	return 0;
}