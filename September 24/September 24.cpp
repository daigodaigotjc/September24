#include <iostream>
#include"HiLo.h"

using namespace std;

int main()
{
    //first, generate a random number
    const int N = 100;

    
    int randomNumber = getRandomNumberBetweeb1AndN(N);

    //then, prompt the user for guesses WHILE guess != randomNumber
    

    int userGuess = -999;
    //the game loop!

    //loss condition -> allow only s max number of guesses
    constexpr int MAX_NUMBER_OF_GUESSES = 15;
    int numberOfGuesses = 0;
    while ((userGuess != randomNumber)
        &&
        (numberOfGuesses < MAX_NUMBER_OF_GUESSES))
    {
        userGuess = getUserGuess();

        if (userGuess > randomNumber)
        {
            cout << "Your guess was too HIGH\n";
        }
        else if (userGuess < randomNumber)
        {
            cout << "Your guess was too LOW\n";
        }
        else
        {
            cout << "Correctamundo (Pulp fiction reference)";
        }
        numberOfGuesses = numberOfGuesses + 1;

        cout << "Your guess time is: " << numberOfGuesses << "\n";
        cout << "\033[31m";
        cout << "This many guesses remaining: " << MAX_NUMBER_OF_GUESSES - numberOfGuesses << "\n";
        cout << "\033[0m";

        system("pause");
        system("cls");

        
    }//end while loop

    if (userGuess != randomNumber)
    {
        cout << "You LOST! Guess number was: " << randomNumber << "\n";
    }

    //then, output the number of guesses it took!
    //(should the player LOSE if too many guesses?)








    //// Sets starndard output stream to process raw UTF-8 bytes
    //SetConsoleOutputCP(CP_UTF8);
    ////UTF -> unicode transformation format //unicode -> 64 bits -> 2^64 bits possible

    //std::cout << "日本語" << std::endl;
    return 0;

}//end main




