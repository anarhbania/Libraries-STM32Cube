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

	uint16_t byteToShort(const uint8_t byte0, const uint8_t byte1);
	uint32_t byteToInt(const uint8_t byte0, const uint8_t byte1, const uint8_t byte2, const uint8_t byte3);
	float byteToFloat(const uint8_t byte0, const uint8_t byte1, const uint8_t byte2, const uint8_t byte3);

	int32_t StringToInt(const char *buffer);
	int32_t StringToLong(const char *buffer);
	float StringToFloat(const char *buffer);
};

extern ConversionClass Conversion;

#endif /* FX3U_24MR_TOOL_CONVERSION_H_ */
