#include <iostream>
#include <random>
#include <ctime>

// function utilizing mt19937 to pull a randomized number between the ranges of 1 and 100.
bool ChanceGenerator(int chance)
{
	std::random_device randomDevice;
	std::mt19937 rng(randomDevice()); // instantiating class mt19937 with the seed from random_device.
	std::uniform_int_distribution<int> dist(1, 100); // then we need an evenly distribution of numbers in a range, so we have an even chance to get each.
	int randomNum = dist(rng); // we utilize the evenly distribution of numbers, and grab one randomly utilizing the rng algorithm within mt19937 class.

	return randomNum <= chance; // simply return if the random number we generated is within the "percentage chance" range
}

int main()
{
	// prints the chanceGenerator() function's result.
	std::cout << std::boolalpha; // i just like true/false instead of 1/0
	std::cout << "The result is: " << ChanceGenerator(50) << std::endl;
}