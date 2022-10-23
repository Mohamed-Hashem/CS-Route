/*
	Q4. Write an example for Exception Handling?
*/

#include <iostream>
#include <exception>
using namespace std;

class DivisionByZeroInCalculator : public exception {
public:

	DivisionByZeroInCalculator() {}

	const char* what() const throw() {
		return "\aYou Can't Divide on Zero\n";
	}
};

class DivisionByNegativeInCalculator : public exception {
public:
	DivisionByNegativeInCalculator() {}

	const char* what() const throw() {
		return "\aYou Can't Divide on Number is Less Than Zero\n";
	}
};


int Divide(int x, int y) {
	if (y == 0)
		throw DivisionByZeroInCalculator();
	else if (y < 0)
		throw DivisionByNegativeInCalculator();
	else
		return y / x;
}

int main() {
	int x, y;
	cout << "Enter X : ";
	cin >> x;
	cout << "Enter Y : ";
	cin >> y;

	try {
		cout << "Result = " << Divide(x, y) << endl;
	}
	catch (DivisionByZeroInCalculator e) {
		cout << e.what();
	}
	catch (DivisionByNegativeInCalculator e) {
		cout << e.what();
	}

	return 0;
}
