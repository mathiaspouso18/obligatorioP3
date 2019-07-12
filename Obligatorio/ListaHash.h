#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "Ciudad.h"

typedef struct nodoL
{
    Ciudad info;
    nodoL * sig;
} Nodo;

typedef Nodo * Lista;

void CrearLista (Lista &L);
void InsFrontLista(Lista &L, Ciudad c);
Boolean PerteneceLista(Lista L, String clave);
Ciudad DarCiudadLista(Lista L);
int ObtenerEnLista(Lista L, String clave);
void BorrarEnLista(Lista &L, String clave);
void DarNombreLista(Lista l, String &nombre);
#endif // LISTA_H_INCLUDED
