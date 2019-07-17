#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "Ciudad.h"

typedef struct nodoL
{
    Ciudad info;
    nodoL * sig;
} Nodo;

typedef Nodo * ListaHash;

void CrearLista (ListaHash &L);
void InsFrontListaHash(ListaHash &L, Ciudad c);
Boolean PerteneceLista(ListaHash L, String clave);
Ciudad DarCiudadLista(ListaHash L);
int ObtenerEnLista(ListaHash L, String clave);
void BorrarEnLista(ListaHash &L, String clave);
void DarNombreLista(ListaHash l, String &nombre);
#endif // LISTA_H_INCLUDED
