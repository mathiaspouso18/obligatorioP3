#ifndef LISTAPARADAS_H_INCLUDED
#define LISTAPARADAS_H_INCLUDED
#include "Parada.h"

typedef struct nodoP
{
    Parada info;
    nodoP * sig;
} NodoParada;

typedef NodoParada * ListaParadas;

Parada DarParada(Lista l);

#endif // LISTAPARADAS_H_INCLUDED
