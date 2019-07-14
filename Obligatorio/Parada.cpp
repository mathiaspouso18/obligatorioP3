#include "Parada.h"

/*** Crear Parada ***/
Parada CrearParada (Ciudad c, int x){
    Parada parada_1;
    parada_1.ParadaCiudad = c;
    parada_1.IdParada = x;
    return parada_1;
}

Ciudad DarCiudadParada(Parada p)
{
    return p.ParadaCiudad;
}

int DarIDParada(Parada p)
{
    return p.IdParada;
}
