#include "ABBLineas.h"

void Make(ABB &a)
{
    a = NULL;
}

Boolean Vacio (ABB a)
{
    Boolean es = TRUE;
    if(a != NULL)
        es = FALSE;

    return es;
}

Linea Find(ABB a, int ID)
{

}

Boolean Member(ABB a, Linea l)
{

}

void Delete(ABB &a, int ID)
{

}

void Insert (ABB &a, Linea l)
{
    String codigo_linea_abb, codigo_linea;
    DarCodigoLinea(l, codigo_linea);
    if (a == NULL)
    {
        a = new NodoABB;
        a -> info = l;
        a -> hizq = NULL;
        a -> hder = NULL;
    }
    else
    {
        DarCodigoLinea(a->info, codigo_linea_abb);
        if(!EsMayor(codigo_linea_abb, codigo_linea))
            Insert (a -> hizq, l);
        else
            Insert (a -> hder, l);
    }
}

void ListarLineas(ABB a)
{
    if (a != NULL)
	{
		ListarLineas(a->hizq);
		MostrarLinea(a->info);
		ListarLineas(a->hder);
	}
}
