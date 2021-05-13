#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"
#include "Funciones.h"


int funciones_init(Funciones* list, int len){
	int result = ERROR;
	Funciones auxList[5] =
	{
			{"id",1,0,0,"Producto"},
			{"name",0,0,1,"Producto"},
			{"lastname",0,0,1,"Producto"},
			{"precio",0,1,0,"Producto"},
			{"cantidad",1,0,0,"Producto"}
	};

	if(5 <= len){
		for(int i=0; i<10; i++){
			list[i] = auxList[i];
		}
		result = OK;
	}
	return result;
}

void funciones_escribirGetters(Funciones* list, int len){

	if(list!=NULL && len>0){
		for(int i=0; i<len; i++){
			if(list[i].integer){
				funciones_getterIntProperties(list[i].name, list[i].entity);
			}
			if(list[i].cadena){
				funciones_getterCharsProperties(list[i].name, list[i].entity);
			}
			if(list[i].flotante){
				funciones_getterFloatProperties(list[i].name, list[i].entity);
			}
		}
	}
}

void funciones_escribirSetters(Funciones* list, int len){

	if(list!=NULL && len>0){
		for(int i=0; i<len; i++){
			if(list[i].integer){
				funciones_setterIntProperties(list[i].name, list[i].entity);
			}
			if(list[i].cadena){
				funciones_setterCharsProperties(list[i].name, list[i].entity);
			}
			if(list[i].flotante){
				funciones_setterFloatProperties(list[i].name, list[i].entity);
			}
		}
	}
}


void funciones_getterCharsProperties(char* name, char* entity){
	char entitylwr[21];
	char funcion[21];
	strncpy(entitylwr, entity, sizeof(entitylwr));
	strlwr(entitylwr);
	strncpy(funcion, name, sizeof(funcion));
	funcion[0]=toupper(funcion[0]);

	printf("\nchar* %s_get%s(%s* this, int* flagError){", entitylwr, funcion, entity);
	printf("\n\t*flagError = -1;");
	printf("\n\tchar* aux%s= NULL", funcion);
	printf("\n\tif(this != NULL && flagError != NULL ){");
	printf("\n\t\taux%s = this->%s", funcion, name);
	printf("\n\t\t*flagError = 0;");
	printf("\n\t}");
	printf("\n\treturn aux%s", funcion);
	printf("\n}");
}

void funciones_getterIntProperties(char* name, char* entity){
	char entitylwr[21];
	char funcion[21];
	strncpy(entitylwr, entity, sizeof(entitylwr));
	strlwr(entitylwr);
	strncpy(funcion, name, sizeof(funcion));
	funcion[0]=toupper(funcion[0]);

	printf("\nint %s_get%s(%s* this, int* flagError){", entitylwr, funcion, entity);
	printf("\n\t*flagError = -1;");
	printf("\n\tint aux%s = -1;", funcion);
	printf("\n\tif(this != NULL && flagError != NULL ){");
	printf("\n\t\taux%s = this->%s", funcion, name);
	printf("\n\t\t*flagError = 0;");
	printf("\n\t}");
	printf("\n\treturn aux%s", funcion);
	printf("\n}");
}

void funciones_getterFloatProperties(char* name, char* entity){
	char entitylwr[21];
	char funcion[21];
	strncpy(entitylwr, entity, sizeof(entitylwr));
	strlwr(entitylwr);
	strncpy(funcion, name, sizeof(funcion));
	funcion[0]=toupper(funcion[0]);

	printf("\nfloat %s_get%s(%s* this, int* flagError){", entitylwr, funcion, entity);
	printf("\n\t*flagError = -1;");
	printf("\n\tfloat aux%s = -1;", funcion);
	printf("\n\tif(this != NULL && flagError != NULL ){");
	printf("\n\t\taux%s = this->%s", funcion, name);
	printf("\n\t\t*flagError = 0;");
	printf("\n\t}");
	printf("\n\treturn aux%s", funcion);
	printf("\n}");
}

void funciones_setterCharsProperties(char* name, char* entity){
	char entitylwr[21];
	char funcion[21];
	strncpy(entitylwr, entity, sizeof(entitylwr));
	strlwr(entitylwr);
	strncpy(funcion, name, sizeof(funcion));
	funcion[0]=toupper(funcion[0]);

	printf("\nint %s_set%s(%s* this, char* %s){", entitylwr, funcion, entity, name);
	printf("\n\tint retorno = -1;");
	printf("\n\tchar* aux%s= NULL", funcion);
	printf("\n\tif(this != NULL && %s != NULL ){", name);
	printf("\n\tstrcpy(this->%s, %s);", name, name);
	printf("\n\t\tretorno = 0;");
	printf("\n\t}");
	printf("\n\treturn retorno");
	printf("\n}");
}

void funciones_setterIntProperties(char* name, char* entity){
	char entitylwr[21];
	char funcion[21];
	strncpy(entitylwr, entity, sizeof(entitylwr));
	strlwr(entitylwr);
	strncpy(funcion, name, sizeof(funcion));
	funcion[0]=toupper(funcion[0]);

	printf("\nint %s_set%s(%s* this, int %s){", entitylwr, funcion, entity, name);
	printf("\n\tint retorno = -1;");
	printf("\n\tif(this != NULL ){");
	printf("\n\t\tthis->%s = %s;", name, name);
	printf("\n\t\tretorno = 0;");
	printf("\n\t}");
	printf("\n\treturn retorno");
	printf("\n}");
}

void funciones_setterFloatProperties(char* name, char* entity){
	char entitylwr[21];
	char funcion[21];
	strncpy(entitylwr, entity, sizeof(entitylwr));
	strlwr(entitylwr);
	strncpy(funcion, name, sizeof(funcion));
	funcion[0]=toupper(funcion[0]);

	printf("\nint %s_set%s(%s* this, float %s){", entitylwr, funcion, entity, name);
	printf("\n\tint retorno = -1;");
	printf("\n\tif(this != NULL ){");
	printf("\n\t\tthis->%s = %s;", name, name);
	printf("\n\t\tretorno = 0;");
	printf("\n\t}");
	printf("\n\treturn retorno");
	printf("\n}");
}







