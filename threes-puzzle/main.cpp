/*
 * main.cpp
 *
 *  Created on: Jan 25, 2014
 *      Author: Nammy
 */

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

bool isThreeFirstOrLast (int number);
bool isDoubleSinglePrime (int number);
bool isSingleDoublePrime (int number);
bool isCubeFind (int number);
bool isTriangular (int number);
bool isProductDistinctPrimes (int number);
bool ifPrime(int num);

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

		/*else {
			int count = 0;
			if((isThreeFirstOrLast(i) + isDoubleSinglePrime(i) + isSingleDoublePrime(i) + isCubeFind(i) + isTriangular(i) + isProductDistinctPrimes(i)) == 3) {
				KarimNums[KarimCount] = i;
				KarimCount++;
			}
		}*/
	}

	for(int i = 0; i < 900; i++){

		cout << KarimNums[i] << endl;

	}

	return 0;
}

bool isThreeFirstOrLast (int& number)
{
	if((number%10 == 3) || (number/100 == 3))
		return true;
	else
		return false;
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

	for(int i = 0; i <= 999; i++){

		for(int j = 0; j <= 999; j++){

			for(int k = 0; k <= 999; k++){

				if(i*j*k == number){

					if(ifPrime(i) && ifPrime(j) && ifPrime(k))
						return true;

				}

			}

		}


	}

	return false;

};

/*
 * Gotten ifPrime function from www.cplusplus.com
 * 2nd Post down from user 'z05DSL3A'
 * Original create date: April 2nd 2008
 */
bool ifPrime(int num){

    if (num <=1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);

        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }

};

