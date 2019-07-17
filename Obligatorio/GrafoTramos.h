#ifndef GRAFOTRAMOS_H_INCLUDED
#define GRAFOTRAMOS_H_INCLUDED
#include "ListaAdyacencia.h"

const int M = 5;
typedef ListaAdy Grafo [M];

void CrearGrafo(Grafo &g);
Boolean PerteneceVerticeGrafo(Grafo g, int vert);
Boolean PerteneceAristaGrafo (Grafo g, Ciudad ciudad1, Ciudad ciudad2);
//Precondición: la arista no pertenece al grafo.
void InsertarAristaGrafo(Grafo &g, Tramo t);
//Precondición: el vértice pertenece al grafo.
int gradoVertice(Grafo g, int vertice);
void DFS(Grafo G, int actual, int v, Boolean visitado[M], Boolean &Existe);
Boolean ExisteTramoEntreCiudades(Grafo G, int u, int v, Boolean &Existe);

#endif // GRAFOTRAMOS_H_INCLUDED
