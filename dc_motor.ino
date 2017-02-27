int power = 0;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  int reading = analogRead(A0);
  power = map(reading, 0,1023,0,255);
  analogWrite(9, power);

  Serial.print("Power: ");
  Serial.println(power);
}
