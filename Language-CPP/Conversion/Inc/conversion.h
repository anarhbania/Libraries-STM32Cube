/*
 * conversion.h
 *
 *  Created on: Mar 25, 2025
 *      Author: Bania
 */

#ifndef CONVERSION_H_
#define CONVERSION_H_

#include "main.h"

class ConversionClass
{
	public:
	ConversionClass();
	~ConversionClass();

	void shortToByteArray(uint16_t value, uint8_t *array);
	void floatToByteArray(float value, uint8_t *array);
	uint16_t byteToShort(uint8_t byte0, uint8_t byte1);
	uint32_t byteToInt(uint8_t byte0, uint8_t byte1, uint8_t byte2, uint8_t byte3);
	float byteToFloat(uint8_t byte0, uint8_t byte1, uint8_t byte2, uint8_t byte3);
};

extern ConversionClass Conversion;

#endif /* CONVERSION_H_ */
