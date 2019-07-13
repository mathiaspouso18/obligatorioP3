#include "AVLLineas.h"

void Make(AVL &a)
{
    a = NULL;
    a->altura = 0;
}

Boolean Vacio (AVL a)
{
    Boolean es = TRUE;
    if(a != NULL)
        es = FALSE;

    return es;
}

Linea Find(AVL a, int ID)
{

}

Boolean Member(AVL a, Linea l)
{

}

void Delete(AVL &a, int ID)
{

}

void Insert (AVL &a, Linea l)
{
    if (a == NULL)
    {
        a = new NodoAVL;
        a -> info = l;
        a -> hizq = NULL;
        a -> hder = NULL;
        a -> altura = 1;
    }
    else
    {
        //Hay que ver en base a que definimos si una linea es menor o mayor.
        /*if (l < a->info)
            Insertar (a->hizq,e);
        else
            Insertar (a->HDer,e);

        Balancear (a);
        a -> altura = 1 + max(Altura(a->hizq), Altura(a->hder));*/
    }
}

Linea ObtenerMinimo (AVL a)
{
}

Linea ObtenerMaximo (AVL a)
{
}

int Altura(AVL a)
{
    return a->altura;
}

void RotacionSimpleIzquierda(AVL &a)
{

}
void RotacionDobleIzquierda(AVL &a)
{

}
void RotacionSimpleDerecha(AVL &a)
{

}
void RotacionDobleDerecha(AVL &a)
{

}

void Balancear (AVL &a)
{
    if (a != NULL)
    {
        if (Altura(a->hizq) - Altura(a->hder) == 2)
        {
            if (Altura(a->hizq->hizq) >= Altura(a->hizq->hder))
                RotacionSimpleIzquierda (a);
            else
                RotacionDobleIzquierda (a);
        }
        else
        {
            if (Altura(a->hder) - Altura(a->hizq) == 2)
            {
                if (Altura(a->hder->hder) >= Altura(a->hder->hizq))
                    RotacionSimpleDerecha (a);
                else
                    RotacionDobleDerecha (a);
            }
        }
    }
}
