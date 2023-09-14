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

	Fraction fsum = f.addFractions(f2); 
	Fraction fsub = f.subtractFractions(f2);
	Fraction fmult = f.multiplyFractions(f2);
	Fraction fdiv = f.divideFractions(f2);

	fdiv.printFruction();
	fmult.printFruction();

	return 0;
}