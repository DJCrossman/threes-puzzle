/*
 * main.cpp
 *
 *  Created on: Jan 25, 2014
 *      Author: Nammy
 */

#include <iostream>
#include <iomanip>
#include <math.h>
#include "threes_puzzle.h"

using namespace std;
/*
int main () {
	// array of satisfied numbers
	int KarimNums [3] = {0,0,0};
	// numbers stored
	int KarimCount = 0;
	cout << "Start Program" << endl;
	for (int i = 102; i < 999; i+=3)
	{
		cout << "Running..." << endl;
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

	for(int i = 0; i < 3; i++){

		cout << KarimNums[i] << endl;

	}

	return 0;
}
*/

bool isThreeFirstOrLast (int number)
{
	
	if((number%10 == 3) || (number/100 == 3))
		return true;
	else
		return false;
}
bool isDoubleSinglePrime (int number)
{
	return (ifPrime(number/10) && ifPrime(number%10));
}
bool isSingleDoublePrime (int number)
{
	return (ifPrime(number%100) && ifPrime(number/100));
}
bool isCubeFind (int number)
{

	int cube = int(cbrt(number));
	//int cubethree = int(cbrt(number + 3));
	if ((cube*cube*cube) == number){
		return true;
	}
	else{
		return false;
	}
}
bool isTriangular (int number)
{
	int tri = int(sqrt(8 * number + 1));

	if ((tri*tri) == (8 * number + 1)){
		return 1;
	}
	else{
		return 0;

	}
}
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

}

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

}

