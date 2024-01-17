#include <iostream>

// Provide the definition for IntPair and the print() member function here

struct IntPair
{
    int num1{};
    int num2{};

    void print(){
        std::cout<<"Pair("<<num1<<", "<<num2<<")\n";//Pair(1, 2)
    }

    bool isEqual(IntPair point)
    {
        return (num1 == point.num1) && (num2 == point.num2);
	}
};

#include <iostream>

// Provide the definition for IntPair and the member functions here

int main()
{
	IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

	return 0;
}
