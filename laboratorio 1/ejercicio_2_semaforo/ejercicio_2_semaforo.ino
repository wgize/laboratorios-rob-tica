// Ejercicio 2: semaforo vehicular basico.

const int ROJO = 13;
const int AMARILLO = 12;
const int VERDE = 11;

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  // Rojo: detenerse.
  digitalWrite(ROJO, HIGH);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(VERDE, LOW);
  delay(5000);

  // Verde: avanzar.
  digitalWrite(ROJO, LOW);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(VERDE, HIGH);
  delay(5000);

  // Amarillo: avanzar con precaucion y prepararse para detenerse.
  digitalWrite(ROJO, LOW);
  digitalWrite(AMARILLO, HIGH);
  digitalWrite(VERDE, LOW);
  delay(2000);
}
