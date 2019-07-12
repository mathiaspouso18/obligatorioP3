#include "DiccionarioCiudades.h"

void Make(Diccionario &d)
{
    for(int i = 0;i < B; i++)
        CrearLista(d[i]);
}

Boolean Member(Diccionario d, String clave)
{
    Boolean pertenece = FALSE;
    int cubeta = h(clave);
    Lista aux = d[cubeta];
    while(!pertenece && aux != NULL)
    {
        String nombreCiu;
        DarNombreLista(aux, nombreCiu);
        if(streq(nombreCiu, clave))
            pertenece= TRUE;
        else
            aux = aux->sig;
    }
    return pertenece;
}

Ciudad Find(Diccionario d, String nombre)
{
    int cubeta = h(nombre);
    Boolean esta = FALSE;
    Lista aux = d[cubeta];
    while(!esta && aux != NULL)
    {
        String nombreCiu;
        DarNombreCiudad(aux->info, nombreCiu);
        if(streq(nombreCiu, nombre))
            esta = TRUE;
        else
            aux = aux->sig;
    }
    return aux->info;

}

void Insert(Diccionario &d, Ciudad c)
{
    String n;
    DarNombreCiudad(c, n);
    int cubeta = h(n);
    InsFrontLista(d[cubeta], c);
}

int h(String clave)
{
    return SumarASCII(clave) % B;
}
