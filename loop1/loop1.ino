int beeperPin = 12;
int freq = 100;

void setup()
{
  pinMode(beeperPin,OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  // Play the tone three times
  for (int i=0; i < 3; i++) {
    tone(beeperPin,freq);
    delay(500);
    noTone(beeperPin);
    delay(500);
  }
  Serial.println(freq);
  freq = freq + 10;
  delay(10);
  if (freq == 600)
  {
    freq = 100;
  }
}
