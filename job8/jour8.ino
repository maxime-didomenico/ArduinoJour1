// LED 1 est connectée à la broche 12
int led1 = 12;

// LED 2 est connectée à la broche 13
int led2 = 13;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
}