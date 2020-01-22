//
//  module de test de la feather ESP32
// (c) B. Froger 2020


#include <arduino.h>

int loopDelay = 1000;
int cpt=0;

void setup() {
    // initialize serial communication
    Serial.begin(115200);
    int timeoutInitSerial = 100;
    while (timeoutInitSerial-- > 0)
    {
        if (Serial)
        break;
        delay(10);
    }
    if (timeoutInitSerial != 0)
    {
        Serial.println("Serial initialized");
    } else
    {
        Serial.println("Serial not initialized");
        exit(0);
    }
    
}

void loop() {

    if (cpt++ >= 25){
        Serial.println("");
        cpt = 0;
    }
    Serial.print(".");
    delay(loopDelay);
}