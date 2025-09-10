#pragma once
#include <iostream> 
#include <math.h>
#include <vector>
#include <cstdlib> 
#include <random>
#include <string>
using namespace std;

struct Fraction
{
	int numerator, denominator;
	Fraction(int a, int b);
	Fraction();
	void print_frac();
	Fraction add_fracs(Fraction b);
	Fraction minus_fracs(Fraction b);
	Fraction times_fracs(Fraction b);
	Fraction divide_fracs(Fraction b);
};

// constructor 1 
Fraction::Fraction(int a, int b)
{
	numerator = a;
	denominator = b;
}

// construtor 2 with no args, numerator 0, denominator 1
Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

// print fraction
void Fraction::print_frac() 
{
	cout << numerator << "/" << denominator;
}
#
// add fractions
Fraction Fraction::add_fracs(Fraction b)
{
	int add_numerators = (numerator * b.denominator) + (denominator * b.numerator);
	int add_denominators = denominator * b.denominator;
	Fraction added = Fraction(add_numerators, add_denominators);
	return added;
}

// subtract fractions
Fraction Fraction::minus_fracs(Fraction b)
{
	int minus_numerators = (numerator * b.denominator) - (denominator * b.numerator);
	int minus_denominators = denominator * b.denominator;
	Fraction subtracted = Fraction(minus_numerators, minus_denominators);
	return subtracted;
}

// multiply fractions
Fraction Fraction::times_fracs(Fraction b)
{
	int times_numerators = numerator * b.numerator;
	int times_denominators = denominator * b.denominator;
	Fraction multiplier = Fraction(times_numerators, times_denominators);
	return multiplier;
}

// divide fractions
Fraction Fraction::divide_fracs(Fraction b)
{
	int div_numerators = numerator * b.denominator;
	int div_denominators = denominator * b.numerator;
	Fraction divided = Fraction(div_numerators, div_denominators);
	return divided;
}