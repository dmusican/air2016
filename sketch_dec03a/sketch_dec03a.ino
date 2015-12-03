void setup()
{
  pinMode(12, OUTPUT);
}


void loop()
{
  tone(12, analogRead(A5));

}
