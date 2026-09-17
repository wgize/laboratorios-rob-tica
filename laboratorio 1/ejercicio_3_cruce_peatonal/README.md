# Ejercicio 3: Cruce peatonal

## Objetivo

Sincronizar un semaforo vehicular con un semaforo peatonal mediante salidas digitales.

## Componentes y conexiones

### Semaforo vehicular

- LED rojo en el pin 13.
- LED amarillo en el pin 12.
- LED verde en el pin 11.

### Semaforo peatonal

- LED rojo en el pin 10.
- LED verde en el pin 9.

Se debe usar una resistencia adecuada para cada LED.

## Funcionamiento

1. Los vehiculos avanzan durante 5 segundos y los peatones esperan.
2. Los vehiculos reciben la senal amarilla durante 2 segundos.
3. Los vehiculos se detienen y los peatones pueden cruzar durante 5 segundos.

El ciclo se repite continuamente. El codigo se encuentra en `ejercicio_3_cruce_peatonal.ino`.