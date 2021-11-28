#include "lib.h"

int main(){
	
	FILE *archivo;
	struct var config = {1, 30, 25, 5};
	//Colocar el tiempo en segundos.
	
	if((archivo = fopen("Datos.dat", "rb+")) == NULL){
		printf("El archivo no existe, puede crearse.\n");
		fclose(archivo);
		archivo = fopen("Datos.dat", "wb");
	};
	
	int a = fwrite(&config, sizeof(struct var), sizeof(struct var), archivo);
	if(a != sizeof(struct var)){
		printf("Error en escritura.\n");
	};
	
	fseek(archivo, 0L, 0);
	fread(&datos, sizeof(struct var), 4, archivo);
	
	fclose(archivo);
	
	/**	
	printf("%d\n%d\n%d\n%d\n", datos.tiempo_1V, datos.tiempo_2V,datos.tiempo_A,datos.tiempo_seguridad);
	*/
	
}
