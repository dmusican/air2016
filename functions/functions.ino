 // Look ma, no hands, writing my own functions!!! 
void blinkLED(int pinNumber, int temperature)
{
  //digitalWrite(pinNumber,HIGH);
  Serial.print("Use pin: ");
  Serial.println(pinNumber);
  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.println("Light on!");
  delay(1000);
  Serial.println("Light off!");
  delay(1000);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  blinkLED(12,71);
}
