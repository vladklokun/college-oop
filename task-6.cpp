#include <iostream>

class SomeClass
{
	private:
		const int m_array[5];
	public:
		SomeClass(): m_array {1,2,3,4,5} /* uniform initialisation (C++11)*/
		{
		}
		void print()
		{
			for (int i = 0; i < 5; ++i)
				std::cout << m_array[i] << std::endl;
		}
};

int main(void)
{
	SomeClass class1;
	
	class1.print();

	return 0;
}
