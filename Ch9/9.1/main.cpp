#include "include.h"

/*
Rewrite the increment function 

void increment(Time& time, double secs)
{
    time.second += secs;

    while (time.second >= 60.0) {
        time.second -= 60.0;
        time.minute += 1;
    }
    while (time.minute >= 60) {
        time.minute -= 60;
        time.hour += 1;
    }
}

without iteration using high level planning.
*/


struct Time 
{
    int hour, minute;
    double second;
};

void print_time(Time t)
{
    cout << "[hours : mins : secs] = [" << t.hour << " : " << t.minute << " : " << t.second << "]" << endl;
}

Time increment_time(const Time t, double secs)
{
    int pre_mins = (t.hour * 60) + t.minute;
    double pre_sec = (pre_mins * 60) + t.second;

    double incremented = pre_sec + secs;

    Time t2;
    t2.hour = int(incremented / 3600.0);
    incremented = incremented - (t2.hour * 3600);
    t2.minute = int(incremented / 60.0);
    incremented = incremented - (t2.minute * 60.0);
    t2.second = double(incremented);

    return t2;
}

int main()
{
    Time t1 = { 2, 30, 52.0 };
    double incr = 3600.0;
    print_time(t1);
    Time t2 = increment_time(t1, incr);
    print_time(t2);
}
