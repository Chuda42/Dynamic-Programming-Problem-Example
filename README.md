# Dynamic-Programming-Problem-Example
Algoritmo para resolver el ejercicio 6.9 (Algorithm design, Jon Kleinberg, Eva Tardos)

## Archivos
El archivo implementado es sistema.cpp, los demas son las estructuras de datos proporcionadas por Fing, UdelaR.

## Descripcion del problema
Estamos ayudando a dirigir un
sistema de cómputo de alto desempeño, capaz de procesar varios terabytes de
datos por día, y queremos planificar el trabajo para los próximos n días. En
cada día i, 1 ≤ i ≤ n, nuestros clientes proporcionan xi terabytes de datos
para procesar. Por cada terabyte procesado recibimos una ganancia fija. Sin
embargo, como nuestro sistema tiene una capacidad de cómputo limitada,
no siempre es posible procesar todos los datos que se nos presentan; si en
un determinado día nos quedan datos sin procesar, esos datos caducan y se
inhabilitan al finalizar el día (no es posible trabajar sobre estos datos en el
futuro porque los resultados dejan de ser vigentes).
El procesamiento de los datos se realiza con un programa que no es del
todo confiable. En particular, debido a un incremento sostenido del consumo
de memoria del programa a medida que transcurre el tiempo, la cantidad
de datos que se pueden procesar disminuye con cada día que pasa desde la
última vez que el sistema fue reiniciado. En el primer día luego de que el
sistema ha sido reiniciado se pueden procesar s1 terabytes, en el segundo día
s2 terabytes y así hasta el n-ésimo día, donde se cumple s1 > s2 > ... > sn > 0.
Si reiniciamos el sistema en un determinado día este recobra su capacidad
máxima, pero durante ese día no es posible procesar datos.
El problema consiste en, dadas las cantidades de datos disponibles por día,
x1, x2, ..., xn, y el perfil de rendimiento del sistema, s1, s2, ..., sn, establecer los
días en los que se reiniciará el sistema de modo de maximizar la cantidad
total de datos procesados. Notar que en el día i solo hay disponibles para
procesar hasta xi terabytes de datos, que podría ser menor que la capacidad
del sistema en ese día. Asumimos que el sistema comienza el primer día en su
máxima capacidad, lo cual equivale a considerar que siempre se reinicia el
sistema en un día cero que antecede al período que estamos planificando.

## Correr el programa

Compilar:
```
make
```

Comenzar a ejecutar:
```
./principal
```

Comandos:
```
Fin
   Termina el programa
# comentario
   Imprime el resto de la línea.
leer_datos
   Lee la cantidad de datos que hay disponible cada dia para ser 
   procesados por el sistema.
leer_rendimiento
  Lee la capacidad de procesamiento del sistema para cada dia desde 
  su ultimo reinicio.
max_datos_procesados
  Ejecuta el algoritmo que retorna la cantidad maxima de datos que
  es posible procesar por el sistema.
planificacion_optima
  Ejecuta el algoritmo que retorna la planificacion que establece los
  de reinicio del sistema para maximizar la cantidad de datos procesados.

```
Correr test:
```
make testing
```
