#ifndef GRAFOTRAMOS_H_INCLUDED
#define GRAFOTRAMOS_H_INCLUDED
#include "Tramo.h"

const int M = 5;

typedef struct nodoLA { int vert;
                       nodoLA * sig;
                     } nodo_lista_ady;

typedef nodo_lista_ady * ListaAdy;
typedef ListaAdy Grafo [M];

/*** Lista de Adyacencia ***/
void crearListaAdy(ListaAdy &L);
Boolean EsVacia (ListaAdy L);
void InsFrontListaAdy(ListaAdy &L, int vertice);
Boolean PerteneceListaAdy (ListaAdy L, int vertice);
int LargoListaAdy (ListaAdy L);
void DesplegarListaAdy (ListaAdy L);


/*** Grafo de Listas de Adyacencia ***/
void CrearGrafo(Grafo &g);
Boolean PerteneceVerticeGrafo(Grafo g, int vert);
Boolean PerteneceAristaGrafo (Grafo g, Ciudad ciudad1, Ciudad ciudad2);
//Precondici�n: la arista no pertenece al grafo.
void InsertarAristaGrafo(Grafo &g, Tramo t);
//Precondici�n: el v�rtice pertenece al grafo.
int gradoVertice(Grafo g, int vertice);

#endif // GRAFOTRAMOS_H_INCLUDED
