// RGB LED 03
// RJ Duran
// Adjust RGB colors / brightness with potentiometer
// Works for both Common Cathode and Common Anode LEDs. Default mode is Common Anode.

int redPin = 11;    // set pin for red LED
int greenPin = 10;  // set pin for green LED
int bluePin = 9;    // set pin for blue LED

// comment this line out if using a Common Cathode LED
#define COMMON_ANODE

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  int red = analogRead(A0);
  int green = analogRead(A1);
  int blue = analogRead(A2);

  // tip: watch serial monitor (Tools > Serial Monitor)
  Serial.print(red);
  Serial.print(", ");
  Serial.print(green);
  Serial.print(", ");
  Serial.print(blue);

  // map to PWM range for driving RGB led brightness
  int redMap = map(red, 0, 1024, 0, 255);
  int greenMap = map(green, 0, 1024, 0, 255);
  int blueMap = map(blue, 0, 1024, 0, 255);
  
  Serial.print(" --> ");
  Serial.print(redMap);
  Serial.print(", ");
  Serial.print(greenMap);
  Serial.print(", ");
  Serial.print(blueMap);
  Serial.println();

  RGBColor(redMap, greenMap, blueMap);
  delay(10);

  // RED: 255, 0, 0
  // GREEN: 0, 255, 0
  // BLUE: 0, 0, 255
  // YELLOW: 255, 255, 0
  // PURPLE: 125, 0, 125
  // CYAN: 0, 255, 255
  // WHITE: 255, 255, 255
}

void RGBColor(int redVal, int greenVal, int blueVal) {

  #ifdef COMMON_ANODE
    redVal = 255 - redVal;
    greenVal = 255 - greenVal;
    blueVal = 255 - blueVal;
  #endif
  
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);
}
