#include <iostream>

double userInput()
{
    double x;

    std:: cout <<"Enter a the hieght: ";
    std:: cin >> x;
    return x;

}


int main()
{
    double hieght{userInput()};
    double gravity_constant=9.8,x_seconds=0;
    double distance_fallen = gravity_constant * (x_seconds*x_seconds) / 2;




     std::cout << "Time: " << x_seconds << " seconds, Distance fallen: " << gravity_constant * (x_seconds * x_seconds) / 2 << '\n';
    x_seconds++;

    std::cout << "Time: " << x_seconds << " seconds, Distance fallen: " << gravity_constant * (x_seconds * x_seconds) / 2 << '\n';
    x_seconds++;

    std::cout << "Time: " << x_seconds << " seconds, Distance fallen: " << gravity_constant * (x_seconds * x_seconds) / 2 << '\n';
    x_seconds++;

    std::cout << "Time: " << x_seconds << " seconds, Distance fallen: " << gravity_constant * (x_seconds * x_seconds) / 2 << '\n';
    x_seconds++;

    std::cout << "Time: " << x_seconds << " seconds, Distance fallen: " << gravity_constant * (x_seconds * x_seconds) / 2 << '\n';

    return 0;
}
