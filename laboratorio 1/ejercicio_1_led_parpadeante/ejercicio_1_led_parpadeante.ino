// Ejercicio 1: parpadeo de un LED conectado al pin digital 13.

const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // Enciende el LED durante un segundo.
  digitalWrite(LED, HIGH);
  delay(1000);

  // Apaga el LED durante un segundo.
  digitalWrite(LED, LOW);
  delay(1000);
}
