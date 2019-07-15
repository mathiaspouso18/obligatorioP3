#include "Linea.h"

void MostrarLinea(Linea l)
{
    printf("\n\t- Linea: ");
    print(l.codigo);
    printf(" | Ciudad de Origen: ");
    MostrarNombre(l.ciudOrigen);
    printf(" | Ciudad de Destino: ");
    MostrarNombre(l.ciudDest);
    printf(" | Cantidad de paradas: %d", DarCantidadParadas(l.listaParadas));
    printf("\n");
}

void CrearLinea(Linea &l, String codigo, Ciudad orig, Ciudad dest)
{
    strcop(l.codigo, codigo);
    l.ciudOrigen = orig;
    l.ciudDest = dest;
    CrearListaParadas(l.listaParadas);
}

void DarCodigoLinea(Linea l, String &s)
{
    strcop(s, l.codigo);
}

int UltimoIdParada(Linea l)
{
    return DarUltimoIdParadas(l.listaParadas);
}

void InsertParadaEnLista(Linea &linea, Parada p)
{
    InsBack(linea.listaParadas, p);
}
