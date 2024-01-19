#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <iostream>
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float _result;
	if (_from == TemperatureUnits::CELSIUS)
	{
		if (_to == TemperatureUnits::FAHRENHEIT)
		{
			_result = 9 / 5 * (_value)+32;
			std::cout << _result << std::endl;
		}

		if (_to == TemperatureUnits::KELVIN)
		{
			_result = _value + 273;
			std::cout << _result << std::endl;
		}
	}

	if (_from == TemperatureUnits::FAHRENHEIT)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			_result = 5 / 9 * (_value - 32);
			std::cout << _result << std::endl;
		}

		if (_to == TemperatureUnits::KELVIN)
		{
			_result = 5 / 9 * (_value - 32) + 273;
			std::cout << _result << std::endl;
		}
	}

	if (_from == TemperatureUnits::KELVIN)
	{
		if (_to == TemperatureUnits::CELSIUS) //Ok
		{
			_result = _value - 273;
			std::cout << _result << std::endl;
		}

		if (_to == TemperatureUnits::FAHRENHEIT) //ok
		{
			_result = 9 / 5 * (_value - 273) + 32;
			std::cout << _result << std::endl;
		}
	}

	return -1.0f;
}

#endif
