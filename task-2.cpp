#include <iostream>

class DateClass
{
	int m_month; /* In C++ class members have private access specifiers by default */
	int m_day;
	int m_year;
public:
	void setDate(int day, int month, int year)
	{
		m_day = day;
		m_month = month;
		m_year = year;
	}
	
	void print()
	{
		std::cout << m_day << "." << m_month << "." << m_year << "." << std::endl;
	}
};

int main()
{
	DateClass date;
	date.setDate(16,10,2016);
	date.print();

	return 0;
}
