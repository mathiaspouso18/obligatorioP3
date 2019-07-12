#ifndef AVLLINEAS_H_INCLUDED
#define AVLLINEAS_H_INCLUDED

#include "Linea.h"

typedef struct nodoA
{
    Linea info;
    nodoA * hizq;
    nodoA * hder;
    int altura;
} NodoAVL;
typedef NodoAVL * AVL;


#endif // AVLLINEAS_H_INCLUDED
