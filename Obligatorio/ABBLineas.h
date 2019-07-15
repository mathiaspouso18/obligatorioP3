#ifndef ABBLINEAS_H_INCLUDED
#define ABBLINEAS_H_INCLUDED

#include "Linea.h"
#include "GrafoTramos.h"

typedef struct nodoA
{
    Linea info;
    nodoA * hizq;
    nodoA * hder;
} NodoABB;
typedef NodoABB * ABB;

void Make(ABB &a);
Boolean Vacio (ABB a);
Boolean Member(ABB a, String codigo);
void Insert (ABB &a, Linea l);
Linea Find(ABB a, String codigo);
void Delete(ABB &a, int ID);
void ListarLineas(ABB a);

#endif // ABBLINEAS_H_INCLUDED
