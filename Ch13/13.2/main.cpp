#include "include.h"

/*
Rewrite the equals function from the The equals function section as a free-standing function that takes two Cards as arguments.
*/

Card c1 = { 1, 11 };
Card c2 = { 1, 10 };

bool equals(Card c_1, Card c_2)
{
	return (c_1.rank == c_2.rank && c_1.suit == c_2.suit);
}


int main()
{
	int decider = equals(c1, c2);
	if (decider == 1) { cout << "Cards are identical" << endl; }
	else { cout << "Cards are not identical" << endl; }
}