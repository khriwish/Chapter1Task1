#include <iostream>



int main()
{

    int outter{5};
    while(outter>=1)
    {
        int inner{1};
        int outter2{outter};
        while(inner<=outter)
        {

            std::cout<<outter2<<" ";
            inner++;
            outter2--;
        }
        std::cout<<std::endl;
        outter--;

    }



    return 0;
}
