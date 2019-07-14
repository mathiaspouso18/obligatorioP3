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

Linea Find(ABB a, String codigo)
{
    Linea l;
	Boolean seguir = TRUE;
	String codigo_linea_abb;

	while(seguir)
    {
        if(a == NULL)
        {
            seguir = FALSE;
        }
        else
        {
            DarCodigoLinea(a->info, codigo_linea_abb);
            if(streq(codigo, codigo_linea_abb)){
                l = a->info;
                seguir = FALSE;
            }
            else
            {
                if(!EsMayor(codigo_linea_abb, codigo))
                    a = a->hizq;
                else
                    a = a->hder;
            }
        }
	}
	return l;
}

Boolean Member(ABB a, String codigo)
{
    Boolean existe = FALSE;
    String codigo_linea_abb;

    while(existe != TRUE && a != NULL)
    {
        DarCodigoLinea(a->info, codigo_linea_abb);
        if(streq(codigo, codigo_linea_abb))
        {
            existe = TRUE;
        }
        else
        {
            if(!EsMayor(codigo_linea_abb, codigo))
                a = a->hizq;
            else
                a = a->hder;
        }
    }
    return existe;
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
