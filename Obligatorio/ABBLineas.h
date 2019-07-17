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
typedef NodoABB * ABBLineas;

void Make(ABBLineas &a);
Boolean Vacio (ABBLineas a);
Boolean Member(ABBLineas a, String codigo);
void Insert (ABBLineas &a, Linea l);
Linea Find(ABBLineas a, String codigo);
void Delete(ABBLineas &a, int ID);
void ListarLineas(ABBLineas a);
void Modify(ABBLineas &a, Linea l);
#endif // ABBLINEAS_H_INCLUDED
