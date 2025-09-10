#include "include.h"

/*
Use what you learned in this chapter to create a Fraction structure that has numerator and denominator instance variables, and print, plus, minus, times, and divided_by member functions. Give it two constructors, one that takes no arguments and creates a fraction with numerator set to 0 and denominator set to 1, and another which takes two integer arguments and initializes the numerator and denominator instance variables of the constructed object with them.

Create both a Fraction.cpp and a Fraction.h header file, and write a program test_fraction.cpp to test your new fraction objects.
*/

Fraction f_0 = Fraction();
Fraction f_1 = Fraction(2, 3);
Fraction f_2 = Fraction(3, 7);


int main()
{
	f_1.print_frac(); cout << " + "; f_2.print_frac(); cout << " = ";
	Fraction summed = f_1.add_fracs(f_2);
	summed.print_frac();
	cout << endl;
	f_1.print_frac(); cout << " - "; f_2.print_frac(); cout << " = ";
	Fraction deducted = f_1.minus_fracs(f_2);
	deducted.print_frac();
	cout << endl;
	f_1.print_frac(); cout << " * "; f_2.print_frac(); cout << " = ";
	Fraction dotted = f_1.times_fracs(f_2);
	dotted.print_frac();
	cout << endl;
	f_1.print_frac(); cout << " / "; f_2.print_frac(); cout << " = ";
	Fraction divved = f_1.divide_fracs(f_2);
	divved.print_frac();
	cout << endl;
	cout << "Null Fraction = ";
	f_0.print_frac();
}
