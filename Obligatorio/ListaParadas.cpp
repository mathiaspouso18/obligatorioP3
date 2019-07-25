#include "ListaParadas.h"

/*** Crear lista de paradas ***/
void CrearListaParadas (ListaParadas &lp)
{
    lp.prim = NULL;
    lp.ult = NULL;
}

void InsBack (ListaParadas &lp, Parada p)
{
    NodoParada * nuevo = new NodoParada;
    nuevo->info = p;
    nuevo->sig = NULL;
    if (lp.ult == NULL)
    {
        lp.ult = nuevo;
        lp.prim = nuevo;
    }
    else
    {
        lp.ult->sig = nuevo;
        lp.ult = nuevo;
    }
}

void Insfront (ListaParadas &lp, Parada p)
{
    NodoParada * nuevo = new NodoParada;
    nuevo->info = p;
    nuevo->sig = lp.prim;
    lp.prim = nuevo;
    if (lp.ult == NULL)
        lp.ult = nuevo;
}

/*** Selectoras ***/

int DarIdUltimaCiudad(ListaParadas l)
{
    Ciudad c = DarCiudadParada(l.ult->info);
    return DarIDCiudad(c);
}

int DarUltimoIdParadas(ListaParadas l)
{
    int id = 0;
    if(l.ult != NULL)
    {
        id = DarIDParada(l.ult->info);
    }
    return id;
}

int DarCantidadParadas(ListaParadas lp)
{
    int total = 0;
    while(lp.prim != NULL)
    {
        total = total + 1;
        lp.prim = lp.prim->sig;
    }
    return total;
}

void DarNombreUltimaParada(ListaParadas listaParadas, String &ciudadParada)
{
    DarNombreCiudadParada(listaParadas.ult->info, ciudadParada);
}

void MostrarParada(ListaParadas listaParadas)
{
    ListaParadas aux = listaParadas;
    while(aux.prim != NULL)
    {
        MostrarDatosParada(aux.prim->info);
        aux.prim = aux.prim->sig;
    }
}

Boolean BuscarCiudadEnParadas(ListaParadas l, Ciudad c){
    ListaParadas aux = l;
    Boolean encontre = FALSE;
    while(aux.prim!=NULL && !encontre){
        if(DarIDCiudad(DarCiudadParada(aux.prim->info)) == DarIDCiudad(c)){
            encontre = TRUE;
        }else
        aux.prim = aux.prim->sig;
    }
    return encontre;
}

//void LiberarListaParadas(ListaParadas &l)
//{
//    ListaParadas aux = l;
//    if(aux.prim != NULL){
//     LiberarListaParadas(aux);
//     delete(aux.prim);
//     aux.prim = NULL;
//    }
//}

void LiberarListaParadas(ListaParadas &l)
{
    if(l.prim!=NULL){
        if(l.prim == l.ult){
            delete(l.prim);
        }else{
            ListaParadas aux = l;
            while (aux.prim->sig != l.ult)
            {
               aux.prim = aux.prim->sig;
            }
            l.ult = aux.prim;
            l.ult->sig = NULL;
            aux.prim = aux.ult;
            delete(aux.prim);
            LiberarListaParadas(l);
            }
    }
}


