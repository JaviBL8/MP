Barquitos: Se podría añadir un método para jugar de forma interactiva multiplicando el elemento del vector que deseemos por -1. Yo no lo he añadido porque no se me pide.

BigInt: He supuesto que como el número se guarda a la inversa la suma se guardará igual, en el caso de querer el resultado de la suma de forma normal habría que cambiar sólo un bucle para que fuese desde 0 a n en luegar de n a 0. Tengo problemas con la función srand(time(0), en teoría debería generar siempre números aleatorios pero no lo hace. 

Lista: Con la representación que se nos da es imposible realizar el programa ya que estamos accediendo a un objeto privado desde otra clase. La solución sería declarar las clases friends, o cambiar la estructura de Celda; como la primera opción nos está totalmente prohibida usar, he optado por declarar la clase Celda como un struct tal y como aparece en el ejercicio 3 del Examen de Septiembre de 2005. 

Menú: En este ejercicio he supuesto que el máximo tamaño que se le puede dar a una opción es 20.
