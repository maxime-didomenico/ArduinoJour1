const int LED1 = 2; // Broche pour la LED 1
const int LED2 = 3; // Broche pour la LED 2

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH); // Allume la LED 1
  digitalWrite(LED2, HIGH); // Allume la LED 2
  delay(500); // Attendre 500ms
  
  digitalWrite(LED1, LOW); // Éteint la LED 1
  digitalWrite(LED2, LOW); // Éteint la LED 2
  delay(500); // Attendre 500ms
}