#include "include.h"

/*
Write a function named findArea that takes a Rectangle as an argument and returns the area of the rectangle.
*/


struct Point
{
	double x, y;
};

struct rectangle
{
	Point upper_left;
	double width, height;
};

Point upper_left = { 13.0, 6.0 };
rectangle Rec_1 = { upper_left, 6.0, 20.0 };

void find_area(rectangle x)
{
	double w = x.width;
	double h = x.height;
	double area = w * h;
	cout << "width = " << w << endl;
	cout << "height = " << h << endl;
	cout << "w x h = area = " << area;
}

int main()
{
	find_area(Rec_1);
}