#ifndef PARADA_H_INCLUDED
#define PARADA_H_INCLUDED
#include "DiccionarioCiudades.h"

typedef struct {
    Ciudad ParadaCiudad;
    int IdParada;
} Parada;

void CrearParada (Parada &p, Ciudad c, int x);
// Selectoras
Ciudad DarCiudadParada(Parada p);
int DarIDParada(Parada p);
void DarNombreCiudadParada(Parada p, String &ciudadParada);

#endif // PARADA_H_INCLUDED
