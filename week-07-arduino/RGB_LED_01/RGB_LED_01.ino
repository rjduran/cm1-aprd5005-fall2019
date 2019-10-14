// RGB LED 01
// RJ Duran
// Fade up and and down with Red color
// Note: This example uses a Common Anode RGB LED.
// Go here to learn more about Common Cathode and Common Anode LEDs:
// https://youtu.be/JpEFAXenTyY?t=419
// https://create.arduino.cc/projecthub/muhammad-aqib/arduino-rgb-led-tutorial-fc003e

int redPin = 11;    // set pin for red LED
int greenPin = 10;  // set pin for green LED
int bluePin = 9;    // set pin for blue LED

int val;
int delta = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}
void loop()
{
  // Green and Blue are fixed in this case
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);

  // RED
  // Ramp Up
  for (val = 255; val > 0; val--) {
    analogWrite(redPin, val);
    delay(delta);
    Serial.println(val, DEC);
  }
  // Ramp Down
  for (val = 0; val < 255; val++) {
    analogWrite(redPin, val);
    delay(delta);
    Serial.println(val, DEC);
  }
  delay(2 * delta);
}
