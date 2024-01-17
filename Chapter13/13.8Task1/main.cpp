
#include <iostream>

struct Data
{
    int adsWatched;
    double puca; // percentage of users clicked on an ad.
    double averageEarnings; // The average earnings per clicked ad
};

Data getStats()
{
    Data stats;
    std::cout<<"Enter how many ads were shown: ";
    std::cin>>stats.adsWatched;

    std::cout<<"Enter the  percentage of users clicks on ads: ";
    std::cin>>stats.puca;

    std::cout<<"What is the average earnings per clicked ad: ";
    std::cin>>stats.averageEarnings;
    return stats;
}

void printStats(Data stats)
{


    std::cout << "Number of ads shown: " << stats.adsWatched << '\n';
    std::cout << "Click through rate: " << stats.puca << '\n';
    std::cout << "Average earnings per click: $" << stats.averageEarnings << '\n';
    std::cout << "Total Earnings: $" <<(stats.adsWatched * stats.puca / 100 * stats.averageEarnings) << '\n';


}


int main()
{
    Data stats{getStats()};
    printStats(stats);

    return 0;


}

