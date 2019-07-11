#include "Lista.h"

void CrearLista (Lista &L)
{
    L = NULL;
}

Boolean PerteneceLista(Lista L, String clave)
{
    Boolean pertenece = FALSE;
    Lista aux = L;
    while(aux != NULL && !pertenece)
    {
        if(streq(aux->info, clave))
            pertenece = TRUE;
        else
            aux = aux -> sig;
    }

    return pertenece;
}

String DarInfoLista(Lista L, String &clave)
{
    strcop(clave, L->info);
}

void Insfront(Lista &L, String s)
{
    Lista aux = new Nodo;
	strcop(aux -> info, s);
	aux -> sig = L;
	L = aux;
}

int ObtenerEnLista(Lista L, String clave)
{
}

void BorrarEnLista(Lista &L, String clave)
{

}
