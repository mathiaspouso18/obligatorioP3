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

void InsertDiccionario(Diccionario &d, Ciudad c)
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

void CargarDiccionarioCiudades (Diccionario &d){
    printf("\nAntes de continuar, ingrese las ciudades que la empresa visita (Esto podra hacerlo solo una vez)\n");
    for(int i = 0; i<B; i++){
        printf("\nIngrese la ciudad %d: ", i+1);
        String s;
        strcrear(s);
        scan(s);
        Ciudad c;
        if(Member(d,s)){
            Boolean encontre = TRUE;
            while(encontre){
                printf("\nLa ciudad ingresada ya se encuentra ingresada, intente nuevamente\n\n");
                printf("\nIngrese la ciudad %d: ", i+1);
                scan(s);
                if(!Member(d,s))
                    encontre = FALSE;
           }
        }
        CrearCiudad(c,s,i+1);
        InsertDiccionario(d,c);
    }
}
