/*
 * LogicLayer.h
 *
 *  Created on: Jul 28, 2020
 *      Author: sergi
 */

#ifndef LOGICLAYER_H_
#define LOGICLAYER_H_
#include <iostream>

class LogicLayer {
public:
	LogicLayer();
	std::string turnON(int value);
	std::string getColor(float value);
	virtual ~LogicLayer();
};

#endif /* LOGICLAYER_H_ */
