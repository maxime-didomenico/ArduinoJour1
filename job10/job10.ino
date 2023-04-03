// Broche de la LED
int ledPin = 9;

void setup() {
  // Initialisation de la broche de la LED en sortie
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int brightness = 0; // Initialiser la luminosité à 0
  
  // Augmenter progressivement la luminosité de la LED
  while (brightness <= 255) {
    analogWrite(ledPin, brightness); // Définir la luminosité de la LED
    brightness++; // Augmenter la luminosité
    delay(10); // Attendre un court instant
  }
}