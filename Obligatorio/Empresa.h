#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED
#include "Linea.h"

typedef struct nodoLin
{
    Linea info;
    nodoLin * sig;
} NodoLineas;

typedef NodoLineas * ListaLineas;

#endif // EMPRESA_H_INCLUDED
