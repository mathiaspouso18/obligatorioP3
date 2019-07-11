#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "ListaParadas.h"

typedef struct{
    String codigo;
    String ciudOrigen;
    String ciudDest;
    ListaParadas listaParadas;
} Linea;

#endif // LINEA_H_INCLUDED
