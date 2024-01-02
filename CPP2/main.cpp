#include <iostream>
int readNumber(){
int x;
std::cout<<"Enter a number: ";
std::cin>> x;
return x;
}

void writeAnswer(int x){
std::cout<<"the sum of the two numbers you entered is: "<< x;



}

int main()
{
	int sum=readNumber()+readNumber();
	writeAnswer(sum);

return 0;
}
