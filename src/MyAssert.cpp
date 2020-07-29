/*
 * MyAssert.cpp
 *
 *  Created on: Jul 27, 2020
 *      Author: sergi
 */

#include "MyAssert.h"
#include <iostream>
#include <string>

MyAssert::MyAssert() {
	// TODO Auto-generated constructor stub

}

MyAssert::~MyAssert() {
	// TODO Auto-generated destructor stub
}

void MyAssert::fail(){
	std::cout <<"\nFAIL\n";
}

void MyAssert::myAssertEquals(int actual, int expected) {
	if (actual == expected)
		std::cout << ".";
	else
		std::cout << "\nFAIL " << actual << " and " << expected << " are different\n";
}

void MyAssert::myAssertEquals(int actual, int expected, std::string message){
	if (actual == expected)
		std::cout << ".";
	else
		std::cout << "\nFAIL " << actual << " != " << expected << ": " + message + "\n";
}

void MyAssert::myAssertEquals(std::string actual, std::string expected){
	if (actual == expected)
		std::cout << ".";
	else
		std::cout << "\nFAIL " << actual << " != " << expected << "\n";
}
