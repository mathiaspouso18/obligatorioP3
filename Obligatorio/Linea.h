#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "ListaParadas.h"

typedef struct{
    String codigo;
    Ciudad ciudOrigen;
    Ciudad ciudDest;
    ListaParadas listaParadas;
} Linea;

void CrearLinea(Linea &l, String codigo, Ciudad orig, Ciudad dest);
void DarCodigoLinea(Linea l, String &s);
void MostrarLinea(Linea l);

#endif // LINEA_H_INCLUDED
