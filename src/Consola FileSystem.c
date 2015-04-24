/*
 ============================================================================
 Name        : Consola.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<commons/string.h>

int main(void) {



	int opc = 0;

	do{


	system("clear");
	printf("MENU DE OPCIONES CONSOLA DE FILESYSTEM\n\n");
	printf("1-Formatear el MDFS\n");
	printf("2-Eliminar/Renombrar/Mover archivos\n");
	printf("3-Crear/Eliminar/Renombrar/Mover directorios\n");
	printf("4-Copiar un archivo local al MDFS\n");
	printf("5-Copiar un archivo del MDFS al filesystem local\n");
	printf("6-Solicitar el MD5 de un archivo en MDFS\n");
	printf("7-Ver/Borrar/Copiar los bloques que componen un archivo\n");
	printf("8-Agregar un nodo de datos\n");
	printf("9-Eliminar un nodo de datos\n");
	printf("10-Salir\n\n");
	printf("Por favor, ingrese una opción: ");
	scanf("%d",&opc);

	switch(opc){

	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		system("clear\necho \"Ingrese el directorio del archivo\"\nread DIR\nopenssl dgst -md5 -hex $DIR");
		system("pause");

		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;


	}

	} while(opc != 10);


return 0;
}
