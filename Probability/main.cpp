#include <iostream>

using namespace std;

// function utilizing c++11 to pull a randomized number between the ranges of 1 and 100.
bool chanceGenerator(int chance)
{
	std::srand(std::time(nullptr)); // seeding the random number generator with the seed of time

	/* generates random number from rngand finds the remainder of the random number divided by 100, then adds 1 to said final number.
	for example, if std::rand() returned 82363, the modulus would be 63, we would then add one to the final answer, because we're
	finding from the numbers 1-100 (std::rand() is zero-based) */
	int randNum = std::rand() % 100 + 1;

	bool trigger = false;

	// if the result of that complicated algorithm is less than the "chance" argument, return true. otherwise, return false
	if (randNum < chance)
		trigger = true;
	else
		trigger = false;

	// just to test it out
	cout << randNum << endl;

	return trigger;
}

int main()
{
	// prints the trigger bool within chanceGenerator() function.
	cout << chanceGenerator(60);
}