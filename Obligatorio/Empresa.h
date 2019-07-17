#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED
#include "ABBLineas.h"
#include "GrafoTramos.h"

typedef struct {
    ABBLineas Lineas;
    Diccionario diccCiudades;
}Empresa;

#endif // EMPRESA_H_INCLUDED
