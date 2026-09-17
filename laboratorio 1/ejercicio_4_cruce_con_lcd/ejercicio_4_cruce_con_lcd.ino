#include <LiquidCrystal.h>

// Semaforo vehicular.
const int ROJO_COCHE = 13;
const int AMARILLO_COCHE = 12;
const int VERDE_COCHE = 11;

// Semaforo peatonal.
const int ROJO_PEATON = 10;
const int VERDE_PEATON = 9;

// Pulsador de solicitud de cruce.
const int BOTON = 2;

// LCD vehicular: RS, E, D4, D5, D6, D7.
LiquidCrystal lcdCoches(3, 4, 5, 6, 7, 8);

// LCD peatonal: RS, E, D4, D5, D6, D7.
LiquidCrystal lcdPeatones(A0, A1, A2, A3, A4, A5);

void setup() {
  pinMode(ROJO_COCHE, OUTPUT);
  pinMode(AMARILLO_COCHE, OUTPUT);
  pinMode(VERDE_COCHE, OUTPUT);

  pinMode(ROJO_PEATON, OUTPUT);
  pinMode(VERDE_PEATON, OUTPUT);

  pinMode(BOTON, INPUT_PULLUP);

  lcdCoches.begin(16, 2);
  lcdPeatones.begin(16, 2);

  // Estado inicial: vehiculos avanzan y peatones esperan.
  digitalWrite(ROJO_COCHE, LOW);
  digitalWrite(AMARILLO_COCHE, LOW);
  digitalWrite(VERDE_COCHE, HIGH);
  digitalWrite(ROJO_PEATON, HIGH);
  digitalWrite(VERDE_PEATON, LOW);

  mostrarEstadoNormal();
  delay(500);

  // Evita procesar una pulsacion mantenida durante el arranque.
  while (digitalRead(BOTON) == LOW) {
  }
}

void loop() {
  // El pulsador usa logica activa en LOW por INPUT_PULLUP.
  if (digitalRead(BOTON) == LOW) {
    delay(50);

    // Confirma la pulsacion despues del rebote mecanico.
    if (digitalRead(BOTON) == LOW) {
      // Cambio de vehiculos a amarillo.
      digitalWrite(VERDE_COCHE, LOW);
      digitalWrite(AMARILLO_COCHE, HIGH);
      mostrarPrecaucion();
      delay(2000);

      // Cambio a rojo para vehiculos y verde para peatones.
      digitalWrite(AMARILLO_COCHE, LOW);
      digitalWrite(ROJO_COCHE, HIGH);
      digitalWrite(ROJO_PEATON, LOW);
      digitalWrite(VERDE_PEATON, HIGH);
      mostrarCruce();
      delay(5000);

      // Regreso al estado normal.
      digitalWrite(VERDE_PEATON, LOW);
      digitalWrite(ROJO_PEATON, HIGH);
      digitalWrite(ROJO_COCHE, LOW);
      digitalWrite(VERDE_COCHE, HIGH);
      mostrarEstadoNormal();

      // Espera a que se suelte el pulsador antes de aceptar otra solicitud.
      while (digitalRead(BOTON) == LOW) {
      }
      delay(50);
    }
  }
}

void mostrarEstadoNormal() {
  lcdCoches.clear();
  lcdCoches.setCursor(0, 0);
  lcdCoches.print("PUEDE AVANZAR");
  lcdCoches.setCursor(0, 1);
  lcdCoches.print("CON PRECAUCION");

  lcdPeatones.clear();
  lcdPeatones.setCursor(0, 0);
  lcdPeatones.print("NO CRUZAR");
  lcdPeatones.setCursor(0, 1);
  lcdPeatones.print("ESPERE");
}

void mostrarPrecaucion() {
  lcdCoches.clear();
  lcdCoches.setCursor(0, 0);
  lcdCoches.print("PRECAUCION");
  lcdCoches.setCursor(0, 1);
  lcdCoches.print("DETENGASE");

  lcdPeatones.clear();
  lcdPeatones.setCursor(0, 0);
  lcdPeatones.print("ESPERE");
  lcdPeatones.setCursor(0, 1);
  lcdPeatones.print("PROXIMO CAMBIO");
}

void mostrarCruce() {
  lcdCoches.clear();
  lcdCoches.setCursor(0, 0);
  lcdCoches.print("DETENGASE");
  lcdCoches.setCursor(0, 1);
  lcdCoches.print("PEATONES CRUZAN");

  lcdPeatones.clear();
  lcdPeatones.setCursor(0, 0);
  lcdPeatones.print("PUEDE CRUZAR");
  lcdPeatones.setCursor(0, 1);
  lcdPeatones.print("CON CUIDADO");
}
