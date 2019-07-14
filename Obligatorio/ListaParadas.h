#ifndef LISTAPARADAS_H_INCLUDED
#define LISTAPARADAS_H_INCLUDED
#include "Parada.h"

typedef struct nodoP
{   Parada info;
    nodoP * sig;
} NodoParada;

typedef NodoParada * ListaParadas;


void CrearListaParadas (Ciudad origen, Ciudad destino);
Parada DarParada(Lista l);
int ObtenerIdListaParadas (ListaParadas l, Parada p);

#endif // LISTAPARADAS_H_INCLUDED
