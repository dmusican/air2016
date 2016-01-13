#include "Servo.h"

Servo servo_1;
int pin = 1;

void setup()
{
 
  servo_1.attach(pin);

}


void loop()
{
  servo_1.write(10);
  delay(1000);
  servo_1.write(170);
  delay(1000);
}
