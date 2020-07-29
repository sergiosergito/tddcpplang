/*
 * MyAssert.h
 *
 *  Created on: Jul 27, 2020
 *      Author: sergi
 */

#ifndef MYASSERT_H_
#define MYASSERT_H_
#include <string>

class MyAssert {
public:
	MyAssert();

	void fail();
	void myAssertEquals(int actual, int expected);
	void myAssertEquals(int actual, int expected, std::string message);
	void myAssertEquals(std::string actual, std::string expected);
	virtual ~MyAssert();
};

#endif /* MYASSERT_H_ */
