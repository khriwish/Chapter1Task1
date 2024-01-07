#include <iostream>

int accumulate(int x)
{
    static int sum=0;
    sum=sum+x;
    return sum;


}

int main()
{

    std::cout<<accumulate(1)<<'\n';
    std::cout<<accumulate(1)<<'\n';
    std::cout<<accumulate(1)<<'\n';
    std::cout<<accumulate(1)<<'\n';
    std::cout<<accumulate(1)<<'\n';



    return 0;
}
