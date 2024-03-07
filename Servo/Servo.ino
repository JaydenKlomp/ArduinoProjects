#include <Servo.h>  // include the servo library

Servo myServo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position
bool direction = true;

void setup() {
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  if (pos <= 180 && direction == true) {
    myServo.write(pos);
    pos++;
    if (pos > 180) {
      direction = false;
    }
  }
  
  if (pos >= 0 && direction == false) {
    myServo.write(pos);
    pos--;
    if (pos < 0) {
      direction = true;
    }
  }
  
  delay(150);
}
