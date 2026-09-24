#include <iostream>
#include"HiLo.h"

using namespace std;

int main()
{
    //first, generate a random number
    const int N = 100;

    
    int randomNumber = getRandomNumberBetweeb1AndN(N);

    //then, prompt the user for guesses WHILE guess != randomNumber

    cout << "The random number to guess is: " << randomNumber << "\n";
    
    

    //then, output the number of guesses it took!
    //(should the player LOSE if too many guesses?)








    //// Sets starndard output stream to process raw UTF-8 bytes
    //SetConsoleOutputCP(CP_UTF8);
    ////UTF -> unicode transformation format //unicode -> 64 bits -> 2^64 bits possible

    //std::cout << "日本語" << std::endl;
    return 0;

}


