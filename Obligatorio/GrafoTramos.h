#ifndef GRAFOTRAMOS_H_INCLUDED
#define GRAFOTRAMOS_H_INCLUDED
#include "ListaAdyacencia.h"

const int M = 5;
typedef ListaAdy Grafo [M];

void CrearGrafo(Grafo &g);
Boolean PerteneceVerticeGrafo(Grafo g, int vert);
Boolean PerteneceAristaGrafo (Grafo g, Ciudad ciudad1, Ciudad ciudad2);
//Precondici�n: la arista no pertenece al grafo.
void InsertarAristaGrafo(Grafo &g, Tramo t);
//Precondici�n: el v�rtice pertenece al grafo.
int gradoVertice(Grafo g, int vertice);

#endif // GRAFOTRAMOS_H_INCLUDED
