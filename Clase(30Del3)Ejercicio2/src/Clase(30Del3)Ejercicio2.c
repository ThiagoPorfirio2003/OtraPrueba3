/*
 ============================================================================
 Name        : Clase(30Del3)Ejercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calcular.h"

int main(void) {
	float a;
	float b;
	float resultado;

	a= 3.14;
	b =5.5;

	resultado = sumar(a,b);
	/*
	 do{
	 	 Codigo codigo
	 }while(Condicion);
	 Se repite lo del do hasta que se cumpla la condicion
	 */
	printf("Resultado es: %f", resultado);
}
