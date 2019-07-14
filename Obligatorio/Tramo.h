#ifndef TRAMO_H_INCLUDED
#define TRAMO_H_INCLUDED
#include "DiccionarioCiudades.h"

typedef struct {Ciudad origen;
                Ciudad destino;
                } Tramo;

void CrearTramo(Tramo &t, Ciudad origen, Ciudad destino);
Ciudad DarOrigenTramo(Tramo t);
Ciudad DarDestinoTramo(Tramo t);

#endif // TRAMO_H_INCLUDED
