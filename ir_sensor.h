#ifndef IR_SENSOR_H
#define IR_SENSOR_H

#include "mbed.h"

class IRSensor {
public:
    IRSensor(PinName pin);  // Constructor
    bool isObjectDetected(); // Function to check if an object is detected

private:
    DigitalIn sensor; // Digital input pin for IR sensor
};

#endif
