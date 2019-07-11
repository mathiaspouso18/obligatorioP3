#ifndef LISTALINEAS_H_INCLUDED
#define LISTALINEAS_H_INCLUDED

#include "Linea.h"

typedef struct nodoLin
{
    Linea info;
    nodoLin * sig;
} NodoLineas;

typedef NodoLineas * ListaLineas;

#endif // LISTALINEAS_H_INCLUDED
