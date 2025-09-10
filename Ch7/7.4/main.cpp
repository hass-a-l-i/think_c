#include "include.h"

/*
Fix the code below

string suffix = "ack";

char letter = 'J';
while (letter < 'Q') 
{
    cout << letter + suffix << endl;
    letter++;
}

so that “Ouack” and “Quack” are spelled correctly.

Names of the duckings are Jack, Kack, Lack, Mack, Nack, Ouack, Pack, and Quack
*/

int main()
{

    char letter = 'J';
    while (letter <= 'Q')
    {
        if (letter == 'O')
        {
            string suffix = "uack";
            cout << letter + suffix << endl;
            letter++;
        }
        if (letter == 'Q')
        {
            string suffix = "uack";
            cout << letter + suffix << endl;
            letter++;
        }
        else
        {
            string suffix = "ack";
            cout << letter + suffix << endl;
            letter++;
        }
    }
}