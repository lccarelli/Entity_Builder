#ifndef FUNCIONES_H_
#define FUNCIONES_H_

struct {
	char* name;
	int integer;
	int flotante;
	int cadena;
	char* entity;
}typedef Funciones;


int funciones_init(Funciones* list, int len);
void funciones_getterCharsProperties(char* name, char* entity);
void funciones_getterIntProperties(char* name, char* entity);
void funciones_getterFloatProperties(char* name, char* entity);

void funciones_setterCharsProperties(char* name, char* entity);
void funciones_setterIntProperties(char* name, char* entity);
void funciones_setterFloatProperties(char* name, char* entity);

void funciones_escribirGetters(Funciones* list, int len);
void funciones_escribirSetters(Funciones* list, int len);

#endif /* FUNCIONES_H_ */
