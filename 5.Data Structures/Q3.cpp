#include <iostream>
using namespace std;

int Fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		cout << "Fibonacci " << i << " is " << Fibonacci(i) << endl;
	}

	return 0;
}
