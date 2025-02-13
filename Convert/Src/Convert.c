/*
 * Convert.c
 *
 *  Created on: Aug 25, 2024
 *      Author: Bania
 */

#include "Convert.h"

void Convert_Uint16ToUint8Array(uint16_t value, uint8_t *array)
{
	uint16_t *v = &value;

	uint8_t *a = (uint8_t *)v;

	array[0] = (*a++);
	array[1] = (*a);
}

void Convert_FloatToUint8Array(float value, uint8_t *array)
{
	float *v = &value;

	uint8_t *a = (uint8_t *)v;

	array[0] = (*a++);
	array[1] = (*a++);
	array[2] = (*a++);
	array[3] = (*a);
}

uint8_t Convert_Uint16ToUint8Low(uint16_t value)
{
	return (uint8_t)(value & 0xFF);
}

uint8_t Convert_Uint16ToUint8High(uint16_t value)
{
	return (uint8_t)(value >> 8);
}

uint16_t Convert_Uint8ToUint16(uint8_t fistUint8, uint8_t secondUint8)
{
	return (uint16_t)((secondUint8 << 8) | (fistUint8));
}

uint32_t Convert_Uint8ToUint32(uint8_t fistUint8, uint8_t secondUint8, uint8_t thirdUint8, uint8_t fourthUint8)
{
	return (uint32_t)((fourthUint8 << 24) | (thirdUint8 << 16) | (secondUint8 << 8) | (fistUint8));
}

uint32_t Convert_Uint16ToUint32(uint16_t fistUint16, uint16_t secondUint16)
{
	return (uint32_t)((secondUint16 << 16) | (fistUint16));
}

float Convert_Uint8ToFloat(uint8_t fistUint8, uint8_t secondUint8, uint8_t thirdUint8, uint8_t fourthUint8)
{
	return (float)((fourthUint8 << 24) | (thirdUint8 << 16) | (secondUint8 << 8) | (fistUint8));
}

float Convert_Uint16ToFloat(uint16_t fistUint16, uint16_t secondUint16)
{
	return (float)((secondUint16 << 16) | (fistUint16));
}
