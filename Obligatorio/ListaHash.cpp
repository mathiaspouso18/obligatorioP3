#include "ListaHash.h"

void CrearLista (ListaHash &L)
{
    L = NULL;
}

Boolean PerteneceLista(ListaHash L, String clave)
{
    Boolean pertenece = FALSE;
    ListaHash aux = L;
    String nombreAux;
    while(aux != NULL && !pertenece)
    {
        DarNombreCiudad(aux->info, nombreAux);
        if(streq(nombreAux, clave))
            pertenece = TRUE;
        else
            aux = aux -> sig;
    }

    return pertenece;
}

Ciudad DarCiudadLista(ListaHash L)
{
    return L->info;
}

void InsFrontListaHash(ListaHash &L, Ciudad c)
{
    ListaHash aux = new Nodo;
    aux -> info = c;
    aux -> sig = L;
    L = aux;
}

void DarNombreLista(ListaHash l, String &nombre)
{
    DarNombreCiudad(l->info, nombre);
}

void LiberarMemoriaListaHash(ListaHash &l)
{
    if(l != NULL)
    {
        LiberarMemoriaListaHash(l -> sig);
        LiberarMemoriaCiudad(l->info);
        delete (l);
        l = NULL;
    }
}
