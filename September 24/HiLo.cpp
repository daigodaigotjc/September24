#include"Hilo.h" //Why? because
#include <cstdlib>
#include <iostream>

using namespace std;

int getRandomNumberBetweeb1AndN(int N)
{
	srand(time(0));

	int randomNumber = rand() % N + 1;

	return randomNumber;
}

int getUserGuess()
{
	cout << "Enter your guess: \n";
	int userGuess;
	cin >> userGuess;

	return userGuess;
}