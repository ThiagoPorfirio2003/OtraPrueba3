/*
 ============================================================================
 Name        : TP1.c
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
	setbuf(stdout,NULL);
	int resultado;
	int numeroUno;
	int numeroDos;

	numeroUno = 5;
	numeroDos = 10;

	resultado= sumar(numeroUno,numeroDos);

	printf("\nResultado de la suma: %d", resultado);

	return EXIT_SUCCESS;
}

