#include <iostream>

class DateClass
{
public:
	int m_year;
	int m_month;
	int m_day;

	void print()
	{
		std::cout << m_year << "." << m_month << "." << m_day << std::endl;
	}
};

int main()
{
	DateClass today = { 2016, 10, 14 };
	today.print();
	today.m_day = 15;
	today.print();
	
	return 0;
}
