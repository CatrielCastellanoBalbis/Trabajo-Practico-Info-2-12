#ifndef tiempos
#define tiempos

#include <stdio.h>
#include <string.h>

/*------------DECLARACIÓN DE VARIABLES-------------------------------------------

Poner los tiempos en milisegundos.

---------------------------------------------------------------------------------
*/

unsigned int tiempo_seguridad = 1000;
unsigned int tiempo_1V = 30000;
unsigned int tiempo_2V = 25000;
unsigned int tiempo_A = 5000;

int sem1v;
int sem1a;
int sem1r;
int sem2v;
int sem2a;
int sem2r;

#endif
