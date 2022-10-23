/*
	Q3. Write an example for Template?
*/

#include <iostream>
using namespace std;

template <class T>
class Sum {
private:
	T number1;
	T number2;

public:
	Sum(T n1, T n2) {
		number1 = n1;
		number2 = n2;
	}

	T result() {
		return number1 + number2;
	}
};


int main() {

	Sum<int> s(5, 10);

	cout << "Result = " << s.result() << endl;

	return 0;
}