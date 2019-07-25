#include "ListaAdyacencia.h"

void crearListaAdy(ListaAdy &L){
    L = NULL;
}

Boolean EsVacia (ListaAdy L){
    if(L == NULL){
        return TRUE;
    }else{
        return FALSE;
    }
}

void InsFrontListaAdy(ListaAdy &L, int vertice){
    ListaAdy aux;
    aux = new nodo_lista_ady;
    aux->vert = vertice;
    aux->sig = L;
    L = aux;
}

Boolean PerteneceListaAdy (ListaAdy L, int vertice){
     Boolean esta = FALSE;
     while ((!esta) && (L != NULL)){
         if (L->vert == vertice){
            esta = TRUE;
        }else {
            L = L->sig;
        }
     }
     return esta;
}

int LargoListaAdy (ListaAdy L){
    int cant = 0;
    while (L != NULL)
     {
        cant++;
        L = L->sig;
     }
     return cant;
}

void DesplegarListaAdy (ListaAdy L){
    while (L != NULL)
     {
        printf ("%d", L->vert);
        L = L->sig;
     }
 }

 void LiberarMemoriaListaAdy(ListaAdy &l)
 {
    if(l != NULL)
    {
        LiberarMemoriaListaAdy(l -> sig);
        delete (l);
        l = NULL;
    }
 }
