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
int UltimoIdParada(Linea l);
void MostrarLinea(Linea l);
void InsertParadaEnLista(Linea &linea, Parada p);
int CantidadParadasEnLista(Linea linea);
void DarNombreCiudadOrigen(String &nombre, Linea linea);
Boolean CerroLinea(Linea linea);
void MostrarParadas(Linea linea);
int DarIdUltimaCiudadLinea(Linea linea);
void DarListaParadasLinea (Linea linea, ListaParadas &ListaAux);

#endif // LINEA_H_INCLUDED
