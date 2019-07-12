#include "Ciudad.h"

void CrearCiudad(Ciudad &c, String s)
{
    strcop(c.nombre, s);
}

void DarNombreCiudad(Ciudad c, String &s)
{
    strcop(s, c.nombre);
}

int DarIDCiudad(Ciudad c)
{
    return c.ID;
}
