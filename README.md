arduino-kit
===========

Description
-----------

The provided arduino kit includes:

- 1 SainSmart Uno Board
- 1 SainSmart LCD Keypad Shield
- 1 Ultrasonic Module HC-SR04 Distance Sensor
- 1 SainSmart Prototype Shield
- 1 Mini Breadboard
- 65*Jumper Cable

Description of provided source code
-----------------------------------

Three programs are provided:

- fHACKtory-display simply displays "fHACKtory" on the LCD screen,
- test_distance logs the value of the distance sensor to the Arduino console,
- and SainSmart_ultrasonic_keypad is a complete sample source code provided by SainSmart.

In order to test these programs, you must:

- download and install the [Arduino IDE](http://arduino.cc/en/Main/Software),
- open the project file you want to run in the IDE,
- assemble the electronic circuit as specified in the source code,
- compile and upload the source code to your arduino board, through the USB interface.

Description of hardware components
----------------------------------

The SainSmart Uno for Arduino has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz crystal oscillator, a USB connection, a power jack, an ICSP header, and a reset button. It contains everything needed to support the microcontroller.

The SainSmart LCD Keypad Shield includes a 16x2 HD44780 White on Blue LCD module and a 5 push button keypad for menu selection and user interface programming. Fully assembled. On-line Arduino tutorial and example code. Compatible with Arduino Uno, Mega, Duemilanove. Uses digital pins 4 - 10, and analog pin 0.

The SainSmart Prototyping Prototype Shield:

- Access to a BlueSMiRF socket for wireless communication between Arduinos
- 2 general LEDs;1 general pushbutton switch;1 Arduino reset switch brought to top level
- 5V, GND, and Raw pins are exposed as well
- Breadboard Jump Wires: Self-adhesive backing to stick on the Arduino Protoytpe Shield
- 170 tie points.

The Ultrasonic Module HC-SR04 Distance Sensor are 4 pins out of the module: VCC, Trig, Echo, GND. So it's a very easy interface for controller to use it ranging. The all process is : pull the Trig pin to high level for more than 10us impulse, the module start ranging; finish ranging, If you find an object in front, Echo pin will be high level, and based on the different distance,it will take the different duration of high level. So we can calculated the distance easily:

Distance = ((Duration of high level)*(Sonic :340m/s))/2

If you want more information, checkout the [reference page of this kit](https://drive.google.com/file/d/1KYv2L4qfvGFHA-PhE-QvOXM83vQIpxD-l9bF0hyNlMs_KCz5W3PO5kwdylZ3RCyv4wjRhJFjUCWz3smq/view?usp=sharing).