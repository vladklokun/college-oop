#include <iostream>

class IntArray
{
	private:
		int m_array[20];
	public:
		int init(void)
		{
			for (int i = 0; i < 20; ++i)
				m_array[i] = 0;
			return 0;
		}
		int print(void)
		{
			std::cout << "Array contents: "<< std::endl << "(";
			for (int i = 0; i < 20; ++i) {
				std::cout << m_array[i] << " ";
			}
			std::cout << ")" << std::endl;
			return 0;
		}
		int setValue(int index, int value)
		{
			if (index < 0 || index > 20) {
				std::cout << "Error assigning value outside array bounds." << std::endl;
				return 1;
			} else {
				m_array[index] = value;
			}
			return 0;
		}
};

int main()
{
	IntArray array;
	array.init();
	array.print();
	if (array.setValue(21,2) == 0)
		std::cout << "Assignment out of bounds successful. Something wrong." << std::endl;
	array.setValue(19,2);
	array.print();
	return 0;
}
