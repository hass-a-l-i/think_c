#include "include.h"

/*
As you did back in the More structures chapter, rewrite the increment function from the Another example section more effeciently without iteration.
*/

struct Time
{
	int hr, min;
	double sec;

	void print();
	void increment(double secs);
};

void Time::print()
{
    cout << hr << " : " << min << " : " << sec;
}

void Time::increment(double secs)
{
    int pre_mins = (hr * 60) + min;
    double pre_sec = (pre_mins * 60) + sec;

    double incremented = pre_sec + secs;

    Time t2;
    t2.hr = int(incremented / 3600.0);
    incremented = incremented - (t2.hr * 3600);
    t2.min = int(incremented / 60.0);
    incremented = incremented - (t2.min * 60.0);
    t2.sec = double(incremented);

    t2.print();
}

int main()
{
    Time t1 = { 20, 3, 4.0 };
    int incrementor = 6000;
    t1.print();
    cout << " + " << incrementor << " = ";
    t1.increment(incrementor);
}