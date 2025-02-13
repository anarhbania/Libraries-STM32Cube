/*
 * Convert.h
 *
 *  Created on: Aug 25, 2024
 *      Author: Bania
 */

#ifndef CONVERT_H_
#define CONVERT_H_

#include "main.h"

#define ON  1
#define OFF 0

void Convert_Uint16ToUint8Array(uint16_t value, uint8_t *array);
void Convert_FloatToUint8Array(float value, uint8_t *array);
uint8_t Convert_Uint16ToUint8Low(uint16_t value);
uint8_t Convert_Uint16ToUint8High(uint16_t value);
uint16_t Convert_Uint8ToUint16(uint8_t fistUint8, uint8_t secondUint8);
uint32_t Convert_Uint8ToUint32(uint8_t fistUint8, uint8_t secondUint8, uint8_t thirdUint8, uint8_t fourthUint8);
uint32_t Convert_Uint16ToUint32(uint16_t fistUint16, uint16_t secondUint16);
float Convert_Uint8ToFloat(uint8_t fistUint8, uint8_t secondUint8, uint8_t thirdUint8, uint8_t fourthUint8);
float Convert_Uint16ToFloat(uint16_t fistUint16, uint16_t secondUint16);

#endif /* CONVERT_H_ */
