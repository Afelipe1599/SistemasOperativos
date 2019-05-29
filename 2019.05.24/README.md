# Practica en C clase - 1
## 

Se implementó un algortimo simple que imprime `hola mundo`. Posteriormente se generó y como se incluye dentro del algoritmo `basico.c`.

Los programas:

* [basico.c](basico.c)

* [libfun.c](libfun.c)

* [libfun.h](libfun.h)

Para compilar el programa se llevan a cabo los siguientes pasos:


* Generar la librería
```
gcc -c libfun.c -o libfun.o
ar rcs libfun.a libfun.o
```


* En el paso anterior se generó el archivo `libfun.a`.Ahora enlazaremos el programa `basico.c` con la librería `libfun.a`.

```
gcc basico.c -L. -lfun -o basico
```


* Por ultimo para correr el programa:
```
./basico
```

