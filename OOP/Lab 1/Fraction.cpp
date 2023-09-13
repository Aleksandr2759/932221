#include "Fraction.h"
#include <iostream>

/*Обычный вариант
void Fraction::printFruction(Fraction f)
{
	std::cout << f.numerator << '/' << f.denumerator << std::endl;
}
*/

//вариант без 
void Fraction::printFruction()
{
	std::cout << numerator << '/' << denumerator << std::endl;
}

/* старое
Fraction Fraction::addFractions(Fraction f, Fraction f2)
{
	Fraction fs;
	if (f.denumerator == f2.denumerator)
	{
		fs.numerator = f.numerator + f2.numerator;
		fs.denumerator = f.denumerator;
	}
	else
	{
		fs.numerator = (f.numerator * f2.denumerator) + (f2.numerator * f.denumerator);
		fs.denumerator = f.denumerator * f2.denumerator;
	}
	return fs;
}
*/

// новая
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