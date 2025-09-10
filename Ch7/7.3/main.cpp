#include "include.h"

/*
Rewrite the count_letters function from the previous exercise so that instead of traversing the string, it uses the find function
*/

void count_letters(string x, char y)
{
    int count = 0;
    int index = 0;
    while (index < x.length())
    {
        if (x.find(y, index) == index)
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
    char check = 'p';
    count_letters(input, check);
}