/**
 * @file AnalogIn.h
 * @brief Class for Arduino and Mbed analog inputs
 * @author Dan Oates (WPI Class of 2020)
 */
#pragma once
#include <Platform.h>

#if defined(PLATFORM_ARDUINO)

/**
 * Class Declaration
 */
class AnalogIn
{
public:
	AnalogIn(Platform::pin_t pin);
	float read();
	uint16_t read_u16();
	operator float();
protected:
	static const float fsr_inv;
	Platform::pin_t pin;
};

#endif