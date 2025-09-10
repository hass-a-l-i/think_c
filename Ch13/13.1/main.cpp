#include "include.h"

/*
Change the Time::print function we wrote in the print section to a Time::to_string function that returns a string like we did for Card objects in The to_string function.
*/

Time t1 = { 23, 4, 55.0 };

int main()
{
	string out = t1.to_str();
	cout << out << endl;
}