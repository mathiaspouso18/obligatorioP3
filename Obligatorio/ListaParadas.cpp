#include "ListaParadas.h"

/*** Crear lista de paradas ***/
void CrearListaParadas (Ciudad origen, Ciudad destino){
    ListaParadas l1 = new NodoParada;
    ListaParadas l2 = new NodoParada;
    Parada parada_origen;
    Parada parada_destino;

    CrearParada(origen, 0);
    CrearParada(destino, 1);
    l1 -> info = parada_origen;
    l2 -> info = parada_destino;
    l1 -> sig = l2;
    l2 -> sig = NULL;
}

/*** Selectoras ***/
Parada DarParada(ListaParadas l)
{
    return l->info;
}

int ObtenerIdListaParadas (ListaParadas l, Parada p){
    return DarIDParada(l->info);
}
