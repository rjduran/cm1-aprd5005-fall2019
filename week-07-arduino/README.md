# cm-arduino
CM1 Week 7 Arduino Examples

## RGB LED Examples

The RGB LED examples are constructed in a similar fashion to the various tutorials below. The circuit diagrams are shown below for each example. Note each example here is using a Common Anode RGB LED. 

### RGB_LED_01

**Hardware**

* 1 x breadboard
* 1 x Arduino uno
* Hook Up Wires (aka Jumpers)
* 1 x RGB LED (Common Annode)
* 3 x 220 ohm LEDs _(Note: The circuit will also work without these as long as you aren't trying to hook up several RGB LEDs powered by your USB port. If you don't use resistors, make sure to still connect each signal wire to the correct leg of the RGB LED.)_

![RGB_LED_01][RGB_LED_01]

### RGB_LED_02

**Hardware**

* Same as previous example

![RGB_LED_02][RGB_LED_01]

### RGB_LED_03

**Hardware**

* Same as previous 2 examples
* 3 x Potentiometers (aka Knob)
* Additional Hook Up Wires

![RGB_LED_03][RGB_LED_03]

**Related Tutorials**

* [Arduino RGB LED Tutorial](https://create.arduino.cc/projecthub/muhammad-aqib/arduino-rgb-led-tutorial-fc003e) on Arduino Project Hub
* [Adafruit Arduino - Lesson 3. RGB LED](https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/arduino-sketch)
* [How to use a RGB LED with Arduino](https://howtomechatronics.com/tutorials/arduino/how-to-use-a-rgb-led-with-arduino/)
* [RGB LEDs with Arduino - Standard & NeoPixel](https://www.youtube.com/watch?v=JpEFAXenTyY) by DroneBot Workshop

## Arduino + Processing Examples

The Arduino + Processing examples demonstrate basic serial communication between Arduino and Processing sketches. The initial examples are built based on the Sparkfun tutorial [Connecting Arduino to Processing](https://learn.sparkfun.com/tutorials/connecting-arduino-to-processing/all). Further examples will expand upon the content in the tutorial. 

<!-- 
## Servo Examples

**Wires**

Brown or Black = Ground
Red = +5 V
Orange or White = Control 
-->

 <!-- Image References -->

[RGB_LED_01]: imgs/RGB_LED_01.png "RGB_LED_01"
[RGB_LED_03]: imgs/RGB_LED_03.png "RGB_LED_03"