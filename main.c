#include "LIB.h"

int main(){
	
	while(1){
		
		/*NOTA: Cada cambio de estado de los semáforos irá en otra librería con una función y en el main.c sólo irá la cabecera, algo como:
		  Semáforo1(verde);
		  Semáforo2(rojo);
		  ...
		  Semáforo1(amarillo);
		  Semáforo2(rojo);
		  ...
		  Semáforo1(rojo);
		  Semáforo2(verde);
		*/
		
		for(int x = 0; x < t_seguridad; x++){
		};
		
		salidas.sem1r = 1;
		salidas.sem1a = 0;
		salidas.sem1v = 0;
		
		salidas.sem2r = 1;
		salidas.sem2a = 0;
		salidas.sem2v = 0;
		
		for(int x = 0; x < tiempos_sem1.rojo; x++){
		};
		
		
		salidas.sem1r = 0;
		salidas.sem1a = 0;
		salidas.sem1v = 1;
		
		salidas.sem2r = 1:
		salidas.sem2a = 0;
		salidas.sem2v = 0;
		
		for(x = 0; x < tiempos_sem1.verde; x++){
		};
		
		salidas.sem1r = 0;
		salidas.sem1a = 1;
		salidas.sem1v = 0;
		
		salidas.sem2r = 1:
		salidas.sem2a = 0;
		salidas.sem2v = 0;
		
		for(x = 0; x < tiempos_sem1.amarillo; x++){
		};
		
		salidas.sem1r = 1;
		salidas.sem1a = 0;
		salidas.sem1v = 0;
		
		salidas.sem2r = 0:
		salidas.sem2a = 1;
		salidas.sem2v = 0;
		
		for(x = 0; x < tiempos_sem2.amarillo; x++){
		}
		
		salidas.sem1r = 1;
		salidas.sem1a = 0;
		salidas.sem1v = 0;
		
		salidas.sem2r = 0:
		salidas.sem2a = 0;
		salidas.sem2v = 1;
		
		for(x = 0; x < tiempos_sem2.verde; x++){
		};
		
		salidas.sem1r = 1;
		salidas.sem1a = 0;
		salidas.sem1v = 0;
		
		salidas.sem2r = 0:
		salidas.sem2a = 1;
		salidas.sem2v = 0;
		
		for(x = 0; x < tiempos_sem2.amarillo; x++){
		}
		
		salidas.sem1r = 1;
		salidas.sem1a = 0;
		salidas.sem1v = 0;
		
		salidas.sem2r = 1:
		salidas.sem2a = 0;
		salidas.sem2v = 0;
		
	}; return 1;
	
} return 0;
