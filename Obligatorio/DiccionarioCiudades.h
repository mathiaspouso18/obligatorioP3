#ifndef DICCIONARIOCIUDADES_H_INCLUDED
#define DICCIONARIOCIUDADES_H_INCLUDED
#include "ListaHash.h"

const int B = 5;
typedef ListaHash Diccionario[B];

void Make(Diccionario &d);
Boolean Member(Diccionario d, String clave);
//Precondición: La ciudad no pertenece al hash.
void InsertDiccionario(Diccionario &d, String n);
//Precondición: La ciudad pertenece al hash.
Ciudad Find(Diccionario d, String nombre);
int h(String clave);
void CargarDiccionarioCiudades(Diccionario &d);
void LiberarMemoriaDiccionario(Diccionario &d);
#endif // DICCIONARIOCIUDADES_H_INCLUDED
