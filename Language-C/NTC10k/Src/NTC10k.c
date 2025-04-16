/*
 * NTC.c
 *
 *  Created on: Aug 25, 2024
 *      Author: Bania
 */

#include "NTC10k.h"

float NTC_Convert(uint16_t value)
{
	const float resistor = 10000;
	const float nominalResistance = 10000;
	const float nominalTemperature = 25;
	const float coefficient = 3950;

	float resistance, steinhart;

	resistance = resistor * (4095.0 / (float)value - 1.0);

	steinhart = resistance / nominalResistance;
	steinhart = log(steinhart);
	steinhart /= coefficient;
	steinhart += 1.0 / (nominalTemperature + 273.15);
	steinhart = 1.0 / steinhart;
	steinhart -= 273.15;

	return steinhart;
}
