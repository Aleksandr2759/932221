#include "Fraction.h"
#include <iostream>


void Fraction::printFruction() const
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

/*
Fraction::Fraction() //constructor ��� ����������
{
	numerator = 1;
	denumerator = 1;
}
*/
/*
Fraction::Fraction(int numerator, int denumerator) //constructor � �����������
{
	numerator = numerator;
	denumerator = denumerator;
	//������� ��������� 
	// ������ �����������
}
*/

//������������� ������ � ���
Fraction::Fraction(int numerator, int denumerator) 
	: numerator (numerator) //��� ������ �������������
{	
	//this->numerator == numerator;
	//this->denumenator == 1

	if (denumerator != 0)
	{
		this->denumerator = denumerator;
	}
	else
	{
		std::cerr << "..."
	}
	// ����������� ��� ����� 1, ����� ������ �� ������
}

int Fraction::getNumerator()
{
	return m_numerator;
}

int Fraction::getDenumerator()
{
	return m_denumerator;
}

int Fraction::setNumerator(int value)
{
	m_numerator = value;
}

int Fraction::setDenumerator(int value)
{
	m_denumerator = value;
}
