#pragma once
#include <iostream>

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.


void one(int num)
{
	int sums = 0;

	for (int i = 0; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sums = sums + i;
		}
	}
	std::cout << "The sum of all multiples of either 3 or 5 below " << num;
	std::cout << " is: " << sums << std::endl;
}