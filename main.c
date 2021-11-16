#include "lib.h"

int main(){
	
	void (*semaforo)(int);
	
	while(1){
		
	 semaforo = &rojo_seg;
	 (*semaforo)(tiempo_seguridad);
	 
	 semaforo = &amarillo1;
	 (*semaforo)(tiempo_A);
	 
	 semaforo = &verde1;
	 (*semaforo)(tiempo_1V);
	 
	 semaforo = &amarillo1;
	 (*semaforo)(tiempo_A);
	 
     semaforo = &rojo_seg;
	 (*semaforo)(tiempo_seguridad);
	 
	 semaforo = &amarillo2;
	 (*semaforo)(tiempo_A);
	 
	 semaforo = &verde2;
	 (*semaforo)(tiempo_2V);
	 
	 semaforo = &amarillo2;
	 (*semaforo)(tiempo_A);
	 
	 
	 
    };
    
    return 0;
    
}
