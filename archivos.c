#include "lib.h"

int verde1(int t){
	
        int *ret = &retorno;
        int *conta = &cont;	
        struct salidas semaforo;
        struct salidas *punt = &semaforo;
	

	system("cls");
	printf("Semáforo 1 en verde encendido por %d segundos. \n", t);
	Sleep(1);
	(*conta)++;
	//printf("cont: %d\n", cont);
	if(cont < (datos.tiempo_1V * 1000)){
		*ret = VERDE1;
	} else {
		*ret = AMARILLO;
		cont = 0;
	};
	
	punt->sem1v = 1;
        punt->sem1a = 0;
        punt->sem1r = 0;
        punt->sem2v = 0;
        punt->sem2a = 0;
        punt->sem2r = 1;
    
	return retorno;
};

int amarillo1(int t){

        int *conta = &cont;	
        int *memo = &mem;	
        int *ret = &retorno;
        struct salidas semaforo;
        struct salidas *punt = &semaforo;	
	
	system("cls");
	printf("Semáforo 1  en amarillo encendido por %d segundos. \n", t);
	Sleep(1);
	(*conta)++;
	//printf("cont: %d\n", cont);
    if(cont < (datos.tiempo_A * 1000)){
    	*ret = AMARILLO;
	} else {
	*conta=0;
	
	switch(mem){
		
		case 0: 
		         *ret = VERDE1;
		         *memo = 1;
		         break;
		
		case 1: 
		        *ret = ROJO;
		        *memo = 2;
		        break;
		
		case 2:
			*ret = VERDE2;
		        *memo = 3;
			break;
				
		case 3:
		        *ret = ROJO;
			*memo = 0;
			break;
				
		default: 
		        printf("Error\n");
			break; 
		
	            };
        };

	punt->sem1v = 0;
	punt->sem1a = 1;
	punt->sem1r = 0;
        punt->sem2v = 0;
        punt->sem2a = 0;
        punt->sem2r = 1;

	
	return retorno;
	
};

int rojo_seg(int t){

        int *conta = &cont;		
        int *ret = &retorno;
        struct salidas semaforo;
        struct salidas *punt = &semaforo;

	system("cls");
	printf("Semáforos en rojo por %d segundos.\n", t);
	Sleep(1);
	(*conta)++;
	//printf("cont: %d\n", cont);
	if(cont < (datos.tiempo_seguridad * 1000)){
		*ret = ROJO;
	} else {
		*ret = AMARILLO;
		*conta = 0;
	};
	
	punt->sem1v = 0;
        punt->sem1a = 0;
        punt->sem1r = 1;
	punt->sem2v = 0;
        punt->sem2a = 0;
        punt->sem2r = 1;


	return retorno;
	
};

int verde2(int t){
	
        int *conta = &cont;		
        int *ret = &retorno;
        struct salidas semaforo;
        struct salidas *punt = &semaforo;


	system("cls");
	printf("Semáforo 2 en verde encendido por %d segundos. \n", t);
	Sleep(1);
        (*conta)++;
	//printf("cont: %d\n", cont);
	if (cont < (datos.tiempo_2V * 1000)){
		*ret = VERDE2;
	} else {
		*ret = AMARILLO;
		*conta = 0;
	};
	
	punt->sem1v = 0;
        punt->sem1a = 0;
        punt->sem1r = 1;
        punt->sem2v = 1;
	punt->sem2a = 0;
        punt->sem2r = 0;

	return retorno;
};
