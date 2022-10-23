#include <iostream>
using namespace std;

///////////////////////////////////////		Person Super Class 	///////////////////////////////////////

class Person
{
protected:
	string name;
	int age;

public:
	Person(string n = "Mohamed", int a = 18)
	{
		setName(n);
		setAge(a);
	}

	void setName(string n)
	{
		name = n;
	}

	string getName()
	{
		return name;
	}

	void setAge(int a)
	{
		age = a;
	}

	int getAge()
	{
		return age;
	}

	virtual void Print()
	{
		cout << "Name = " << getName() << endl;
		cout << "Age = " << getAge() << endl;
	}
};

///////////////////////////////////////		FixedEmployee Derived Class 	///////////////////////////////////////

class FixedEmployee : Person
{
protected:
	float salary;

public:
	FixedEmployee() :Person()
	{
		salary = 3000;
	}

	FixedEmployee(string n, int a, float s) : Person(n, a)
	{
		setSalary(s);
	}

	void setSalary(float s)
	{
		salary = s;
	}

	virtual float getSalary()
	{
		return salary;
	}

	virtual void Print()
	{
		Person::Print();
		cout << "Salary = " << getSalary() << endl;
	}
};

///////////////////////////////////////		HoulryEmployee Derived Class 	///////////////////////////////////////

class HoulryEmployee : FixedEmployee
{
private:
	int hours;
	float hoursRate;

public:
	HoulryEmployee() :FixedEmployee()
	{
		hours = 50;
		hoursRate = 200;
	}

	HoulryEmployee(string n, int a, float s, int h, float hr) :FixedEmployee(n, a, s)
	{
		hours = h;
		hoursRate = hr;
	}

	void setHours(int h)
	{
		hours = h;
	}

	int getHours()
	{
		return hours;
	}

	void setHoursRate(float h)
	{
		hoursRate = h;
	}

	float getHoursRate()
	{
		return hoursRate;
	}

	float getSalary()
	{
		salary = getHours() * getHoursRate();
		return salary;
	}

	void Print()
	{
		FixedEmployee::Print();
		cout << "Hours = " << getHours() << endl;
		cout << "Hours Rate = " << getHoursRate() << endl;
	}
};

///////////////////////////////////////		Main Function    	///////////////////////////////////////


int main()
{
	Person p("Ahmed", 20);
	p.Print();

	cout << "\n==========================================\n" << endl;

	FixedEmployee fe("Nada", 25, 5000);
	fe.Print();

	cout << "\n==========================================\n" << endl;

	HoulryEmployee hr("Ahmed", 30, 9000, 300, 500);
	hr.Print();

	return 0;
}