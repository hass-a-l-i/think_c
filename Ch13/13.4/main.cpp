#include "include.h"

/*
Add a to_string member function to the Fraction class you created in Chapter 12 Exercise Set 1. 
It should return a string with numerator/denominator except when the denomintor is 1, in which case it should return only a string containing the numerator.
*/

Fraction f_1 = Fraction(2, 3);
Fraction f_2 = Fraction(3, 7);
Fraction f_4 = Fraction(5, 1);
int main()
{
	Fraction f_3 = f_1.times_fracs(f_2);
	string f_3_str = f_3.to_str();
	cout << "f_1 x f_2 = " << f_3_str << endl;
	string f_4_str = f_4.to_str();
	cout << f_4.numerator << "/1 simplifies to " << f_4_str << endl;
}
