/*
 * LogicLayer.cpp
 *
 *  Created on: Jul 28, 2020
 *      Author: sergi
 */

#include "LogicLayer.h"
#include <iostream>

LogicLayer::LogicLayer() {
	// TODO Auto-generated constructor stub

}

LogicLayer::~LogicLayer() {
	// TODO Auto-generated destructor stub
}

std::string LogicLayer::getColor(float value){
	if (value < 0 || value > 100)
		return "none";
	if (value >= 0 && value <= 24.99)
		return "Green";
	if (value >= 25 && value <= 49.999)
		return "Yellow";
	if (value >= 50 && value <= 74.99)
		return "Orange";
	if (value >= 75 && value <= 100)
		return "Red";
	else return "none";
}

std::string LogicLayer::turnON(int value){
	if (value >= 0 && value <= 10)
		return "HIGH";
	else
		return "LOW";
}
