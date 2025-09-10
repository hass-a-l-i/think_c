#include "include.h"

/*
Encapsulate the code 

string state = "Mississippi";
int count = 0;
int index = 0;

while (index < state.length()) {
    if (state[index] == 'i') {
        count = count + 1;
    }
    index = index + 1;
}
cout << count << endl;

in a function named count_letters, and generalize it so that it accepts both the string and the letter as arguments.
*/ 

void count_letters(string x, char y)
{
    int count = 0;
    int index = 0;
    while (index < x.length())
    {
        if (x[index] == y)
        {
            count = count + 1;
        }
        index = index + 1;
    }
    cout << "The number of " << y << "'s in the word " << x << " is " << count;
}

int main()
{
    string input = "mississippi";
    char find = 's';
    count_letters(input, find);
}