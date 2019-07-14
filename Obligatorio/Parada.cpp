#include "Parada.h"

/*** Crear Parada ***/
void CrearParada (Parada &p, Ciudad c, int x){
    p.ParadaCiudad = c;
    p.IdParada = x;
}

Ciudad DarCiudadParada(Parada p)
{
    return p.ParadaCiudad;
}

int DarIDParada(Parada p)
{
    return p.IdParada;
}
