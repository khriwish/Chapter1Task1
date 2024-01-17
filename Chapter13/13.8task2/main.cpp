#include <iostream>

struct Fraction
{
    int up{};
    int down{1};
};

Fraction getFraction()
{
    Fraction fraction;


    std::cout<<"Enter a value for the numerator: ";
    std::cin>>fraction.up;
    std::cout<<"Enter a value for the denominator: ";
    std::cin>>fraction.down;
    return fraction;

}

void multiFraction(Fraction& f1, Fraction& f2)
{

    std::cout<<"Your fractions multiplied together: "<<f1.up*f2.up<<"/"<<f1.down*f2.down<<'\n';

}

int main()
{
    Fraction f1{getFraction()};
    Fraction f2{getFraction()};
    multiFraction(f1,f2);




}
