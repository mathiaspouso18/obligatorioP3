#include "Tramo.h"

/*** Crear un Tramo entre dos ciudades ***/
void CrearTramo(Tramo &t, Ciudad origen, Ciudad destino){
    t.origen = origen;
    t.destino = destino;
}

/*** Selectoras ***/
Ciudad DarOrigenTramo(Tramo t){
    return t.origen;
}

Ciudad DarDestinoTramo(Tramo t){
    return t.destino;
}



