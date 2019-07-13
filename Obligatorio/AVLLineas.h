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

void Make(AVL &a);
Boolean Vacio (AVL a);
Boolean Member (AVL a, Linea l);
void Insert (AVL &a, Linea l);
Linea Find(AVL a, int ID);
void Delete(AVL &a, int ID);
Linea ObtenerMinimo (AVL a);
Linea ObtenerMaximo (AVL a);
int Altura(AVL a);
void RotacionSimpleIzquierda(AVL &a);
void RotacionDobleIzquierda(AVL &a);
void RotacionSimpleDerecha(AVL &a);
void RotacionDobleDerecha(AVL &a);

#endif // AVLLINEAS_H_INCLUDED
