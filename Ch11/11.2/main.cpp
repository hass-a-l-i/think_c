#include "include.h"

/*
Write a function named str_len that takes a C string as an argument and returns the number of characters in the string.
*/

int no_chars(string x)
{
	int count = 0;
	for (int i = 0; x[i] != '\0'; i = i + 1)
	{
		count = count + 1;
	}
	return count;
}

int main()
{
	string input = "yesboss";
	int chars = no_chars(input);
	cout << "number of chars in " << input << " is " << chars << endl;
}