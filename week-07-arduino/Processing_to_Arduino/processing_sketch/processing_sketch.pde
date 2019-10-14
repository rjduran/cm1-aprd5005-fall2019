// Processing to Arduino
// RJ Duran
// Based on https://learn.sparkfun.com/tutorials/connecting-arduino-to-processing/all
// Processing sending mouse click over serial port to Arduino

import processing.serial.*;

Serial myPort;
String val;

void setup() {

  String portName = Serial.list()[3];
  myPort = new Serial(this, portName, 9600);
}

void draw() {
  if (mousePressed == true) 
  {                           //if we clicked in the window
    myPort.write('1');         //send a 1
    println("1");
  } else 
  {                           //otherwise
    myPort.write('0');          //send a 0
  }
}
