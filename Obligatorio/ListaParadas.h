#ifndef LISTAPARADAS_H_INCLUDED
#define LISTAPARADAS_H_INCLUDED
#include "Parada.h"

typedef struct nodoP
{   Parada info;
    nodoP * sig;
} NodoParada;

typedef NodoParada * ListaParadas;


void CrearListaParadas (ListaParadas &lp);
Parada DarParada(Lista l);
int ObtenerIdListaParadas (ListaParadas l);
int DarUltimoIdParadas(ListaParadas l);
int DarCantidadParadas(ListaParadas lp);
void InsBack (ListaParadas &lp, Parada p);
#endif // LISTAPARADAS_H_INCLUDED
