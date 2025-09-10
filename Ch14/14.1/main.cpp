#include "include.h"

/*
Rewrite the find_card function from Searching as a Deck member function that has a Card parameter.
*/

vector<Card> build_deck()
{
    vector<Card> deck(52);
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit + 1)) {
        for (Rank rank = TWO; rank <= ACE; rank = Rank(rank + 1)) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
    return deck;
}

