// Look Mom, no for loops!

#include <Servo.h>

Servo servo;
int servoPin = 45;
int angle = 0;
int minValue = 5000; // bigger than any sensor reading
int minPosition = 0;

void setup()
{
  servo.attach(servoPin);
  Serial.begin(9600);
}

// Sweep through all angles
void loop()
{
  Serial.print("At angle: ");
  Serial.println(angle);
  servo.write(angle);
  if (angle == 0)
  {
    delay(1000);
  }
  delay(100);
  int lightValue = analogRead(A1);
  Serial.print(lightValue);
  Serial.print(" ");
  if (lightValue < minValue) {
    minValue = lightValue;
    minPosition = angle;
  }

  angle = angle + 20;  

  // Display the best
  if (angle > 180)
  {
    Serial.print("Min light reading is ");
    Serial.print(minValue);
    Serial.print(" at position ");
    Serial.println(minPosition);
    servo.write(minPosition);
    delay(1000);
    angle = 0;
    minValue = 5000;
  }
}
