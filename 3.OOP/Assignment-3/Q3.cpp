/*
	Q3. Create Calculator class contains 2 data members with the same template data
		type and contains 4 method Add(), Subtract(), Multiply() and Divide()
*/

#include <iostream>
#include <exception>
using namespace std;

template <class T>
class DivisionByZeroInCalculator : public exception {
	T num;
public:
	DivisionByZeroInCalculator(T n) {
		setNum(n);
	}

	void setNum(T n) {
		this->num = n;
	}

	T getNum() {
		return num;
	}

	const char* what() const throw() {
		return "\aYou Can't Divide on Zero\n";
	}
};

template <class T>
class Calculator {
	T num1;
	T num2;
public:
	Calculator(T num1, T num2) {
		setNum1(num1);
		setNum2(num2);
	}

	void setNum1(T n)
	{
		num1 = n;
	}

	void setNum2(T n)
	{
		if (num2 == 0)
			cout << "\aYOU'LL NOT BE ABLE TO DIVIDE " << num1 << " By Zero" << endl;
		else
			num2 = n;
	}

	T getNum1() {
		return num1;
	}

	T getNum2() {
		return num2;
	}

	void Add() {
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	}

	void Subtract() {
		cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
	}

	void Multiply() {
		cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
	}

	void Divide() {
		if (num2 == 0)
			throw DivisionByZeroInCalculator<T>(num1);

		cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
	}

};


int main()
{
	try {
		Calculator<int> c1(5, 10);

		c1.Add();
		c1.Subtract();
		c1.Multiply();
		c1.Divide();
	}
	catch (DivisionByZeroInCalculator<int>& ex) {
		cout << ex.what();
	}

	cout << "\n============================================================\n\n";

	try {

		Calculator<float> c2(5.0, 0);

		c2.Add();
		c2.Subtract();
		c2.Multiply();
		c2.Divide();
	}
	catch (DivisionByZeroInCalculator<float>& ex) {
		cout << ex.what();
	}

	return 0;
}