int switchState = 0;
void setup() {
  pinMode(3, OUTPUT); // green
  pinMode(4, OUTPUT); // red
  pinMode(2, INPUT);
}
void loop() {
  switchState = digitalRead(2);

if (switchState == HIGH) {
  digitalWrite (3, LOW);
  digitalWrite (4, HIGH);
}
else {
  digitalWrite (3, HIGH);
  digitalWrite (4, LOW);
  }
}
