# Descripción

Los estacionamientos de camellos egipcios consisten en una pared de tamaño $Y$, a la mitad tiene una cuerda de tamaño $X$. Tanto la pared como la cuerda solo tienen una dimensión. Del otro lado de la cuerda se pone el camello. El camello se considera como un punto, o sea que no tiene dimensiones. Aquí hay una imagen por si no quedó muy claro:

![Imagen](Imagen.png)

Tu trabajo como constructor de estacionamientos de camellos y pirámides consiste en calcular el área del techo que tendrás que construir para que al camello no le dé el Sol.

Los egipcios no eran tan buenos como los aztecas para las matemáticas, así que calcularon que el valor de $π=4$ (por eso sus pirámides tenían cuatro lados). Si consideras que debes usar ese número para calcular tu solución, deberás usar ese valor.

# Entrada

Los números $X$ y $Y$ representando las dimensiones de la cuerda y la pared respectivamente. $X$ y $Y$ son números pares porque a los egipcios no les gustan los impares.

------------------------

# Salida

El área del techo que tendrás que construir para que el camello no sufra tanto del calor del desierto, usando el $π$ egipcio si crees que debes usarlo.

------------------------

# Ejemplo

||input
2 6
||output
8
||input
16 100
||output
512
||end

----------

# Límites

* Para el 50% de los casos $ X \le Y/2 $
* Para el resto de los casos $ X \le Y $
* $X,Y \le 1000$

