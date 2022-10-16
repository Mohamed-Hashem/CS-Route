/*
	13. Write a program that take 3 integer from user then
	print the max element and the min element.

	Example 1
	Input
		7  8  5
	Output
		max element = 8
		min element = 5

	Example2
	Input
		3 6 9
	Output
		Max element = 9
		Min element = 3
*/

#include <iostream>
using namespace std;

int main()
{
	int num1{}, num2{}, num3{};
	int max{}, min{};

	cout << "Please Enter Three numbers to print the maximum and the minimum :" << endl;
	cin >> num1 >> num2 >> num3;

	if (num1 >= num2 && num1 >= num3)
		max = num1;
	else if (num2 >= num1 && num2 >= num3)
		max = num2;
	else
		max = num3;


	if (num1 <= num2 && num1 <= num3)
		min = num1;
	else if (num2 <= num1 && num2 <= num3)
		min = num2;
	else
		min = num3;

	cout << "The max number is : " << max << endl;
	cout << "The min number is : " << min << endl;

	return 0;
}