#include "include.h"

// Write a function that takes a string as an input and that outputs the letters backwards, all on one line

void string_to_inverse_chars()
{
	string x;
	cin >> x;
	int length = x.length();
	int y = 0;
	while (y <= length)
	{
		cout << x[length - y];
		y = y + 1;
	}
}

int main()
{
	string_to_inverse_chars();
}