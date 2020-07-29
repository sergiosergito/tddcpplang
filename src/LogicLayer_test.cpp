/*
 * LogicLayer_test.cpp
 *
 *  Created on: Jul 28, 2020
 *      Author: sergi
 */

#include "LogicLayer.h"
#include <iostream>
#include "LogicLayer.h"
#include "MyAssert.h"

MyAssert assert;
LogicLayer logic;

void shouldReturnColorNoneWhenGivenMin0(){
	assert.myAssertEquals(logic.getColor(-0.001), "none");
}

void shouldReturnColorGreenWhenGiven0(){
	assert.myAssertEquals(logic.getColor(0.000), "Green");
}

void shouldReturnColorGreenWhenGiven24Dot99(){
	assert.myAssertEquals(logic.getColor(24.99), "Green");
}

void shouldReturnColorYellowWhenGiven25Dot001(){
	assert.myAssertEquals(logic.getColor(25.001), "Yellow");
}

void shouldReturnColorYellowWhenGiven49Dot99(){
	assert.myAssertEquals(logic.getColor(49.99), "Yellow");
}

void shouldReturnColorOrangeWhenGiven50Dot001(){
	assert.myAssertEquals(logic.getColor(50.001), "Orange");
}

void shouldReturnColorOrangeWhenGiven74Dot99(){
	assert.myAssertEquals(logic.getColor(74.99), "Orange");
}

void shouldReturnColorRedWhenGiven75Dot001(){
	assert.myAssertEquals(logic.getColor(75.001), "Red");
}

void shouldReturnColorRedWhenGiven100(){
	assert.myAssertEquals(logic.getColor(100.00), "Red");
}

void shouldReturnColornoneWhenGiven100Dot001(){
	assert.myAssertEquals(logic.getColor(100.001), "none");
}

void shouldReturnHIGHWhenGivenMinus1(){
	assert.myAssertEquals(logic.turnON(-1), "LOW");
}

void shouldReturnHIGHWhenGiven0(){
	assert.myAssertEquals(logic.turnON(0), "HIGH");
}

void shouldReturnHIGHWhenGiven5(){
	assert.myAssertEquals(logic.turnON(5), "HIGH");
}

void shouldReturnHIGHWhenGiven10(){
	assert.myAssertEquals(logic.turnON(10), "HIGH");
}

void shouldReturnHIGHWhenGiven11(){
	assert.myAssertEquals(logic.turnON(11), "LOW");
}

void suiteTurnON(){
	shouldReturnHIGHWhenGivenMinus1();
	shouldReturnHIGHWhenGiven0();
	shouldReturnHIGHWhenGiven5();
	shouldReturnHIGHWhenGiven10();
	shouldReturnHIGHWhenGiven11();
}

void suiteTurnColorName(){
	shouldReturnColorNoneWhenGivenMin0();
	shouldReturnColorGreenWhenGiven0();
	shouldReturnColorGreenWhenGiven24Dot99();
	shouldReturnColorYellowWhenGiven25Dot001();
	shouldReturnColorYellowWhenGiven49Dot99();
	shouldReturnColorOrangeWhenGiven50Dot001();
	shouldReturnColorOrangeWhenGiven74Dot99();
	shouldReturnColorRedWhenGiven75Dot001();
	shouldReturnColorRedWhenGiven100();
	shouldReturnColornoneWhenGiven100Dot001();
}

int main(){
	suiteTurnON();
	suiteTurnColorName();
	return 0;
}
