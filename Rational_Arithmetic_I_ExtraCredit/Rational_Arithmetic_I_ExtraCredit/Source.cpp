//Rational Arithmetic I
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
class Rational
{
	// Declaration of overloaded stream insertion operator
	friend ostream & operator << (ostream &, Rational r);
private:
	int numerator;
	int denominator;
public:
	Rational(int num1 = 0, int num2 = 0)
	// Constructor builds a rational number n/d
	{
		numerator = num1; denominator = num2;
		reduce();
	}
	

	Rational operator+(Rational nA)
	{
		int denm = this->denominator * nA.denominator;
		int nume = this->numerator * nA.denominator + this->denominator * nA.numerator;
		Rational sum(nume, denm);
		sum.reduce();
		return sum;
	}

	friend Rational operator-(const Rational nA, const Rational nB);
	friend Rational operator*(const Rational nA, const Rational nB);
	friend Rational operator/(const Rational nA, const Rational nB);
	Rational operator=(const Rational numEqual)
	{
		return numEqual;
	}

private:
	// This member function transforms a rational number into
	// reduced form where the numerator and denominator have 1
	// as greatest common factor
	void reduce();
};
//************************************************************
// This member function transforms a rational number into *
// reduced form where the numerator and denominator have 1 *
// as greatest common factor. *
//************************************************************
void Rational::reduce()
{
	bool negative = (numerator < 0) != (denominator < 0);
	numerator = abs(numerator);
	denominator = abs(denominator);
	int factor = 2;
	while (factor <= min(numerator, denominator))
	{
		if (numerator % factor == 0 && denominator % factor == 0)
		{
			numerator = numerator / factor;
			denominator = denominator / factor;
			continue;
		}
		factor++;
	}
	if (negative)
		numerator = -numerator;
}

Rational  operator-(Rational nA, Rational nB)
{
	return Rational(nA.numerator - nB.denominator);
}

Rational operator*(Rational nA, Rational nB)
{
	return Rational(nA.numerator * nB.denominator);
}

Rational operator/(Rational nA, Rational nB)
{
	return Rational(nA.numerator / nB.denominator);
}


//************************************************
// Overloaded stream insertion operator *
//************************************************
ostream & operator << (ostream &out, Rational r)
{
	out << r.numerator << "/" << r.denominator;
	return out;
}
int main()
{
	cout << Rational(6, -12);
	cout << Rational(5, 12) + Rational(4, 12) << endl;
	return 0;
}