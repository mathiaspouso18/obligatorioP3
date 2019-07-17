#include "Ciudad.h"

void CrearCiudad(Ciudad &c, String s, int ID)
{
    strcop(c.nombre, s);
    c.ID = ID;
}

void DarNombreCiudad(Ciudad c, String &s)
{
    strcop(s, c.nombre);
}

int DarIDCiudad(Ciudad c)
{
    return c.ID;
}

void MostrarNombreCiudad(Ciudad c)
{
    print(c.nombre);
}
