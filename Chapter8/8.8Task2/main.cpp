#include <iostream>

int main()
{
    char C='a';


    while(C>='a' && C<='z')
    {
        std::cout<< (int) C<<":"<<C<<std::endl;
        C++;
    }


    return 0;
}
