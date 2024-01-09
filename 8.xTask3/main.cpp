#include <iostream>
#include "random.h"
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int inputGuess(int startRandom, int endRandom)
{
    while (true)
    {
        int guess{ 0 };
        std::cin >> guess;

        if (!std::cin) // if the previous extraction failed
        {
            if (std::cin.eof()) // if the stream was closed
            {
                exit(0); // shut down the program now
            }

            // let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            ignoreLine();     // and remove the bad input
        }

        ignoreLine(); // remove any extraneous input

        if (guess >= startRandom && guess <= endRandom)
            return guess;
        std::cout << "Oops, that input is invalid. Please try again.\n";
    }
}

void game()
{
    const int startRandom{ 1 };
    const int endRandom{ 100 };
    const int random{ Random::get(startRandom, endRandom) };
    const int tries{ 7 };

    std::cout << "Let's play a game. I'm thinking of a number between " << startRandom << " and " << endRandom << ". You have " << tries << " tries to guess what it is.\n";

    int i = 1;
    for (i; i <= tries; i++)
    {
        std::cout << "Guess #" << i << ": ";

        int guess{ 0 };
        guess = inputGuess(startRandom, endRandom);

        if (guess == random)
        {
            std::cout << "Correct!You win!\n";
            return;
        }
        else if (guess > random)
            std::cout << "Your guess is too high.\n";
        else
            std::cout << "Your guess is too low.\n";
    }
    if (i == tries + 1)
        std::cout << "Sorry, you lose. The correct number was " << random << ".\n";
}

bool askPlayAgain()
{
    while (true)
    {
        char playAgain{};
        std::cout << "Would you like to play again (y/n)?\n";
        std::cin >> playAgain;
        ignoreLine();

        switch (playAgain)
        {
            case 'y': return true;
            case 'n': std::cout << "Thank you for playing.\n"; return false;
        }
    }
}

int main()
{
    do game();
    while (askPlayAgain());

    return 0;
}
