// RGB LED 02
// RJ Duran
// Cycles through colors with 1 sec delay for each
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
void loop()
{

  RGBColor(255, 0, 0); // RED
  delay(1000);
  RGBColor(0, 255, 0); // GREEN
  delay(1000);
  RGBColor(0, 0, 255); // BLUE
  delay(1000);
  RGBColor(255, 255, 0); // YELLOW
  delay(1000);
  RGBColor(125, 0, 125); // PURPLE
  delay(1000);
  RGBColor(0, 255, 255); // CYAN
  delay(1000);
  RGBColor(255, 255, 255); // WHITE
  delay(1000);
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
