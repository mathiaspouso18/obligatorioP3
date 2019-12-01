#include "IteradorCamioneros.h"

IteradorCamioneros :: IteradorCamioneros()
{
    ult = NULL;
    prim = NULL;
    actual = NULL;
}

void IteradorCamioneros :: insertar (Camionero * cam)
{
    NodoCamionero * nuevo = new NodoCamionero;
    nuevo->info = cam;
    nuevo->sig = NULL;
    if (ult == NULL)
    {
        ult = nuevo;
        prim = nuevo;
        actual = nuevo;
    }
    else
    {
        ult->sig = nuevo;
        ult = ult->sig;
    }
}

bool IteradorCamioneros :: hayMasCamioneros()
{
    return (bool) (actual != NULL);
}

Camionero * IteradorCamioneros :: proximoCamionero ()
{
    Camionero * resu = actual -> info;
    actual = actual -> sig;
    return resu;
}

IteradorCamioneros :: ~IteradorCamioneros ()
{
    NodoCamionero * aux = prim;
    while (aux != NULL)
    {
        prim = prim -> sig;
        delete aux;
        aux = prim;
    }
}
