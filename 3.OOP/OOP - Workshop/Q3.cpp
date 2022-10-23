#include <iostream>
using namespace std;

class GeometricObject
{
public:
	virtual double getParameter() = 0;
	virtual double getArea() = 0;
};

class Circle : GeometricObject
{
protected:
	double radius;

public:
	Circle()
	{
		setRadius(5);
	}

	Circle(double r)
	{
		setRadius(r);
	}
	void setRadius(double r)
	{
		radius = r;
	}

	double getRadius()
	{
		return radius;
	}

	double getParameter()
	{
		double parameter = 2 * 3.14 * radius;
		return parameter;
	}

	double getArea()
	{
		double Area = 3.14 * radius * radius;
		return Area;
	}
};


class Resizable
{
public:
	virtual void Resize(int percent) = 0;
};

class ResizableCircle : Circle, Resizable
{
public:
	ResizableCircle() :Circle() {}
	ResizableCircle(double r) :Circle(r) {}

	void Resize(int percent)
	{
		radius = radius * (percent / 100);
		cout << "Radius = " << radius << endl;
	}
};

int main()
{
	Circle c1(8);

	cout << "Area = " << c1.getArea() << endl;
	cout << "Parameter = " << c1.getParameter() << endl;

	cout << "\n===============================\n" << endl;
	ResizableCircle rc(10);
	rc.Resize(100);

	return 0;
}
