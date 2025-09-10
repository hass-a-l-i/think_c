#include "include.h"

/*
Encapsulate the deck-building code from the Vectors of cards section in a function named build_deck that takes no arguments and that returns a fully-populated vector of Cards.
*/

vector<Card> build_deck()
{
	vector<Card> d(52);
	int i = 0;
	for (int suit = 1; suit <= 4; suit = suit + 1) 
	{
		for (int rank = 1; rank <= 13; rank = rank + 1) 
		{
			d[i].suit = suit; 
			d[i].rank = rank; 
			i = i + 1;
		}
	}
	return d;
}

void print_deck(const vector<Card>& d)
{
	for (int i = 0; i < d.size(); i = i + 1)
	{
		cout << d[i].to_string() << endl; // as we already have pre-defined print function
	}
}

int main()
{
	vector<Card> deck = build_deck();
	print_deck(deck);
}