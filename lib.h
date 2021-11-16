#ifndef lib
#define lib

#include <windows.h>
#include "tiempos.h"

void verde1(int t){
	printf("Semáforo 1 en verde encendido por %d segundos. \n", t/1000);
	Sleep(t);
	
	int sem1v = 1;
    int sem1a = 0;
    int sem1r = 0;
    int sem2v = 0;
    int sem2a = 0;
    int sem2r = 1;

	
};

void amarillo1(int t){
	printf("Semáforo 1  en amarillo encendido por %d segundos. \n", t/1000);
	Sleep(t);
	
	int sem1v = 0;
    int sem1a = 1;
    int sem1r = 0;
    int sem2v = 0;
    int sem2a = 0;
    int sem2r = 1;

	
};

void rojo_seg(int t){
	printf("Ambos en rojo por %d segundos. \n", t/1000);
	Sleep(t);
	
	int sem1v = 0;
    int sem1a = 0;
    int sem1r = 1;
    int sem2v = 0;
    int sem2a = 0;
    int sem2r = 1;

	
};

void verde2(int t){
	printf("Semáforo 2 en verde encendido por %d segundos. \n", t/1000);
	Sleep(t);
	
	int sem1v = 0;
    int sem1a = 0;
    int sem1r = 1;
    int sem2v = 1;
    int sem2a = 0;
    int sem2r = 0;

	
};

void amarillo2(int t){
	printf("Semáforo 2  en amarillo encendido por %d segundos. \n", t/1000);
	Sleep(t);
	
	int sem1v = 0;
    int sem1a = 1;
    int sem1r = 0;
    int sem2v = 0;
    int sem2a = 0;
    int sem2r = 1;

	
};

#endif
