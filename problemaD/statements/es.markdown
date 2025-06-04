# Descripción

A comenzado la increible carrera a saltos de los animales, donde los mejores saltadores se reunen para poder ganar el gran premio. En esta carrera tenemos a varios animales capaces de saltar grandes cantidades de metros, como el canjuro y conejo, pero tambien animales con saltos mas rapidos como la rana.

A cada competidor de la carrera se le data un color, el cual dejara marcado el camino recorrido. Si todos los competidores caen en la misma casilla se considera una casilla *rainbow*. En estas casillas se da mucha accion ya que puedes ver a todos los competidores, por eso quieres tener el asiento frente a la primer casilla *rainbow* que se encuentre en el camino.

Dado el numero de competidores $N$, y el tamaño de salto de cada uno de ellos $S_i$, debes determinar el numero de la primer casilla *rainbow* que se encontrara en el camino.

![carrera](carrera.png)

------------------------

# Entrada

Un numero $N$ indicando el numero de competidores, seguido de $N$ numeros $S_i$ indicando el tamaño de salto de cada uno de ellos.

------------------------

# Salida

Un numero entero indicando el numero de la primer casilla *rainbow* que se encontrara en el camino. Se asegura que siempre existe una casilla *rainbow*.

------------------------

# Ejemplo

||input
2
3 5
||output
15
||input
3
2 3 6
||output
6
||description
Como se ve en la imagen el canguro salta de 3 en 3 y marca la casilla 6 al segundo salto.
EL mapache salta de dos en dos y marca la casilla 6 al tercer salto.
El tlacuache salta de 6 en 6 y marca la casilla 6 al primer salto. 

----------

# Límites

### Para 15% de los casos

* $N = 2$
* $1 \le S_i \le 20$

### Para 15% de los casos

* $N = 2$
* $1 \le S_i \le 1000$

### Para 30% de los casos

* $N = 3$
* $1 \le S_i \le 1000$

### Para 40% de los casos

* $N = 5$
* $1 \le S_i \le 1000$
* Muy pocos animales se inscribieron este año :(
