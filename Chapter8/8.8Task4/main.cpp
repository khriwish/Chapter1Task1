#include <iostream>



int main()
{

    int outter{1};

    while(outter<=5)
    {
        int inner{5};

        while(inner>=1)
        {

            std::cout<<" ";
            if (inner <= outter)
				std::cout << inner << " ";
			else
				std::cout << "  ";

            inner--;
        }
        std::cout<<'\n';

        outter++;

    }

    return 0;
}
