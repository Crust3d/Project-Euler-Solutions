#pragma once
#include <iostream>

//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

void Primality(int input)
{
	bool primality = true;
	for (int i = 2; i <= input / 2; i++)
	{
		if (input % i == 0)
		{
			primality = false;
			break;
		}
	}
	if (primality) std::cout << "This number is already prime." << std::endl;
	else std::cout << "sallgood get started boi" << std::endl;
}

void three(int num)
{
	Primality(num);


}