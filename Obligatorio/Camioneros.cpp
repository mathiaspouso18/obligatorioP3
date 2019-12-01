//#include "stdafx.h"
#include "Camioneros.h"

void Camioneros :: destruirArbol (Nodo * &a)
{
    if (a != NULL)
    {
        destruirArbol(a->hizq);
        destruirArbol(a->hder);
        //a->info = NULL;
        delete (a);
        a = NULL;
    }
}

bool Camioneros :: perteneceEnArbol (Nodo * a, long int ced)
{
    bool encontre = false;
    while (!encontre && a != NULL)
    {
        if (ced == a->info->getCedula())
            encontre = true;
        else
        {
            if (ced < a->info->getCedula())
                a = a->hizq;
            else
                a = a->hder;
        }
    }
    return encontre;
}

void Camioneros :: insertEnArbol (Nodo * &a, Camionero * camionero)
{
	if (a == NULL)
	{
		a = new Nodo;
		a -> info = camionero;
		a -> hizq = NULL;
		a -> hder = NULL;
	}
	else
	{
		if (camionero->getCedula() < a->info->getCedula())
			insertEnArbol(a->hizq,camionero);
		else
			insertEnArbol(a->hder,camionero);
	}
}

Camionero * Camioneros :: obtenerEnArbol (Nodo * a, long int ced)
{
	while (ced != a->info->getCedula())
	{
		if (ced < a->info->getCedula())
			a = a->hizq;
		else
			a = a->hder;
	}
	return (a->info);
}

void Camioneros :: cargarIterador (Nodo * a, Iterador &iter)
{
	if (a != NULL)
	{
		cargarIterador (a->hizq, iter);
		iter.insertar (a->info);
		cargarIterador (a->hder, iter);
	}
}

Camioneros :: Camioneros()
{
	ABB = NULL;
}

Camioneros :: ~Camioneros ()
{
	destruirArbol(ABB);
}

bool Camioneros :: esVacio(){
	return (bool) (ABB == NULL);
}

bool Camioneros :: member (long int ced)
{
	return perteneceEnArbol (ABB, ced);
}

void Camioneros :: Insert(Camionero * camionero)
{
	insertEnArbol (ABB, camionero);
}

Camionero * Camioneros :: Find (long int ced)
{
	return obtenerEnArbol (ABB, ced);
}

void Camioneros :: listarCamioneros (Iterador &iter)
{
    cargarIterador (ABB, iter);
}
