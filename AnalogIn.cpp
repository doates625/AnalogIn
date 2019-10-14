/**
 * @brief AnalogIn.cpp
 * @author Dan Oates (WPI Class of 2020)
 */
#include "AnalogIn.h"

#if defined(PLATFORM_ARDUINO)

/**
 * Static Constants
 */
const float AnalogIn::fsr_inv = 1.0f / 1023.0f;

/**
 * @brief Constructs analog input
 * @param pin Platform-specific pin ID
 */
AnalogIn::AnalogIn(Platform::pintype_t pin)
{
	this->pin = pin;
	pinMode(pin, INPUT);
}

/**
 * @brief Returns normalized ADC reading in range [0,1]
 */
float AnalogIn::read()
{
	return analogRead(pin) * fsr_inv;
}

/**
 * @brief Returns normalized 16-bit ADC rading in range [0x0000, 0xFFFF]
 */
uint16_t AnalogIn::read_u16()
{
	return (uint16_t)analogRead(pin) << 6;
}

/**
 * @brief Shorthand for read operation
 */
AnalogIn::operator float()
{
	return read();
}

#endif