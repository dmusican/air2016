#include <Servo.h>

Servo servo;
int servoPin = 45;

void setup()
{
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop()
{
  int minValue = 5000; // bigger than any sensor reading
  int minPosition = 0;
  
  // Sweep through all angles
  for (int angle=0; angle <= 180; angle=angle+20)
  {
    servo.write(angle);
    delay(100);
    int lightValue = analogRead(A1);
    Serial.print(lightValue);
    Serial.print(" ");
    if (lightValue < minValue) {
      minValue = lightValue;
      minPosition = angle;
    }
  }

  // Display the best
  Serial.print("Min light reading is ");
  Serial.print(minValue);
  Serial.print(" at position ");
  Serial.println(minPosition);
  servo.write(minPosition);
  delay(1000);
  
  
}
