// Processing to Arduino
// RJ Duran
// Based on https://learn.sparkfun.com/tutorials/connecting-arduino-to-processing/all
// Processing sending mouse click over serial port to Arduino

char val; // Data received from the serial port
int ledPin = 13; // Set the pin to digital I/O 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin as OUTPUT
  // Init serial port at 9600 baud rate
  Serial.begin(9600);

}

void loop() {
  if (Serial.available())
  { // If data is available to read,
    val = Serial.read(); // read it and store it in val
  }
  if (val == '1')
  { // If 1 was received
    digitalWrite(ledPin, HIGH); // turn the LED on   
  } else {
    digitalWrite(ledPin, LOW); // otherwise turn it off
  }
  delay(10); // Wait 10 milliseconds for next reading
}
