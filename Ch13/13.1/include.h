#pragma once
#include <iostream> 
#include <math.h>
#include <vector>
#include <cstdlib> 
#include <random>
#include <string>
using namespace std;

struct Time
{
    int hr, min;
    double sec;
    string to_str() const;
};

string Time::to_str() const
{
    string hour = to_string(hr);
    string minute = to_string(min);
    string second = to_string(sec);
    string x = " : ";
    string full =  hour + x + minute + x + second;
    return full;
}



