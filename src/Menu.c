#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "Menu.h"
#include "utn.h"

void menu_main(int* select){

	printf("\nMenu:"
			"\n\t1). GETTERS"
			"\n\t2). SETTERS"
			"\n\t0). salir\n");
	utn_getNumero(select, "\nIngrese su seleccion -> ", "\nERROR -> Debe ser una de las opciones", 0, 4, 3);
}
