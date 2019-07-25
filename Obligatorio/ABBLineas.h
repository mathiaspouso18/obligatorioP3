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
//Precondición: La linea no pertenece al arbol de lineas.
void Insert (ABBLineas &a, Linea l);
//Precondición: La linea ya existe en el arbol
Linea Find(ABBLineas a, String codigo);
//Precondición: El arbol de lineas no es vacio
void ListarLineas(ABBLineas a);
//Precondición: La linea a sustituir existe previamente en el arbol.
void Modify(ABBLineas &a, Linea l);
void LiberarMemoriaABB (ABBLineas &ABB);
#endif // ABBLINEAS_H_INCLUDED
