#pragma once
#include <iostream>

//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

bool isNotPrime(long input)
{
	bool notPrime = false;
	for (int i = 2; i <= input / 2; ++i)
	{
		if (input % i == 0)
		{
			notPrime = true;
			break;
		}
	}
	if (notPrime == false) std::cout << "This number is already prime." << std::endl;
	return(notPrime);
}

void three(long input)
{
	if (isNotPrime(input) == true)
	{
		int largestPrime = 0;
		for (int i = 2; i <= input / 2; ++i)
		{
			if (input % i == 0)
			{
				largestPrime = i;
			}
		};
		std::cout << "The largest prime factor of " << input
			<< " is: " << largestPrime << std::endl;
	}

}