#include "lib.h"

int main(){

	leer();
	int (*semaforo)(int);
	int *conta = &cont;
	*conta = 0;
	
	semaforo = &rojo_seg;
	(*semaforo)(datos.tiempo_seguridad);
	        
	while(1){
		
	 switch(retorno){
	 	
	 	case 1:
	 		
	 	semaforo = &rojo_seg;
	        (*semaforo)(datos.tiempo_seguridad);
	        
	        break;
	        
	    case 2:
	    	
	    	semaforo = &amarillo1;
	        (*semaforo)(datos.tiempo_A);
	        
	        break;
	       
	    case 3:
	 		
	 	semaforo = &verde1;
	        (*semaforo)(datos.tiempo_1V);

	        break;
	        
	    case 4:
	    	
	    	semaforo = &verde2;
	        (*semaforo)(datos.tiempo_2V);
			
		break;
	 	
	 };
	 
    };
    
    return 0;
    
}
