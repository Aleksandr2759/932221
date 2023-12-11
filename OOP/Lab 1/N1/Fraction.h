#pragma once
class Fraction
{
public:
	Fraction() = default; //аналог - после (); поставить пустое тело {}
	Fraction(int numerator, const int denumerator);;
	~Fraction() = default;//деструктор

	int getNumerator();
	int getDenumerator();
	// обращение fraction.getNumerator()

	int setNumerator(int value);
	int setDenumerator(int value);

void printFruction() const;
Fraction addFractions(Fraction f2); 
Fraction subtractFractions(Fraction f2);
Fraction multiplyFractions(Fraction f2);
Fraction divideFractions(Fraction f2);

void reduce(); // сокращение дроби

private:
	int m_numerator = 0; //Вторая очередь инициализации (выполняется тольько при пропущенной первой)
	int m_denumerator = 1; //Вторая очередь инициализации (выполняется тольько при пропущенной первой)
};