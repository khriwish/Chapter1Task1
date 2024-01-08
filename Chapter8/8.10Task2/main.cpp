#include <iostream>

int sumTo(int x)
{
    int sum =0;
    for(int i=0;i<=x;i++)
        sum+=i;
    std::cout<<sum;

}

int main()
{
    sumTo(5);

    return 0;
}
