#ifndef lib
#define lib

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


struct var{
unsigned int tiempo_seguridad;
unsigned int tiempo_1V;
unsigned int tiempo_2V;
unsigned int tiempo_A;
};

struct var datos;

int verde1(int t);
int verde2(int t);
int amarillo1(int t);
int rojo_seg(int t);
void leer(void);

struct salidas{
   int sem1v;
   int sem1a;
   int sem1r;
   int sem2v;
   int sem2a;
   int sem2r;
};

struct otros{
int retorno;
int mem;
};


#endif
