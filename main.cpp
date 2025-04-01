#include "mbed.h"
#include "ir_sensor.h"

#define IR_SENSOR_PIN PA_0 // Define the IR sensor pin

IRSensor irSensor(IR_SENSOR_PIN);
UnbufferedSerial pc(USBTX, USBRX, 9600); // Serial communication

int main() {
    pc.printf("IR Sensor Test Started...\n");

    while (true) {
        if (irSensor.isObjectDetected()) {
            pc.printf("Object Detected!\n");
        } else {
            pc.printf("No Object Detected\n");
        }
        thread_sleep_for(500); // Delay for 500ms
    }
}
