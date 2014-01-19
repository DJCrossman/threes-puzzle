/**
	Program:	main.cpp
	Date:		01/18/2014
*/

#include <iostream>
#include <iomanip>

using namespace std;

bool isThreeFirstOrLast (int number);
bool isDoubleSinglePrime (int number);
bool isSingleDoublePrime (int number);
bool isCubeFind (int number);
bool isTriangular (int number);
bool isProductDistinctPrimes (int number);

int main () {
	// array of satisfied numbers
	int KarimNums [3];
	// numbers stored
	int KarimCount = 0;
	for (int i = 102; i < 999; i+3)
	{
		if (KarimNums[2] != NULL)
		{
			break;
		} 
		else {
			int count = 0;
			if((isThreeFirstOrLast(i) + isDoubleSinglePrime(i) + isSingleDoublePrime(i) + isCubeFind(i) + isTriangular(i) + isProductDistinctPrimes(i)) == 3) {
				KarimNums[KarimCount] = i;
				KarimCount++;
			}
		}
	}

	return 0;
}

bool isThreeFirstOrLast (int number)
{
	return true;
};
bool isDoubleSinglePrime (int number)
{
	return true;
};
bool isSingleDoublePrime (int number)
{
	return true;
};
bool isCubeFind (int number)
{
	return true;
};
bool isTriangular (int number)
{
	return true;
};
bool isProductDistinctPrimes (int number)
{
	return true;
};