#include <iostream>
using namespace std;

class Time {

private:
	int hour;
	int minute;
	int second;

public:
	Time() {
		setHour(5);
		setMinute(15);
		setSecond(05);
	}

	Time(int h, int m, int s) {
		setTime(h, m, s);
	}

	void setTime(int h, int m, int s) {

		if (h >= 0 && h <= 23)
			setHour(h);
		else
			cout << "\aInvalid Hour" << endl;

		if (m >= 0 && m <= 59)
			setMinute(m);
		else
			cout << "\aInvalid Minute" << endl;

		if (s >= 0 && s <= 59)
			setSecond(s);
		else
			cout << "\aInvalid Second" << endl;
	}

	// Setters:

	void setHour(int h) {
		hour = h;
	}

	void setMinute(int m) {
		minute = m;
	}

	void setSecond(int s) {
		second = s;
	}

	// Getters:

	int getHour() {
		return hour;
	}

	int getMinute() {
		return minute;
	}

	int getSecond() {
		return second;

	}

	void print() {
		cout << getHour() << ":" << getMinute() << ":" << getSecond() << endl;
	}

	Time* nextSecond() {

		setSecond(getSecond() + 1);

		if (getSecond() >= 60) {
			setMinute(getMinute() + 1);
			setSecond(0);
		}

		if (getMinute() >= 60) {
			setHour(getHour() + 1);
			setMinute(0);
		}

		if (getHour() >= 24)
			setHour(0);

		return this;
	}

	Time* prevSecond() {
		setSecond(getSecond() - 1);

		if (getSecond() < 0) {
			setMinute(getMinute() - 1);
			setSecond(59);
		}

		if (getMinute() < 0) {
			setHour(getHour() - 1);
			setMinute(59);
		}

		if (getHour() < 0)
			setHour(23);

		return this;
	}
};

int main() {

	Time t1;
	t1.setTime(12, 15, 59);
	t1.print();

	t1.nextSecond();
	t1.print();

	t1.setTime(12, 15, 0);
	t1.prevSecond();
	t1.print();

	cout << "============================================================" << endl;

	Time t2;
	t2.setTime(24, 59, 59);

	return 0;
}