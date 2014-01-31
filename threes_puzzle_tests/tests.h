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
private:

	bool t;
	bool f;

public:

	void setUp() {t=f=false;}

	void test_isThreeFirstOrLast(){

		t = isThreeFirstOrLast(303);
		f = isThreeFirstOrLast(101);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);

	}

	void test_isDoubleSinglePrime(){

		t = isThreeFirstOrLast(171);
		f = isThreeFirstOrLast(820);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);

	}

	void test_isSingleDoublePrime(){

		t = isThreeFirstOrLast(171);
		f = isThreeFirstOrLast(820);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}

	void test_isCubeFind(){

		t = isThreeFirstOrLast(215);
		f = isThreeFirstOrLast(126);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}

	void test_isTriangular(){

		t = isThreeFirstOrLast(105);
		f = isThreeFirstOrLast(115);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}

	void test_isProductDistinctPrimes(){

		t = isThreeFirstOrLast(102);
		f = isThreeFirstOrLast(120);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);

	}

	void test_ifPrime(){

		t = isThreeFirstOrLast(17);
		f = isThreeFirstOrLast(20);
		TS_ASSERT_EQUALS(t, true);
		TS_ASSERT_EQUALS(f, false);


	}
}


#endif /* TESTS_H_ */
