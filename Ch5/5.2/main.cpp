#include "include.h"

/*
Write at least five different functions, all named overloaded_function, together with a main function that calls each of them.
*/

void overload_func(int x)
{
	int y = x + 5;
	cout << y << " is input + 5" << endl;
}

void overload_func(char a)
{
	cout << a << " is a letter" << endl;
}

void overload_func(int x, int y)
{
	cout << x + y << " is inputs added" << endl;
}

void overload_func(int x, char y)
{
	cout << x << " is a number and " << y << " is a letter" << endl;
}

void overload_func(char x, char y)
{
	cout << x << " is letter 1 " << y << " is letter 2" << endl;
}

int main()
{
	overload_func(5);
	overload_func('a');
	overload_func(1, 2);
	overload_func(3, 'r');
	overload_func('e','t');
}