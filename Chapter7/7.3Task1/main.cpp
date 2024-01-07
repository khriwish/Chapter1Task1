#include <iostream>

void userInput()
{
    int smaller,larger;

    std::cout <<"Enter an integer: ";
    std::cin>> smaller;

    std::cout<< "Enter a larger integer: ";
    std::cin>>larger;


    if(smaller>larger){
    std::cout<<"Swapping values!! \n";
    std::cout<<"The smaller value is: "<< larger<<'\n'<<"The larger value is: "<<smaller;
    }
    else
    std::cout<<"The smaller value is: "<< smaller<<'\n'<<"The larger value is: "<<larger;



}//all dies

int main()
{
    userInput();

    return 0;
}
