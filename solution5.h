#pragma once
#include <iostream>

// WORK IN PROGRESS


//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?


void five()
{
	int startNum = 20;
	bool found = false;
	//int smallestNum = 0;

	while (found == false)
	{
		bool soFarSoGood = true;
		for (int i = 2; i <= 20; i++)
		{
			if (startNum % i == 0)
			{
				soFarSoGood == true;
			}
			else
			{
				soFarSoGood == false;
				break;
			}
		}
		if (soFarSoGood == true)
		{
			found = true;
		}
		startNum = startNum * 20;
		std::cout << startNum;
	}
	//return smallestNum;
	if (found == true)
	{
		std::cout << "we found it my dudes.: " << startNum << std::endl;
	}
}