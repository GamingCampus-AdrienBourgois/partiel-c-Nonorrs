#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <iostream>
#include <iomanip>
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float _result;
	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::FAHRENHEIT)
	{
		_result = 9.f / 5.f * (_value)+32.f;
		std::cout << std::fixed << std::setprecision(2) << _result << std::endl;
		//std::cout << _result << std::endl;
	}

	if (_from == TemperatureUnits::CELSIUS && _to == TemperatureUnits::KELVIN)
	{
		_result = _value + 273.15f;
		std::cout << std::fixed << std::setprecision(2) << _result << std::endl;
		//std::cout << _result << std::endl;
	
	}

	if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::CELSIUS)
	{

		_result = 5.f / 9.f * (_value - 32.f);
		std::cout << std::fixed << std::setprecision(2) << _result << std::endl;
		//std::cout << _result << std::endl;
	}

	if (_from == TemperatureUnits::FAHRENHEIT && _to == TemperatureUnits::KELVIN)
	{
		_result = 5.f / 9.f * (_value - 32.f) + 273.15f;
		std::cout << std::fixed << std::setprecision(2) << _result << std::endl;
		//std::cout << _result << std::endl;
	
	}

	if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::CELSIUS)
	{
		_result = _value - 273.15;
		std::cout << std::fixed << std::setprecision(2) << _result << std::endl;
		//std::cout << _result << std::endl;
	}

	if (_from == TemperatureUnits::KELVIN && _to == TemperatureUnits::FAHRENHEIT)
	{
		_result = 9.f / 5.f * (_value - 273.15f) + 32.f;
		std::cout << std::fixed << std::setprecision(2) << _result << std::endl;
		//std::cout << _result << std::endl;
	}

	if (_from == _to)
	{
		std::cout << _value << std::endl;
	}

	return -1.0f;
}

#endif
