#include <iostream>
using namespace std;

class Date {

private:
	int day;
	int month;
	int year;

public:
	Date() {
		setDay(1);
		setMonth(6);
		setYear(1999);
	}

	Date(int d, int m, int y) {
		setDate(d, m, y);
	}

	void setDate(int d, int m, int y) {

		if (d >= 1 && d <= 31)
			setDay(d);
		else
			cout << "\aInvalid Day" << endl;

		if (m >= 1 && m <= 12)
			setMonth(m);
		else
			cout << "\aInvalid Month" << endl;

		if (y >= 1900 && y <= 9999)
			setYear(y);
		else
			cout << "\aInvalid Year" << endl;
	}

	// Setters:

	void setDay(int d) {
		day = d;
	}

	void setMonth(int m) {
		month = m;
	}

	void setYear(int y) {
		year = y;
	}

	// Getters:

	int getDay() {
		return day;
	}

	int getMonth() {
		return month;
	}

	int getYear() {
		return year;

	}

	void print() {
		cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
	}
};

int main() {

	Date d1;
	d1.setDate(1, 10, 2022);
	d1.print();

	cout << "============================================================" << endl;

	Date d2;
	d2.setDate(-1, 10, 2022);

	return 0;
}