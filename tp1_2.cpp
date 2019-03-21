#include <stdio.h>
#include <stdlib.h>

int Cuadrado(int a);
void Cuadrado2(int a);
void mostrarCaracteristicas(int a);
void invertir(int *a, int *b);
void ordenar(int *a, int *b);

void main()
{

	int num1;
	int num2;
	int cuad;
	int cant;
	int x, y, i;

	printf("Ingrese un numero 'a':");
	scanf("%d", &num1);

	printf("Ingrese un numero 'b':");
	scanf("%d", &num2);


	cuad = Cuadrado(num1);
	printf("El cuadrado del numero 'a'(usando una funcion con retorno) es: %d\n", cuad);

	Cuadrado2(num1);

	mostrarCaracteristicas(num1);

	invertir(&num1, &num2);

	ordenar(&num1, &num2);

	printf("Ingrese la cantidad de pares de numeros a ordenar:");
	scanf("%d", &cant);

	i = 0;
	while( i<cant){

		printf("Ingrese el primer numero:");
		scanf("%d", &x);
		printf("Ingrese el segundo numero:");
		scanf("%d", &y);

		ordenar(&x, &y);
		i++;
	}
	
}

int Cuadrado(int a){
	
	int cuadrado;

	cuadrado = a*a;

	return cuadrado;
}

void Cuadrado2(int a){

	int cuadrado;

	cuadrado = a*a;

	printf("El cuadrado del numero 'a'(usando una funcion tipo void) es: %d\n", cuadrado);

}

void mostrarCaracteristicas(int a){

	int *p_pos;
	p_pos = &a;

	printf("Direccion: %p\n", p_pos);
	printf("Contenido: %d\n", *p_pos);

}

void invertir(int *a, int *b){

	int aux;
	aux = *a;
	*a = *b;
	*b = aux;

	printf("El nuevo valor de 'a' es: %d y el nuevo valor de 'b' es: %d\n", *a, *b);
}

void ordenar(int *a, int *b){

	int aux;

	if (*a > *b)
		{
			aux = *a;
			*a = *b;
			*b = aux;
		}	

	printf("Los valores ordenados de menor a mayor son %d y %d\n", *a, *b);	
}




