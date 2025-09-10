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

    Card(int s, int r);
};


Card::Card(int s, int r) {
    suit = s; rank = r;
}
