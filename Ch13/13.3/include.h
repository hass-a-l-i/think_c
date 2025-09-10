#pragma once
#include <iostream> 
#include <math.h>
#include <vector>
#include <cstdlib> 
#include <random>
#include <string>
using namespace std;

struct Card
{
	int suit, rank;

	Card();
	Card(int s, int r);
    string to_string() const;

};

Card::Card()
{
	suit = 0;
	rank = 0;
}

Card::Card(int r, int s)
{
	rank = r;
	suit = s;
}

// updated print card function
string Card::to_string() const
{
    vector<string> suit_strings = { "None", "Clubs", "Diamonds", "Hearts", "Spades" };
    vector<string> rank_strings = { "Joker", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

    if (rank == 0) return rank_strings[rank]; // if joker
    return rank_strings[rank] + " of " + suit_strings[suit];// all else
}