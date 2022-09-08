
/*
 * Biblioteca.c
 *
 *  Created on: 8 sept 2022
 *      Author: Nahuel
 */
#include <stdio.h>
#include <stdlib.h>


int menu()
{
	int eleccion;
	printf("Que opcion desea realizar? \n 1-Iniciar \n 2-Procesar \n 3-Finalizar \n 4-Salir \n ");
	scanf("%d",&eleccion);
	return eleccion;
}
void iniciar()
{
	printf("Se Inició exitosamente \n");
}
void procesar()
{
	printf("Se Procesó exitosamente \n");
}
void finalizar()
{
	printf("Se Finalizó exitosamente \n");
}
int salir()
{
	char confirmacion;

	printf("Seguro que desea salir? ('s' para si y 'n' para no)");
	fflush(stdin);
	scanf("%c",&confirmacion);

	while(confirmacion != 's' && confirmacion != 'n')
	{
		printf("Caracter invalido, seguro que desea salir? ('s' para si y 'n' para no)");
		fflush(stdin);
		scanf("%c",&confirmacion);
	}
	return confirmacion;
}
