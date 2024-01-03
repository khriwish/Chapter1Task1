#include <iostream>

#define ENABLE_DEBUG // comment out to disable debugging

int readNumber()
{
    #ifdef ENABLE_DEBUG
    std::cerr << "readNumber() called\n";
    #endif // ENABLE_DEBUG

	std::cout << "Please enter a number: ";
	int x {};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
    #ifdef ENABLE_DEBUG
    std::cerr << "writeAnswer() called\n";
    #endif // ENABLE_DEBUG

	std::cout << "The quotient is: " << x << '\n';

}

int main()
{
    #ifdef ENABLE_DEBUG
    std::cerr << "main() called\n";
    #endif // ENABLE_DEBUG

	int x{ };
	int y{ };
	x = readNumber();
	y = readNumber();
	writeAnswer(x/y);

	return 0;
}
