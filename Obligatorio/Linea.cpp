#include "Linea.h"

void MostrarLinea(Linea l)
{
    printf("\n\t- Linea: ");
    print(l.codigo);
    printf(" | Ciudad de Origen: ");
    MostrarNombreCiudad(l.ciudOrigen);
    printf(" | Ciudad de Destino: ");
    MostrarNombreCiudad(l.ciudDest);
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

int CantidadParadasEnLista(Linea linea)
{
    return DarCantidadParadas(linea.listaParadas);
}

void DarNombreCiudadOrigen(String &nombre, Linea linea)
{
    DarNombreCiudad(linea.ciudOrigen, nombre);
}

Boolean CerroLinea(Linea linea)
{
    Boolean cerro = FALSE;
    String ciudadDest, ciudadParada;
    DarNombreUltimaParada(linea.listaParadas, ciudadParada);
    DarNombreCiudad(linea.ciudDest, ciudadDest);
    if(streq(ciudadParada, ciudadDest))
        cerro = TRUE;

    return cerro;
}

void MostrarParadas(Linea linea)
{
    MostrarParada(linea.listaParadas);
}

int DarIdUltimaCiudadLinea(Linea linea)
{
    DarIdUltimaCiudad(linea.listaParadas);
}

ListaParadas DarListaParadasLinea (Linea linea){
     return linea.listaParadas;
}
