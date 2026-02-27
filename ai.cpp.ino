#include "sensors.h"
#include "ai.h"

void runAI() {
  if (spo2 < 92) {
    Serial.println("Alert: Low Oxygen Level");
  }

  if (totalWeight < 10) {
    Serial.println("Alert: Bed Empty");
  }
}