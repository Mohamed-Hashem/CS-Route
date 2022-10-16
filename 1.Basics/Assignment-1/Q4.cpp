/*
   4. Write a program to compute the perimeter and area of a rectangle.
   Your code should ask user to insert the width and the height

	   ● input
			Width = 5
			Height = 3

	   ● Output
		   The perimeter = 16
		   The area = 15
*/

#include <iostream>
using namespace std;

int main()
{
	float width, height;

	cout << "Please enter Width: ";
	cin >> width;

	cout << "Please enter Height: ";
	cin >> height;

	float perimeter = (width + height) * 2;
	float area = width * height;

	cout << "The perimeter = " << perimeter << endl;
	cout << "The area = " << area;

	return 0;
}