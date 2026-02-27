#include "sensors.h"

float heartRate = 0;
float spo2 = 0;
float bodyTemp = 0;
float totalWeight = 0;

void initSensors() {
  Serial.println("Sensors Initialized");
}

void readAllSensors() {
  // Replace with real sensor reading
  heartRate = random(70, 90);
  spo2 = random(94, 100);
  bodyTemp = random(36, 38);
  totalWeight = random(50, 80);

  Serial.println("Sensor Data Updated");
}