#pragma once

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

enum class TemperatureUnits
{
	CELSIUS = 0,
	FAHRENHEIT = 1,
	KELVIN = 2
};

class Solution1 // Temperature converter
{
public:
	static float ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to);
};

#endif
