#include <iostream>

class Vector3d
{
	private:
		double m_x, m_y, m_z;

	public:
		Vector3d(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z)
	{
	}
	
		void print()
		{
			std::cout << "Vector(" << m_x << ", " << m_y << ", " << m_z << ")" << std::endl;
		}

		friend class Point3d; /* now friend class of Vector3d */
};

class Point3d
{
	private:
		double m_x, m_y, m_z;

	public:
		Point3d(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z)
	{
	}

		void print()
		{
			std::cout << "Point(" << m_x << ", " << m_y << ", " << m_z << ")" << std::endl;
		}

		void moveByVector(Vector3d &v)
		{
			m_x += v.m_x;
			m_y += v.m_y;
			m_z += v.m_z;
		}
};

int main()
{
	Point3d p(2.0, 1.0, 5.5);
	Vector3d v(3.0, 4.0, -4.25);

	p.print();
	p.moveByVector(v);
	p.print();

	return 0;
}
