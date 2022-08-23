#include <iostream>
#include <random>

using namespace std;

// function utilizing c++11 to pull a randomized number between the ranges of 0 and 100.
bool chanceGenerator(int chance)
{
	std::random_device randNum; // random_device basically conjures a pseudo-random number used as seed for better mt algorithm
	std::mt19937 rng(randNum()); // based on Mersenne Twister algorithm. creates a decently random number. very good algorithm. 
	std::uniform_int_distribution<std::mt19937::result_type> distBegEnd(0, 100); // should i start at 0 or 1? i think 0. who cares, this is just to show myself how to do this in the future anyway. currently researching how exactly this works. random number generation is very new to me.
	int result = distBegEnd(rng); // again, this is confusing to me right now. but ill learn about it.

	bool trigger = false;

	// if the result of that complicated algorithm is less than the "chance" argument, return true. otherwise, return false
	if (result < chance)
		trigger = true;
	else
		trigger = false;

	// just to test it out
	cout << result << endl;

	return trigger;
}

int main()
{
	// prints the trigger bool within chanceGenerator() function.
	cout << chanceGenerator(60);
}