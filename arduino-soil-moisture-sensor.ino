//  Version 0.1
//  This is a simple Arduino sketch that lets you use a computer or other serial device to measure your plants' moisture level
//  The live implementation of the script is a modified ELC My First Talking Ted, @GardenerBear
//  To make it work as-is connect the soil moisture sensor to the Arduino: GND to ground, VCC to digital pin D3, AO to analog pin A2, DO to digital pin D2

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  int probe = 3;
  int sensorDigital = 2;
  int sensorAnalog = 2;
  int measurementInterval = 60*1000;
  // power the sensor on digital pin:
  digitalWrite(probe, HIGH);
  delay(1000);
  // read the input on digital pin and print to serial:
  int sensorValueDigital = digitalRead(sensorDigital); Serial.println(sensorValueDigital);
  delay(100);
  // read the input on analog pin and print to serial:
  int sensorValueAnalog = analogRead(sensorAnalog); Serial.println(sensorValueAnalog);
  delay(100);
  // Power-down the probe
  digitalWrite(probe, LOW);
  // Sleep till next measurement
  delay(measurementInterval);
}
