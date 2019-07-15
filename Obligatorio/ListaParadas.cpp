#include "ListaParadas.h"

/*** Crear lista de paradas ***/
void CrearListaParadas (ListaParadas &lp){
    lp = NULL;
}

void InsBack (ListaParadas &lp, Parada p){
    nodoP * nuevo = new nodoP;
    nuevo->info = p;
    nuevo->prim = NULL;
    if (lp->ult == NULL){
        lp->ult = nuevo;
        lp->prim = nuevo;
    }else {
        lp->ult->prim = nuevo;
        lp->ult = nuevo;
    }
 }

 void Insfront (ListaParadas &lp, Parada p){
    nodoP * nuevo = new nodoP;
    nuevo->info = p;
    nuevo->prim = lp->prim;
    lp->prim = nuevo;
    if (lp->ult == NULL)
        lp->ult = nuevo;
}

/*** Selectoras ***/

Parada DarParada(ListaParadas l){
    return l->info;
}

int ObtenerIdListaParadas (ListaParadas l){
    return DarIDParada(l->info);
}

int DarUltimoIdParadas(ListaParadas l){
    int id = 0;
    ListaParadas aux = l;
    if(aux != NULL)
    {
        while(aux != NULL)
        {
            aux = aux->prim;
        }
        id = DarIDParada(aux->info);
    }
    return id;
}

int DarCantidadParadas(ListaParadas lp){
    int total = 0;
    while(lp != NULL)
    {
        total = total + 1;
        lp = lp->prim;
    }
    return total;
}



