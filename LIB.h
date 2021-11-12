#ifndef LIB
#define LIB

#include <stdio.h>
#include <string.h>

/*Este programa está pensado para ser utilizado en con un micro y un cristal de 16MHz, por lo que los tiempos deberían ser puestos
teniendo en cuenta que el micro tardará 1 segundo en hacer 16.000.000 de operaciones. Por lo que por ejemplo, los tiempos deberían
elegirse así:

1 seg = 1 x 16.000.000 = 16.000.000
2 seg = 2 x 16.000.000 = 32.000.000
3 seg = 3 x 16.000.000 = 48.000.000

y así...

NOTA: Esta conversión podría hacerla automáticamente con una función o usar una función propia del compilador para hacer un delay, lo dejo
así por el momento para consultar en clase.

*/
typedef struct{
	
	//definir tiempos del semáforo 1
	unsigned int verde;
	unsigned int amarillo;
	unsigned int rojo; 
	
}tiempos_sem1;

typedef struct{
	
	//definir tiempos del semáforo 2
	unsigned int verde;
	unsigned int amarillo;
	unsigned int rojo;
	
}tiempos_sem2;

typedef struct{
	
	//definir salidas de los semáforos
	int sem1v;
	int sem2v;
	int sem1a;
	int sem2a;
	int sem1r;
	int sem2r;
	
}salidas;


//Tiempo de seguridad
unsigned int t_seguridad;


#endif
