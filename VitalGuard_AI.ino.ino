#include "sensors.h"
#include "ai.h"

void setup() {
  Serial.begin(115200);
  initSensors();
}

void loop() {
  readAllSensors();
  runAI();
  delay(2000);
}