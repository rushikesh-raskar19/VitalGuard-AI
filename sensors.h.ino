#ifndef SENSORS_H
#define SENSORS_H

extern float heartRate;
extern float spo2;
extern float bodyTemp;
extern float totalWeight;

void initSensors();
void readAllSensors();

#endif