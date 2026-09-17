# Laboratorios de Robotica

Repositorio de practicas del curso de Robotica.

## Estructura

- `laboratorio 1/`: ejercicios de control de luces, semaforos, cruce peatonal y pantallas LCD con Arduino.

## Laboratorio 1

El laboratorio introduce el control de salidas digitales y la coordinacion de un sistema de semaforos. Los ejercicios avanzan desde el parpadeo de un LED hasta un cruce peatonal activado por pulsador y mostrado en dos pantallas LCD.

### Ejercicios

| Ejercicio | Descripcion | Archivo |
| --- | --- | --- |
| 1 | Parpadeo de un LED cada segundo | `laboratorio 1/ejercicio_1_led_parpadeante/ejercicio_1_led_parpadeante.ino` |
| 2 | Semaforo vehicular basico | `laboratorio 1/ejercicio_2_semaforo/ejercicio_2_semaforo.ino` |
| 3 | Semaforo vehicular y peatonal sincronizado | `laboratorio 1/ejercicio_3_cruce_peatonal/ejercicio_3_cruce_peatonal.ino` |
| 4 | Cruce peatonal con pulsador y dos pantallas LCD | `laboratorio 1/ejercicio_4_cruce_con_lcd/ejercicio_4_cruce_con_lcd.ino` |

## Requisitos

- Arduino UNO o una placa compatible.
- Arduino IDE.
- Protoboard, cables y resistencias adecuadas para los LED.
- Para el ejercicio 4: un pulsador y dos pantallas LCD compatibles con la libreria `LiquidCrystal`.

## Uso

1. Abre el archivo `.ino` del ejercicio en Arduino IDE.
2. Selecciona la placa y el puerto de la tarjeta.
3. Revisa el diagrama de conexiones y los pines definidos al inicio del codigo.
4. Compila y carga el programa en la placa.

Cada ejercicio es independiente y debe cargarse por separado.
