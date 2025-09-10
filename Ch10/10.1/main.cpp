#include "include.h"

/*
Write a program to generate 10 random numbers between 1 and 10.
*/

void random_numbers(int lower, int upper)
{
	int start = 0;
	srand((unsigned)time(NULL));
	while (start < upper)
	{
		int divider = upper - lower + 1; // + 1 to deal with 0 = translate to min = 1
		int rand_no = (rand() % divider) + lower;
		cout << rand_no << endl;
		start = start + 1;
	}
}

int main()
{
	random_numbers(10, 12);

	/*
	srand((unsigned)time(NULL));
	cout << "rand is " << rand() << endl;
	int lower = 10;
	int upper = 12;
	cout << "generate rand between " << lower << " and " << upper << endl;
	int divider = upper - lower + 1;
	cout << "divider = upper - lower + 1 = " << divider << endl;
	int remainder = rand() % divider;
	cout << "remainder when do rand % divider = " << remainder << endl;
	cout << "translate by lower " << lower << " to get final random no = " << remainder + lower;
	*/
}