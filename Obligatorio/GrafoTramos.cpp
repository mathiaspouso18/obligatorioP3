#include "GrafoTramos.h"

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
