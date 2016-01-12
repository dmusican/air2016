int x = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("hey there");

}

void loop() {
  x = x + 1;
  delay(100);
  Serial.println(x);
  if (x == 10) {
    x = 0;
  }

}
