#ifndef SENSORS_CONTROLLER_H
#define SENSORS_CONTROLLER_H

#include "Sensor.h"

/**
  Controller stores sensors, polls their for theirs data in their intervals
*/
class SensorsController {
  public:
    SensorsController(byte);
    virtual ~SensorsController();
    // Stores sensor
    void addSensor(Sensor *);
    void process();

    // Transmits data from the sensor
    void transmitPackage(const char *, const int);

    // Set the printer that will be receive data
    void setPrinter(Print &);

  private:
    Sensor ** sensors;
    byte countSensors;
    byte maxCount;
    Print * p;
};

#endif // SENSORS_CONTROLLER_H
