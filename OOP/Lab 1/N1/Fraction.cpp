#include "Fraction.h"
#include <iostream>


void Fraction::printFruction()
{
	std::cout << numerator << '/' << denumerator << std::endl;
}


Fraction Fraction::addFractions(Fraction f2)
{
	Fraction fs;
	if (denumerator == f2.denumerator)
	{
		fs.numerator = numerator + f2.numerator;
		fs.denumerator = denumerator;
	}
	else
	{
		fs.numerator = (numerator * f2.denumerator) + (f2.numerator * denumerator);
		fs.denumerator = denumerator * f2.denumerator;
	}
	return fs;
}

Fraction Fraction::subtractFractions(Fraction f2)
{
	Fraction fs;
	if (denumerator == f2.denumerator)
	{
		fs.numerator = numerator - f2.numerator;
		fs.denumerator = denumerator;
	}
	else
	{
		fs.numerator = (numerator * f2.denumerator) - (f2.numerator * denumerator);
		fs.denumerator = denumerator * f2.denumerator;
	}
	return fs;
}

Fraction Fraction::multiplyFractions(Fraction f2)
{
	Fraction fs;
	fs.numerator = numerator * f2.numerator;
	fs.denumerator = denumerator * f2.denumerator;
	return fs;
}

Fraction Fraction::divideFractions(Fraction f2)
{
	Fraction fs;
	fs.numerator = numerator * f2.denumerator;
	fs.denumerator = denumerator * f2.numerator;
	return fs;
}