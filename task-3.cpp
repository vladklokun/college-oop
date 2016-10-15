#include <iostream>
#include <cassert>

class Stack
{
	private:
		int m_array[10];
		int m_next;

	public:

		void reset()
		{
			m_next = 0;
			for (int i = 0; i < 10; ++i) {
				m_array[i] = 0;
			}
		}

		int push(int value)
		{
			if (m_next == 10)
				return 1;

			m_array[m_next++] = value;
			return 0;
		}

		int pop()
		{
			assert(m_next > 0);
			return m_array[--m_next];
		}

		void print()
		{
			std::cout << "(";
			for (int i = 0; i < m_next; ++i) {
				std::cout << m_array[i] << ' ';
			}
			std::cout << ")"<< std::endl;
		}
};

int main()
{
	Stack stack;
	stack.reset();
	
	stack.print();

	stack.push(5);
	stack.push(16);
	stack.push(9);
	stack.print();
	
	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();
	
	return 0;
}
