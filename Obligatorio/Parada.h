#ifndef PARADA_H_INCLUDED
#define PARADA_H_INCLUDED
#include "DiccionarioCiudades.h"

typedef struct {
    Ciudad ParadaCiudad;
    int IdParada;
} Parada;

Parada CrearParada (Ciudad c, int x);
// Selectoras
Ciudad DarCiudadParada(Parada p);
int DarIDParada(Parada p);

#endif // PARADA_H_INCLUDED
