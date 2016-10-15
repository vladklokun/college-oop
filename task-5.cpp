#include <iostream>
#include <cassert>

class Fraction
{
	private:
		int m_numerator;
		int m_denominator;

	public:
		Fraction(int numerator = 0, int denominator = 1) /* default constructor */
		{
			assert(denominator != 0);
			m_numerator = numerator;
			m_denominator = denominator;
		}

		int getNumerator() {return m_numerator;}
		int getDenominator() {return m_denominator;}
		double getValue() {return static_cast<double>(m_numerator) / (m_denominator);}
};

int main()
{
	Fraction frac; /* no args, calls default constructor */
	std::cout << "frac = " << frac.getNumerator() << "/" << frac.getDenominator() << std::endl << frac.getValue() << std::endl;
	Fraction frac1(6,3);
	std::cout << "frac2 = " << frac1.getNumerator() << "/" << frac1.getDenominator() << std::endl << frac1.getValue() << std::endl;
	return 0;
}
