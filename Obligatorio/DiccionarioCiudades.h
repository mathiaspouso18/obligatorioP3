#ifndef DICCIONARIOCIUDADES_H_INCLUDED
#define DICCIONARIOCIUDADES_H_INCLUDED
#include "Lista.h"

const int B = 10;
typedef Lista Hash[B];

void Crear (Hash &H);
Boolean Pertenece (Hash H, String clave);
void Insertar (Hash &H, String e);
int Obtener (Hash H, String clave);
void Eliminar (Hash &H, String clave);
int h(String clave);

#endif // DICCIONARIOCIUDADES_H_INCLUDED
