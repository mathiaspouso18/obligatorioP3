#include "ListaHash.h"

void CrearLista (Lista &L)
{
    L = NULL;
}

Boolean PerteneceLista(Lista L, String clave)
{
    Boolean pertenece = FALSE;
    Lista aux = L;
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

Ciudad DarCiudadLista(Lista L)
{
    return L->info;
}

void InsFrontLista(Lista &L, Ciudad c)
{
    Lista aux = new Nodo;
    aux -> info = c;
	aux -> sig = L;
	L = aux;
}

int ObtenerEnLista(Lista L, String clave)
{
}

void BorrarEnLista(Lista &L, String clave)
{

}

void DarNombreLista(Lista l, String &nombre)
{
    DarNombreCiudad(l->info, nombre);
}
