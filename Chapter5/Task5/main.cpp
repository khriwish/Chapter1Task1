#include <iostream>
#include <string>

std::string name()
{
    std::cout<<"enter your name: ";
    std::string name{};
    std::getline(std::cin>>std::ws, name);
    return name;

}

int age()
{
    std::cout<<"enter your age: ";
    int x{};
    std::cin>>x;
    return x;
}


int main()
{
    std::string first{name()};

    int x {age()};
    std::string second {name()};
    int y{age()};

    if(x>y)
        std::cout<<first<<"is older";
        else
            std::cout<<second<<"is older";



    return 0;
}
