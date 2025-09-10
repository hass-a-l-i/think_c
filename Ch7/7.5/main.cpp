#include "include.h"

/*
Use the cctype library write functions string_to_upper and string_to_lower that take a single string as an argument and return a string consisting of all upper or lower case letters.
*/

void string_to_upper(string x)
{
	int length = x.length();
	int index = 0;
	while (index < length)
	{
		x[index] = toupper(x[index]);
		index = index + 1;
	}
	cout << x;
}

void string_to_lower(string x)
{
	int length = x.length();
	int index = 0;
	while (index < length)
	{
		x[index] = tolower(x[index]);
		index = index + 1;
	}
	cout << x;
}

int main()
{
	string input_upper = "miles";
	string_to_upper(input_upper);
	cout << endl;
	string input_lower = "MORALES";
	string_to_lower(input_lower);
}