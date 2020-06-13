# Proyecto Final - POO II
## Integrantes
+ Renato Rodríguez Llanos
+ Frings Barrueta Aspajo
+ Eduardo Castro Quispe
+ Andres Riveros

## Requerimientos

### Dos tableros

-  Primer tablero
	- __Zona propia__. Sirve para colocar nuestra flota y registrar tiros del oponente.
- Segundo tablero
	- __Zona del oponente__. Sirve para identificar los tiros acertados y errados.

### Flota
#### Tipos de naves
- _Aircraft Carrier(A)_ 4 casillas
- _Battlecruiser(B)_ 3 casillas
- _Submarine(S)_ 2 casillas
- _Torpedo boat(T)_ 2 casilla

- Una flota está compuesta por:
	- 1 A
	- 2 B
	- 3 S
	- 4 T

### Archivos de comunicación
- __archivo.in__ : Da respuesta al servidor.
- __archivo.out__ : Lo usa el archivo para determinar los cambios internos y elegir la mejor estrategia para atacar.


## Estructura

![Arquitectura de Programa](https://github.com/renatoseb/BattleShip---POOII/blob/master/BattleShip%20Entities.png?raw=true)

### Primera entrega

- Class table_navi: Tabla para posicionar nuestras naves y marcar los tiros del oponente.
	- La tabla debe estar compuesta de naves.
	- Es preferible utilizar composición para la class table_navi.
- Classes navis: De preferencias polimorfica que solo cambie el largo de la nave.
	- _Aircraft Carrier(A)_ 4 casillas
	- _Battlecruiser(B)_ 3 casillas
	- _Submarine(S)_ 2 casillas
	- _Torpedo boat(T)_ 2 casilla


### Segunda entrega
- Class table_enemy: Tabla para marcar tiros errados y acertados

## Primera entrega
- Terminar la etapa de posicionamiento de naves.
