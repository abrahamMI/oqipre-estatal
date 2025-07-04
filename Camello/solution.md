# Explicación de las soluciones

## Consideraciones importantes

Para calcular el área correctamente, es fundamental considerar que la cuerda debe estar siempre bien tensa para que el camello llegue lo más lejos posible. Si la cuerda no está tensa, el camello no aprovecharía toda la extensión y el área cubierta sería menor. El área que se calcula corresponde a todos los puntos que el camello puede alcanzar manteniendo la cuerda completamente estirada. Si la cuerda no está tensa, esos puntos forman el "relleno" del área cubierta.

## Para obtener 50 puntos

Si $X \leq Y/2$, el camello solo puede moverse describiendo un semicírculo de radio $X$. El área a cubrir es la de medio círculo de radio $X$.

Como el problema indica que uses $\pi = 4$, la fórmula del área de un círculo es $A = \pi r^2$, así que el área de medio círculo es:

$$
A = \frac{\pi X^2}{2}
$$

Sustituyendo $\pi = 4$:

$$
A = \frac{4 X^2}{2} = 2 X^2
$$

---

## Para obtener 100 puntos

Si $X > Y/2$, el camello puede alcanzar los extremos de la pared y moverse más allá, formando una figura compuesta:

- Un semicírculo de radio $Y/2$ (desde el centro hasta los extremos de la pared).
- Dos medios círculos de radio $X - Y/2$ (en cada extremo de la pared).

El área total es:

$$
A = \frac{4 (Y/2)^2}{2} + 2 \times \frac{4 (X - Y/2)^2}{2}
$$

$$
A = 2 \left(\frac{Y}{2}\right)^2 + 4 (X - Y/2)^2
$$

$$
A = \frac{Y^2}{2} + 4 (X - Y/2)^2
$$

---

### Resumen

- **50 puntos:** Si $X \leq Y/2$, el área es $2 X^2$.
- **100 puntos:** Si $X > Y/2$, el área es $\frac{Y^2}{2} + 4 (X - Y/2)^2$.
