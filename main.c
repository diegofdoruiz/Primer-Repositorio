/*
 * main.c
 *
 *  Created on: 22/03/2017
 *      Author: invitado
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "util.h"

int main(int argc, char ** argv) {

	struct stat info; //permite obtener informacion de un archivo
	if(stat(argv[1], &info)!=-1){	 // preguntamos por el estado del archivo con el nombre ingresado, falla si es -1

		printf("El tamaño es de %d bytes\n",(unsigned int)info.st_size);
		//return ((unsigned int)info.st_size); // retornamos el valor
	}else{
		return 0;
	}

}
