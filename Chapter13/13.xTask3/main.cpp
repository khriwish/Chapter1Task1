#include <iostream>

template <typename T>
struct Triad
{
    T num1{};
    T num2{};
    T num3{};
};

template <typename T>
void print(Triad<T>& numbers)
{
    //[1, 2, 3][1.2, 3.4, 5.6]
    std::cout<<"["<<numbers.num1<<", "<<numbers.num2<<", "<<numbers.num3<<"]";

}


int main()
{
	Triad <int>t1{ 1, 2, 3 };
	print(t1);

	Triad <double>t2{ 1.2, 3.4, 5.6 };
	print(t2);

	return 0;
}
