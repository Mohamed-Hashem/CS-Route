/*
	Q2. Create function take 2 params of any type then swap them and pass data by
	parameters (Template)
*/

#include <iostream>
using namespace std;

template <class T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int num1 = 5, num2 = 10;

	cout << "Value of Num1 before Swap : " << num1 << endl;
	cout << "Value of Num2 before Swap : " << num2 << endl << endl;

	Swap(num1, num2);

	cout << "Value of Num1 after Swap = " << num1 << endl;
	cout << "Value of Num2 after Swap = " << num2 << endl;

	cout << "\n============================================\n" << endl;

	string str1 = "Mohamed", str2 = "Hashem";

	cout << "Value of Str1 before Swap : " << str1 << endl;
	cout << "Value of Str2 before Swap : " << str2 << endl << endl;

	Swap(str1, str2);

	cout << "Value of Str1 after Swap = " << str1 << endl;
	cout << "Value of Str2 after Swap = " << str2 << endl;

	return 0;
}