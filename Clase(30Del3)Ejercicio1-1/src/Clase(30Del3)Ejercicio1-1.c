/*
 ============================================================================
 Name        : Clase(30Del3)Ejercicio1-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numero;
//	char nombre[20]="Juan";

	numero = 3;

	printf("Porfavor ingrese su edad: ");
	scanf("%d",&numero);
	printf("Su edad es: %d\n",numero);
//	fflush(stdin);  _fpurge(stdin)
	system("Pause");

	return EXIT_SUCCESS;
}

