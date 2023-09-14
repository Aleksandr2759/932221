#pragma once
class Fraction
{
public:
	Fraction();
	Fraction(int numerator, int denumerator);
	~Fraction();//деструктор

void printFruction();
Fraction addFractions(Fraction f2);
Fraction subtractFractions(Fraction f2);
Fraction multiplyFractions(Fraction f2);
Fraction divideFractions(Fraction f2);

public:
	int numerator;
	int denumerator;

};