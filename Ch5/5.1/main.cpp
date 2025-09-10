#include "include.h"

/*
Write following as a single loop
if (age > 16) {
    if (age < 65) {
        cout << "age is within the normal working age." << endl;
    }
}
*/

int age = 70;

int main()
{
    if (age > 16 && age < 65)
    {
        cout << "age within normal working age";
    }
}