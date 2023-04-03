// Tableau des broches des LED
int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // Initialisation des broches en sortie
  int i = 0;
  while (i < 8) {
    pinMode(leds[i], OUTPUT);
    i++;
  }
}

void loop() {
  // Faire clignoter chaque LED à tour de rôle
  int i = 0;
  while (i < 8) {
    digitalWrite(leds[i], HIGH); // Allumer la LED
    delay(250); // Attendre 250 ms
    digitalWrite(leds[i], LOW); // Éteindre la LED
    i++;
  }
}