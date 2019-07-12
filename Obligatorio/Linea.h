#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "ListaParadas.h"

typedef struct{
    String codigo;
    Ciudad ciudOrigen;
    Ciudad ciudDest;
    ListaParadas listaParadas;
} Linea;

#endif // LINEA_H_INCLUDED
