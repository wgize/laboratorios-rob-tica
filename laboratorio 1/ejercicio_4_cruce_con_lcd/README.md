# Ejercicio 4: Cruce peatonal con LCD

## Objetivo

Controlar un cruce peatonal mediante un pulsador y mostrar el estado del sistema en dos pantallas LCD.

## Componentes y conexiones

### Semaforos

- LED rojo vehicular en el pin 13.
- LED amarillo vehicular en el pin 12.
- LED verde vehicular en el pin 11.
- LED rojo peatonal en el pin 10.
- LED verde peatonal en el pin 9.

### Pulsador

- Pulsador en el pin 2.
- Se utiliza `INPUT_PULLUP`, por lo que la pulsacion se detecta en nivel LOW.

### LCD vehicular

Conexiones en el orden `RS, E, D4, D5, D6, D7`: pines 3, 4, 5, 6, 7 y 8.

### LCD peatonal

Conexiones en el orden `RS, E, D4, D5, D6, D7`: pines A0, A1, A2, A3, A4 y A5.

## Funcionamiento

El estado inicial permite avanzar a los vehiculos y prohibe cruzar a los peatones. Al pulsar el boton:

1. El semaforo vehicular cambia a amarillo durante 2 segundos.
2. Los vehiculos reciben luz roja y los peatones luz verde durante 5 segundos.
3. El sistema regresa al estado inicial.

Las pantallas LCD muestran mensajes correspondientes a cada estado. El codigo se encuentra en `ejercicio_4_cruce_con_lcd.ino` y requiere la libreria `LiquidCrystal`.