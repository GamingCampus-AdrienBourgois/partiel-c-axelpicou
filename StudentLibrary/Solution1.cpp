#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <iostream>
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	if (_from == _to)
	{
		std::cout <<"the units are the same" << std::endl;
		return -1.0f;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS)
	{
		float _result = _value - 273.15;
		std::cout << "en kelvin :"<< _value<< " apres convertion en celsius :" << _result << std::endl;
		return -1.0f;
	}


}

#endif
