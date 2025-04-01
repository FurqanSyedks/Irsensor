#include "ir_sensor.h"

IRSensor::IRSensor(PinName pin) : sensor(pin) {
    sensor.mode(PullUp); // Enable pull-up resistor to stabilize input
}

bool IRSensor::isObjectDetected() {
    return sensor.read() == 0; // Returns true if an object is detected
}
