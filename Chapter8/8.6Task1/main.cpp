#include <iostream>

int calculate(int x,int y)
{

    char operation;
    std::cout<<"Choose an operation: +, -, *, / or %: ";
    std::cin>>operation;

    switch(operation)
    {
    case '+':
        return x+y;
    case '-':
        return x-y;
    case '/':
        if(y==0){
        std::cout<<"Invalid input";
        break;
        }
        return x/y;
    case '*':
        return x*y;
    case '%':
        if(y==0){
        std::cout<<"Invalid input";
        break;
        }
        return x%y;
    default:
        std::cout<<"Invalid input";
        break;




    }





}

int main()
{
    std::cout<<calculate(10,5);


    return 0;
}
