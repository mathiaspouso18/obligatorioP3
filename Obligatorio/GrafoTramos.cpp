#include "GrafoTramos.h"

/*** Lista de Adyacencia ***/

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

/*** Grafo de Listas de Adyacencia ***/

void CrearGrafo (Grafo &G)
{
     ListaAdy l;
     crearListaAdy(l);
     for (int i=0; i<M; i++){
        G[i]= l;
    }
}

//Precondición: la arista no pertenece al grafo.
void InsertarAristaGrafo(Grafo &g, Tramo t){
    InsFrontListaAdy(g[IdOrigenTramo(t)],IdDestinoTramo(t));
    if (IdOrigenTramo(t)!= IdDestinoTramo(t)){
        InsFrontListaAdy (g[IdDestinoTramo(t)],IdOrigenTramo(t));
    }
}

//Precondición: el vértice pertenece al grafo.
int gradoVertice(Grafo g, int vertice){
     int cont = LargoListaAdy(g[vertice]);
     if (!PerteneceListaAdy(g[vertice],vertice)){
        return cont;
     }else{
        return (cont+1);
    }
}

Boolean PerteneceAristaGrafo (Grafo g, Ciudad ciudad1, Ciudad ciudad2){
    return PerteneceListaAdy(g[DarIDCiudad(ciudad1)],DarIDCiudad(ciudad2));
}

Boolean PerteneceVerticeGrafo(Grafo g, int vertice){
    return PerteneceListaAdy(g[vertice], vertice);
}
