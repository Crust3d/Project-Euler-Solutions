#pragma once
#include <iostream>

//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?


void three(long long input)
{
	long long number = input;
	long biggestFactorial = 0;
	int counter = 2;

	while (counter * counter <= number)
	{
		if (number % counter == 0)
		{
			number = number / counter;
			biggestFactorial = counter;
		}
		else
		{
			counter++;
		}
	}
	if (number > biggestFactorial)
	{
		biggestFactorial = number;
	}

	std::cout << "The largest prime factor of " << input
		<< " is: " << biggestFactorial << std::endl;
}