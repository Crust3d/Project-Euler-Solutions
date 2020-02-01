#pragma once
#include <iostream>


// WORK IN PROGRESS
//my notes are incorrect and this problem is incomplete.




//A palindromic number reads the same both ways.The largest palindrome made from the product of two 2 - digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3 - digit numbers.


// 999*999 = 998,001 = max possible. so number must be:
// 9,801 < i < 998,001
// 99,799 is the answer. Trying to figure out how to get there with code (and apply for other stipulations
// actually ^ that may be wrong b/c it needs to be a product of 2 3 digint numbers, not just less than the max.
void four()
{
	int largestPalindrome = 0;
	int numA = 0;
	int numB = 0;
	int maxx = 998001; // The number cannot be higher than 999 * 999 = 998001.

	//possibly change int i = 10000 below to int i = 100000. b/c there are many palindromes above
	// 100000, so it is very likely that there will be some that are composite of two 3-digit numbers.
	//therefore, it would be more efficient to start at a position where less numbers would be required
	//to be checked. (this is probably only relevent in a brute force method, which i am unconvinced is the
	// best way to accomplish this solution.) https://en.wikipedia.org/wiki/Palindromic_number
	// 101 * 101 = 10201 is an example of a number that would work. (but it needs to be the largest of possible numbers in target..)

	for (/*each number for value range. i as above.*/ int i = 10000; i < maxx; i++) // The number cannot be lower than 100 * 100 = 10000.
	{
		//std::string str = std::to_string(i);

	}

	std::cout << "The largest palindromic number from 2 three-digit numbers is: "
		<< largestPalindrome << ". Which is a product of: " << numA << " and " << numB << std::endl;
}