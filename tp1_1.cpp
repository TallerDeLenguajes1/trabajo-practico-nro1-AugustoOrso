#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num = 5;
	int *p_num;

	p_num = &num;


	printf("el contenido del puntero: %d\n", *p_num);
	printf("direccion de memoria almacenada por el puntero: %d\n", p_num);
	printf("la direccion de memoria de la variable: %d\n", &num);
	printf("direccion de memoria del puntero: %d\n", &p_num);
	printf("el tamanio de memoria usado por la variable: %d\n", sizeof(num));

/*
	Se obtiene lo mismo debido a que el puntero almacena la direccion de memoria de la variable 
	En el punto 4 se obtiene la direccion de memoria en la que se guarda el puntero; por eso es diferente		
*/


}