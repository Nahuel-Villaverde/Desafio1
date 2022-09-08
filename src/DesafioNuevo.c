/*
 ============================================================================
Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"



int main() {

	setbuf(stdout, NULL);
    int opcion = 0;
    int flag = 0;
    int flag2 = 0;
    int confirmacion;

    while(opcion != 4)
    {
    	opcion = menu();

    	switch(opcion)
    	{
    	case 1:
    		iniciar();
    		flag = 1;
    		break;
    	case 2:
    		if(flag == 1)
    		{
    			procesar();
    			flag2 = 1;
    		}
    		else
    		{
    			printf("Debe Iniciar antes de Procesar");
    		}
    		break;
    	case 3:
    		if(flag == 1)
    		{
    			finalizar();
    		}
    		else
    		{
    		    printf("Debe Iniciar antes de Finalizar");
    		}

    		if(flag2 == 1)
    		{
    			finalizar();
    		}
    		    else
    		{
    		    printf("Debe Procesar antes de Finalizar");
    		}
    		break;
    	case 4:
    		confirmacion = salir();
    		if(confirmacion == 's')
    		{
    			opcion = 4;
    		}
    		else
    		{
    			opcion = 0;
    		}
    		break;
    	default:
    		printf("numero invalido");
    		break;

    	}
    }
}

