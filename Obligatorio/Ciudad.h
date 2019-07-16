#ifndef CIUDAD_H_INCLUDED
#define CIUDAD_H_INCLUDED

#include "String.h"

typedef struct {String nombre;
                int ID;
               }Ciudad;

void CrearCiudad(Ciudad &c, String s, int ID);

/*** Selectoras ***/
void DarNombreCiudad(Ciudad c, String &s);
int DarIDCiudad(Ciudad c);
void MostrarNombre(Ciudad c);


#endif // CIUDAD_H_INCLUDED
