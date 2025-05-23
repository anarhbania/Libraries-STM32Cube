/*
 * conversion.cpp
 *
 *  Created on: Mar 25, 2025
 *      Author: Bania
 */

#include "conversion.h"

ConversionClass::ConversionClass()
{

}

ConversionClass::~ConversionClass()
{

}

void ConversionClass::shortToByteArray(uint16_t value, uint8_t *array)
{
	uint16_t *s = &value;

	uint8_t *b = (uint8_t *)s;

	array[0] = (*b++);
	array[1] = (*b);
}

void ConversionClass::floatToByteArray(float value, uint8_t *array)
{
	float *f = &value;

	uint8_t *b = (uint8_t *)f;

	array[0] = (*b++);
	array[1] = (*b++);
	array[2] = (*b++);
	array[3] = (*b);
}

uint16_t ConversionClass::byteToShort(const uint8_t byte0, const uint8_t byte1)
{
	return (uint16_t)((byte1 << 8) | (byte0));
}

uint32_t ConversionClass::byteToInt(const uint8_t byte0, const uint8_t byte1, const uint8_t byte2, const uint8_t byte3)
{
	return (uint32_t)((byte3 << 24) | (byte2 << 16) | (byte1 << 8) | (byte0));
}

float ConversionClass::byteToFloat(const uint8_t byte0, const uint8_t byte1, const uint8_t byte2, const uint8_t byte3)
{
	return (float)((byte3 << 24) | (byte2 << 16) | (byte1 << 8) | (byte0));
}

int32_t ConversionClass::StringToInt(const char *buffer)
{
	return atoi(buffer);
}

int32_t ConversionClass::StringToLong(const char *buffer)
{
	return atol(buffer);
}

float ConversionClass::StringToFloat(const char *buffer)
{
	return atof(buffer);
}

ConversionClass Conversion;
