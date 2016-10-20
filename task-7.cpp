#include <iostream>
#include <cassert>

#define ARRLEN 10

class IntArray
{
	private:
		int *m_array;
		int m_length;
	public:
		IntArray(int length) /* constructor */
		{
			assert (length > 0);

			/* dynamic allocation */
			m_array = new int[length];
			m_length = length;
		}

		~IntArray()
		{
			/* dynamic deletion */
			delete[] m_array;
		}

		void setValue(int index, int value)
		{
			m_array[index] = value;
		}
		int& getValue(int index)
		{
			return m_array[index];
		}
		int getLength()
		{
			return m_length;
		}
};

int main(void)
{
	IntArray arr(ARRLEN);
	for (int i = 0; i < ARRLEN; ++i) {
		arr.setValue(i, i+1);
		std::cout << "arr[" << i << "] = " << arr.getValue(i) << std::endl;
	}

	return 0;
} /* arr destructor called here since program is terminated and arr is not needed anymore. */
