#include <iostream>
#include <string>
#include "Fraction.h"



int main()
{
	Fraction f, f2;
	f.numerator = 1;
	f.denumerator = 3;
	f2.numerator = 2;
	f2.denumerator = 4;
	//Fraction fsum = f.addFractions(f, f2); - старая версия
	Fraction fsum = f.addFractions(f2); // новая
	fsum.printFruction();

	return 0;
}