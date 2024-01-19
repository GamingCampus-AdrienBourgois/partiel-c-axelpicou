#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <iostream>
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	if (_from == _to)
	{
		float _result = _value;
		std::cout <<"the units are the same" << std::endl;
		return _result;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS)
	{
		float _result = _value - 273.15;
		std::cout << "en kelvin :"<< _value<< " apres convertion en celsius :" << _result << std::endl;
		return _result;
	}
	else if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT)
	{
		float _result = (9.0 / 5) * (_value - 273.15) + 32;
		std::cout << "en kelvin :" << _value << " apres convertion en fahrenheit :" << _result << std::endl;
		return _result;
	}
	else if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::KELVIN)
	{
		float _result = _value + 273.15;
		std::cout << "en celsius :" << _value << " apres convertion en kelvin :" << _result << std::endl;
		return _result;
	}
	else if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::CELSIUS)
	{
		float _result = (5 / 9.0) * (_value - 32);
		std::cout << "en fahrenheit :" << _value << " apres convertion en celsius :" << _result << std::endl;
		return _result;
	}


}

#endif
