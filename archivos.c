#include "lib.h"

int main(){

int verde1(int t){
	int cont;
	system("cls");
	printf("Semáforo 1 en verde encendido por %d segundos. \n", t);
	Sleep(1);
	cont++;
	if(cont < (datos.tiempo_1V * 1000)){
		retorno = 1;
	} else {
		retorno = 2;
		cont = 0;
	};
	
	int sem1v = 1;
    int sem1a = 0;
    int sem1r = 0;
    int sem2v = 0;
    int sem2a = 0;
    int sem2r = 1;
    
	return retorno;
};

int amarillo1(int t){
	int cont;
	system("cls");
	printf("Semáforo 1  en amarillo encendido por %d segundos. \n", t);
	Sleep(1);
	cont++;
    
    if(cont < (datos.tiempo_A * 1000)){
    	retorno = 2;
	} else {
	cont=0;
    if(mem == 0){
    	retorno = 3; //Enciende el verde2
    	mem = 1;
	} else if (mem == 1){
		retorno = 1; //Enciende el rojo
		mem = 2;
	} else if (mem == 2){
		retorno = 4; //Enciende el verde2
		mem = 3;
	} else if (mem == 3){
		retorno = 1; //Enciende el verde1
		mem = 0;
	}
	};
	
	int sem1v = 0;
    int sem1a = 1;
    int sem1r = 0;
    int sem2v = 0;
    int sem2a = 0;
    int sem2r = 1;

	
	return retorno;
	
};

int rojo_seg(int t){
	int cont;
	system("cls");
	printf("Semáforos en rojo por %d segundos.\n", t);
	Sleep(1);
	cont++;
	if(cont < (datos.tiempo_seguridad * 1000)){
		retorno = 1;
	} else {
		retorno = 2;
		cont = 0;
	};
	
	int sem1v = 0;
    int sem1a = 0;
    int sem1r = 1;
    int sem2v = 0;
    int sem2a = 0;
    int sem2r = 1;


	return retorno;
	
};

int verde2(int t){
	int cont;
	system("cls");
	printf("Semáforo 2 en verde encendido por %d segundos. \n", t);
	Sleep(1);
	cont++;
	if (cont < (datos.tiempo_2V * 1000)){
		retorno = 4;
	} else {
		retorno = 2;
		cont = 0;
	}
	
	int sem1v = 0;
    int sem1a = 0;
    int sem1r = 1;
    int sem2v = 1;
    int sem2a = 0;
    int sem2r = 0;

	return retorno;
};

};
