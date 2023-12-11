#pragma once
class Fraction
{
public:
	Fraction() = default; //������ - ����� (); ��������� ������ ���� {}
	Fraction(int numerator, const int denumerator);;
	~Fraction() = default;//����������

	int getNumerator();
	int getDenumerator();
	// ��������� fraction.getNumerator()

	int setNumerator(int value);
	int setDenumerator(int value);

void printFruction() const;
Fraction addFractions(Fraction f2); 
Fraction subtractFractions(Fraction f2);
Fraction multiplyFractions(Fraction f2);
Fraction divideFractions(Fraction f2);

void reduce(); // ���������� �����

private:
	int m_numerator = 0; //������ ������� ������������� (����������� ������� ��� ����������� ������)
	int m_denumerator = 1; //������ ������� ������������� (����������� ������� ��� ����������� ������)
};