// Arduino to Processing
// RJ Duran
// Based on https://learn.sparkfun.com/tutorials/connecting-arduino-to-processing/all
// Arduino sending "Hello World" over serial port to Processing

void setup() {
  // Init serial port at 9600 baud rate
  Serial.begin(9600);

}

void loop() {
  // send 'hello world' over serial port
  Serial.println("Hello World!");
  // wait 100 milliseconds
  delay(100);

}
