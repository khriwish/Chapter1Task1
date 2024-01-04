#include <iostream>

double userInput()
{
    double x;

    std:: cout <<"Enter a float number: ";
    std:: cin >> x;
    return x;

}

char operation()
{
    std::cout<<"Choose the one of the operations: /, *, + or - \n";
    char ifInput;
    std::cin>> ifInput;
    return ifInput;
}

int main()
{
    double num1{userInput()};
    double num2{userInput()};

    if (operation() == '+')
        std::cout << num1 + num2 << '\n';
    else if (operation() == '-')
        std::cout << num1 - num2 << '\n';
    else if (operation() == '*')
        std::cout << num1 * num2 << '\n';
    else if (operation() == '/')
        std::cout << num1 / num2 << '\n';




    return 0;
}
