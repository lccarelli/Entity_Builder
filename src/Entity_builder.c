/*
 ============================================================================
 Name        : Entity_builder.c
 Author      : lau
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include "utn.h"
#include "Menu.h"



int main(void) {

	int select;
	Funciones funciones[5];

	if(funciones_init(funciones, 5) == 0) {

		do {
				menu_main(&select);

						switch(select){

						case SETTERS:

							funciones_escribirSetters(funciones, 5);

							break;

						case GETTERS:

							funciones_escribirGetters(funciones, 5);

							break;
						}

				} while(!(select == EXIT));

	}

	return EXIT_SUCCESS;
}

