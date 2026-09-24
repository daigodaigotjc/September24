#include"Hilo.h" //Why? because
#include <cstdlib>
#include <iostream>

int getRandomNumberBetweeb1AndN(int N)
{
	srand(time(0));

	int randomNumber = rand() % N + 1;

	return randomNumber;
}