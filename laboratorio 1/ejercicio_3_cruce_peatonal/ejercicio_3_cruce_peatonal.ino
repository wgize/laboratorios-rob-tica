// Ejercicio 3: semaforo vehicular y peatonal sincronizado.

const int ROJO_COCHE = 13;
const int AMARILLO_COCHE = 12;
const int VERDE_COCHE = 11;

const int ROJO_PEATON = 10;
const int VERDE_PEATON = 9;

void setup() {
  pinMode(ROJO_COCHE, OUTPUT);
  pinMode(AMARILLO_COCHE, OUTPUT);
  pinMode(VERDE_COCHE, OUTPUT);

  pinMode(ROJO_PEATON, OUTPUT);
  pinMode(VERDE_PEATON, OUTPUT);
}

void loop() {
  // Los vehiculos avanzan y los peatones esperan.
  digitalWrite(VERDE_COCHE, HIGH);
  digitalWrite(AMARILLO_COCHE, LOW);
  digitalWrite(ROJO_COCHE, LOW);
  digitalWrite(ROJO_PEATON, HIGH);
  digitalWrite(VERDE_PEATON, LOW);
  delay(5000);

  // Los vehiculos reciben la senal de precaucion.
  digitalWrite(VERDE_COCHE, LOW);
  digitalWrite(AMARILLO_COCHE, HIGH);
  digitalWrite(ROJO_PEATON, HIGH);
  digitalWrite(VERDE_PEATON, LOW);
  delay(2000);

  // Los vehiculos se detienen y los peatones pueden cruzar.
  digitalWrite(AMARILLO_COCHE, LOW);
  digitalWrite(ROJO_COCHE, HIGH);
  digitalWrite(ROJO_PEATON, LOW);
  digitalWrite(VERDE_PEATON, HIGH);
  delay(5000);
}
