/*
 * tests.h
 *
 *  Created on: Jan 30, 2014
 *      Author: Nammy
 */

#ifndef TESTS_H
#define TESTS_H

#include "cxxtest/TestSuite.h"
#include "threes_puzzle.h"

class Test_threes_puzzle : public CxxTest::TestSuite{

public:

	void test_isThreeFirstOrLast(){

		bool t = isThreeFirstOrLast(303);
		bool f = isThreeFirstOrLast(101);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);

	}

	void test_isDoubleSinglePrime(){

		bool t = isDoubleSinglePrime(175);
		bool f = isDoubleSinglePrime(820);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);

	}

	void test_isSingleDoublePrime(){

		bool t = isSingleDoublePrime(713);
		bool f = isSingleDoublePrime(820);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}

	void test_isCubeFind(){

		bool t = isCubeFind (215);
		bool f = isCubeFind (126);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}

	void test_isTriangular(){

		bool t = isTriangular(105);
		bool f = isTriangular(115);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}

	void test_isProductDistinctPrimes(){

		bool t = isProductDistinctPrimes(102);
		bool f = isProductDistinctPrimes(120);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);

	}

	void test_ifPrime(){

		bool t = ifPrime(17);
		bool f = ifPrime(20);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}
};


#endif /* TESTS_H_ */
