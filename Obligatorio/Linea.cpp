#include "Linea.h"

void MostrarLinea(Linea l)
{
    printf("\n\t- Linea: ");
    print(l.codigo);
    printf("\n");
    printf("\t  Ciudad de Origen: ");
    MostrarNombre(l.ciudOrigen);
    printf("\n");
    printf("\t  Ciudad de Destino: ");
    MostrarNombre(l.ciudDest);
    printf("\n");
}

void CrearLinea(Linea &l, String codigo, Ciudad orig, Ciudad dest)
{
    strcop(l.codigo, codigo);
    l.ciudOrigen = orig;
    l.ciudDest = dest;
}

void DarCodigoLinea(Linea l, String &s)
{
    strcop(s, l.codigo);
}
