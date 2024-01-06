#include <iostream>

int isEven()
{
    int x;

    std::cout<<"Enter a number to check: ";
    std::cin>>x;

    (x%2==0)? std::cout<<x<<" is even":std::cout<<x<<" is odd";
    return 0;

}


int main()
{
    isEven();
    return 0;
}
