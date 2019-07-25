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
////Precondici�n: El elemento no existe previamente
void InsFrontListaHash(ListaHash &L, Ciudad c);
Boolean PerteneceLista(ListaHash L, String clave);
////Precondici�n: El elemento existo previamente en la lista
Ciudad DarCiudadLista(ListaHash L);
////Precondici�n: El elemento existo previamente en la lista
void DarNombreLista(ListaHash l, String &nombre);
void LiberarMemoriaListaHash(ListaHash &h);
#endif // LISTA_H_INCLUDED
