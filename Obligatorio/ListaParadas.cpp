#include "ListaParadas.h"

/*** Crear lista de paradas ***/
void CrearListaParadas (ListaParadas &lp){
    /*ListaParadas l1 = new NodoParada;
    ListaParadas l2 = new NodoParada;
    Parada parada_origen;
    Parada parada_destino;

    CrearParada(parada_origen, origen, 0);
    CrearParada(parada_destino, destino, 1);
    l1 -> info = parada_origen;
    l2 -> info = parada_destino;
    l1 -> sig = l2;
    l2 -> sig = NULL;*/
    lp = NULL;
}

void InsBack (ListaParadas &lp, Parada p)
{
    if (lp == NULL)
     {
         lp = new nodoP;
         lp -> info = p;
         lp -> sig = NULL;
     }
     else
        InsBack (lp -> sig, p);
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
    int id = 0;
    ListaParadas aux = l;
    if(aux != NULL)
    {
        while(aux != NULL)
        {
            aux = aux->sig;
        }
        id = DarIDParada(aux->info);
    }

    return id;
}

int DarCantidadParadas(ListaParadas lp)
{
    int total = 0;
    while(lp != NULL)
    {
        total = total + 1;
        lp = lp->sig;
    }
    return total;
}
