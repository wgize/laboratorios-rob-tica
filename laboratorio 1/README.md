# Laboratorio 1

Practicas de control digital con Arduino. Los ejercicios avanzan desde el parpadeo de un LED hasta la coordinacion de un cruce peatonal con pulsador y pantallas LCD.

## Ejercicios

### Ejercicio 1: LED parpadeante

Controla un LED conectado al pin digital 13. El LED permanece encendido durante un segundo y apagado durante otro segundo.

Archivo: `ejercicio_1_led_parpadeante/ejercicio_1_led_parpadeante.ino`

### Ejercicio 2: Semaforo vehicular

Simula un semaforo con un LED rojo en el pin 13, uno amarillo en el pin 12 y uno verde en el pin 11. Las senales duran 5, 5 y 2 segundos, respectivamente.

Archivo: `ejercicio_2_semaforo/ejercicio_2_semaforo.ino`

### Ejercicio 3: Cruce peatonal

Sincroniza un semaforo vehicular con uno peatonal. Los LEDs vehiculares usan los pines 13, 12 y 11; los LEDs peatonales usan los pines 10 y 9.

El ciclo permite avanzar a los vehiculos durante 5 segundos, muestra precaucion durante 2 segundos y luego permite cruzar a los peatones durante 5 segundos.

Archivo: `ejercicio_3_cruce_peatonal/ejercicio_3_cruce_peatonal.ino`

### Ejercicio 4: Cruce peatonal con LCD

Agrega un pulsador en el pin 2 y dos pantallas LCD al cruce peatonal. La pantalla vehicular usa los pines 3, 4, 5, 6, 7 y 8; la pantalla peatonal usa A0, A1, A2, A3, A4 y A5.

El pulsador usa `INPUT_PULLUP`. Al detectarse una pulsacion, el sistema cambia a amarillo, detiene los vehiculos, permite cruzar a los peatones durante 5 segundos y muestra cada estado en las pantallas.

Archivo: `ejercicio_4_cruce_con_lcd/ejercicio_4_cruce_con_lcd.ino`

## Requisitos

- Arduino UNO o una placa compatible.
- Arduino IDE.
- Protoboard, cables y resistencias adecuadas para los LEDs.
- Para el ejercicio 4, un pulsador y dos pantallas LCD compatibles con la libreria `LiquidCrystal`.

## Uso

1. Abre el archivo `.ino` del ejercicio en Arduino IDE.
2. Selecciona la placa y el puerto correspondientes.
3. Realiza las conexiones indicadas en cada ejercicio.
4. Compila y carga el programa en la placa.

Cada ejercicio es independiente y debe cargarse por separado.
