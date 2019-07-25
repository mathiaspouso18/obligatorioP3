#ifndef LISTAADYACENCIA_H_INCLUDED
#define LISTAADYACENCIA_H_INCLUDED
#include "Tramo.h"

typedef struct nodoLA { int vert;
                       nodoLA * sig;
                     } nodo_lista_ady;

typedef nodo_lista_ady * ListaAdy;

void crearListaAdy(ListaAdy &L);
Boolean EsVacia (ListaAdy L);
void InsFrontListaAdy(ListaAdy &L, int vertice);
Boolean PerteneceListaAdy (ListaAdy L, int vertice);
int LargoListaAdy (ListaAdy L);
void DesplegarListaAdy (ListaAdy L);
void LiberarMemoriaListaAdy(ListaAdy &l);

#endif // LISTAADYACENCIA_H_INCLUDED
