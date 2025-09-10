#include "include.h"

// function that compares ints

void compare(int a, int b)
{
	if (a > b)
	{
		cout << a << " > " << b << endl;
		cout << "first int is greater than second" << endl;
	}
	if (a < b)
	{
		cout << a << " < " << b << endl;
		cout << "first int is smaller than second" << endl;
	}
	if (a == b)
	{
		cout << a << " = " << b << endl;
		cout << "first int is equal to second" << endl;
	}
}

int main()
{
	int int_1 = 4;
	int int_2 = 4;
	compare(int_1, int_2);
}