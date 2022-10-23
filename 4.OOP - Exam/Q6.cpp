#include <iostream>
using namespace std;

class Point2D {
private:
	float x, y;

public:
	Point2D(float x, float y) {
		setX(x);
		setY(y);
	}

	Point2D() {
		setX(0.0);
		setY(0.0);
	}

	float getX() {
		return x;
	}

	float getY() {
		return y;
	}

	void setX(float x) {
		this->x = x;

	}

	void setY(float y) {
		this->y = y;
	}

	void setXY(float x, float y) {
		setX(x);
		setY(y);
	}

	float* getXY() {
		float arr[2] = { getX(),getY() };
		return arr;
	}
};
class Point3D : public Point2D {
private:
	float z;

public:
	Point3D(float x, float y, float z) : Point2D(x, y) {
		setZ(z);
	}

	Point3D() {
		setZ(0.0);
	}

	float getZ() {
		return z;
	}

	void setZ(float z) {
		this->z = z;
	}

	void setXYZ(float x, float y, float z) {
		setXY(x, y);
		setZ(z);
	}

	float* getXYZ() {
		float arr[] = { getX(),getY(),getZ() };
		return arr;
	}
};
