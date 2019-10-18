# AnalogIn
Class for Arduino and Mbed analog inputs  
Written by Dan Oates (WPI Class of 2020)

### Description
This class implements the Mbed AnalogIn class for Arduino to allow for cross-platform libraries. For the read_u16 method, the 10-bit Arduino ADC reading is left-shifted by 6 to fill the 16-bit FSR to match Mbed.

### Dependencies
- [Platform](https://github.com/doates625/Platform.git)

### References
- [Mbed AnalogIn](https://os.mbed.com/docs/mbed-os/v5.14/apis/analogin.html)