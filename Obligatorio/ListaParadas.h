#ifndef LISTAPARADAS_H_INCLUDED
#define LISTAPARADAS_H_INCLUDED
#include "Parada.h"

typedef struct NodoPL
{
    Parada info;
    NodoPL * sig;
}NodoParada;

typedef struct
{
    NodoParada * prim;
    NodoParada * ult;
} ListaParadas;

void CrearListaParadas (ListaParadas &lp);
int DarUltimoIdParadas(ListaParadas l);
int DarCantidadParadas(ListaParadas lp);
void InsBack (ListaParadas &lp, Parada p);
void Insfront (ListaParadas &lp, Parada p);
void DarNombreUltimaParada(ListaParadas listaParadas, String &ciudadParada);
void MostrarParada(ListaParadas listaParadas);
int DarIdUltimaCiudad(ListaParadas l);
Boolean BuscarCiudadEnParadas(ListaParadas l, Ciudad c);
void LiberarListaParadas(ListaParadas &l);

#endif // LISTAPARADAS_H_INCLUDED
