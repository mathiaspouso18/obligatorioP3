#include "ListaParadas.h"

/*** Crear lista de paradas ***/
void CrearListaParadas (Ciudad origen, Ciudad destino){
    ListaParadas l1 = new NodoParada;
    ListaParadas l2 = new NodoParada;
    Parada parada_origen;
    Parada parada_destino;

    CrearParada(parada_origen, origen, 0);
    CrearParada(parada_destino, destino, 1);
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

int ObtenerIdListaParadas (ListaParadas l){
    return DarIDParada(l->info);
}

int DarUltimoIdParadas(ListaParadas l)
{

}
