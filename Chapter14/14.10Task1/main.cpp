#include <iostream>
#include <string>

class Ball
{
private:
    double m_radious{};
    std::string m_color{};
public:
    Ball(std::string color,double rad):m_radious{rad},m_color(color)
    {
    }

const std::string& getColor() const { return m_color; }
	double getRadious() const { return m_radious; }

	void print() const
	{
		std::cout << "Ball(" << m_color << ", " << m_radious << ")\n";
	}
};

void print(const Ball& ball)
{
    std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadious() << ")\n";
}





int main()
{
	Ball blue{ "blue", 10.0 };
	print(blue);

	Ball red{ "red", 12.0 };
	print(red);

	return 0;
}
