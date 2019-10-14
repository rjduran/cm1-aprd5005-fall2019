// Arduino to Processing
// RJ Duran
// Based on https://learn.sparkfun.com/tutorials/connecting-arduino-to-processing/all
// Arduino sending "Hello World" over serial port to Processing

import processing.serial.*;

Serial myPort;
String val;

void setup() {
  
  String portName = Serial.list()[3];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  if ( myPort.available() > 0) 
  {  // If data is available,
    val = myPort.readStringUntil('\n');         // read it and store it in val
  } 
  println(val); //print it out in the console
}
