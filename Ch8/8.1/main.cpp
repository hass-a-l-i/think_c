#include "include.h"

/*
Write function named lowerRight that takes a Rectangle as an argument and returns a Point with the location of the lower right hand corner
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

void print_point(Point coordinate)
{
	cout << "(" << coordinate.x << ", " << coordinate.y << ")" << endl;
}

void lower_right(rectangle x)
{
	cout << "Input upper left point is ";
	print_point(upper_left);
	cout << endl;

	Point lower_right;
	lower_right.x = upper_left.x + x.width;
	lower_right.y = upper_left.y - x.height;

	cout << "Output lower right point is ";
	print_point(lower_right);
	cout << endl;
}

int main()
{
	lower_right(Rec_1);
}