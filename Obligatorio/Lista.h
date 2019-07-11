#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "String.h"

typedef struct nodoL
{
    String info;
    nodoL * sig;
} Nodo;

typedef Nodo * Lista;

void CrearLista (Lista &L);
void Insfront(Lista &L, String s);
Boolean PerteneceLista(Lista L, String clave);
String DarInfoLista(Lista L);
int ObtenerEnLista(Lista L, String clave);
void BorrarEnLista(Lista &L, String clave);
#endif // LISTA_H_INCLUDED
