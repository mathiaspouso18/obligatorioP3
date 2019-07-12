#ifndef DICCIONARIOCIUDADES_H_INCLUDED
#define DICCIONARIOCIUDADES_H_INCLUDED
#include "ListaHash.h"

const int B = 10;
typedef Lista Diccionario[B];

void Make(Diccionario &d);
Boolean Member(Diccionario d, String clave);
void Insert(Diccionario &d, String n);
Ciudad Find(Diccionario d, String nombre);
int h(String clave);

#endif // DICCIONARIOCIUDADES_H_INCLUDED
