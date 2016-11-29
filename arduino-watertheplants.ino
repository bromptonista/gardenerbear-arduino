//  Version 0.1
//  This is a simple Arduino sketch that waters your plants
//  The live implementation of the script is a modified ELC My First Talking Ted, @GardenerBear
//  To make it work as-is connect the relay board to the pump and the power supply, then use pin D12 for RELAY_IN
//  A switch like https://hobbyking.com/en_us/keyes-ky-004-key-switch-module-for-arduino.html can be used - connect pin 2
//  or use the DO pin of the moisture sensor


// named constants for the switch and pump pins
const int switchPin = 2; // the number of the switch pin
const int pumpPin =  12; // the number of the pump pin

int switchState = 0;  // variable for reading the switch's status

void setup() {
  // initialize the pump pin as an output:
  pinMode(pumpPin, OUTPUT);
  // initialize the switch pin as an input:
  pinMode(switchPin, INPUT);
}

void loop() {
  // read the state of the switch value:
  switchState = digitalRead(switchPin);

  // check if the switch is pressed.
  if (switchState == HIGH) {
    // turn pump on (note not all relay boards are like the one I have - they may need the pin set to HIGH instead):
    digitalWrite(pumpPin, LOW);
    delay(20000);
  } else {
    // turn pump off:
    digitalWrite(pumpPin, HIGH);
  }
}
