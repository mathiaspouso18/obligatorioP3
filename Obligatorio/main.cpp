#include <iostream>
#include "ABBLineas.h"
#include "GrafoTramos.h"
#include "Menu.h"
using namespace std;

int main()
{
    int opcion;
    ABBLineas Lineas;
    Linea linea;
    Grafo G;
    Ciudad CiudadO, CiudadD, ciudParada;
    String codigo, co, cd, origLinea;
    Tramo t;
    Parada p;
    Boolean encontre;
    CrearGrafo(G);
    Diccionario Ciudades;
    Make(Ciudades);
    Make(Lineas);

    printf("****************** Bienvenido al sistema de gestion de transporte ******************\n");
    CargarDiccionarioCiudades(Ciudades);

    do
    {
        MenuPrincipal(opcion);
        switch(opcion)
        {

        case 1: /*** Crear un tramo entre 2 ciudades ***/
            printf("\t\n\t########################################################");
            printf("\n\t###                                                  ###\n\t");
            printf("###             Crear un nuevo tramo                 ###\n\t");
            printf("###                                                  ###\n\t");
            printf("###       Ingese ciudad origen del tramo:            ###\n\t");
            printf("###                                                  ###\n\t\t");
            scan(co);
            if(!Member(Ciudades,co))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\t###                                                  ###\n");
                    printf("\t###   La ciudad ingresada no esta en el recorrido.   ###\n\t");
                    printf("###   Por favor, intente nuevamente                  ###\n\t\t");
                    scan(co);
                    if(Member(Ciudades,co))
                        encontre = TRUE;
                }
            }
            printf("\n\t###                                                  ###\n\t");
            printf("###       Ingese ciudad destino del tramo:           ###\n\t");
            printf("###                                                  ###\n\t\t");
            scan(cd);
            while(streq(co,cd))
            {
                printf("\n\t###                                                  ###\n\t");
                printf("### La ciudad destino no puede coincidir con el      ###\n\t");
                printf("### origen del tramo, por favor, intente nuevamente  ###\n\t\t");
                scan(cd);
            }
            if(!Member(Ciudades,cd))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\t###                                                  ###\n");
                    printf("\t###   La ciudad ingresada no esta en el recorrido.   ###\n\t");
                    printf("###   Por favor, intente nuevamente                  ###\n\t\t");
                    scan(cd);
                    if(Member(Ciudades,cd))
                        encontre = TRUE;
                }
            }
            CiudadO = Find(Ciudades,co);
            CiudadD = Find(Ciudades,cd);
            CrearTramo(t,CiudadO,CiudadD);

            if(!PerteneceAristaGrafo(G,CiudadO,CiudadD))
            {
                InsertarAristaGrafo(G,t);
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###            Tramo creado con exito                ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            else
            {
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###         El Tramo creado ya existe                ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            break;

        case 2: /*** Comprobar si existe un tramo entre 2 ciudades ***/
            printf("\t\n\t########################################################");
            printf("\n\t###                                                  ###\n\t");
            printf("###           Verificar si existe un tramo           ###\n\t");
            printf("###                                                  ###\n\t");
            printf("###       Ingese ciudad origen del tramo:            ###\n\t");
            printf("###                                                  ###\n\t\t");
            scan(co);
            if(!Member(Ciudades,co))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\t###                                                  ###\n");
                    printf("\t###   La ciudad ingresada no esta en el recorrido.   ###\n\t");
                    printf("###   Por favor, intente nuevamente                  ###\n\t\t");
                    scan(co);
                    if(Member(Ciudades,co))
                        encontre = TRUE;
                }
            }
            printf("\n\t###                                                  ###\n\t");
            printf("###       Ingese ciudad destino del tramo:           ###\n\t");
            printf("###                                                  ###\n\t\t");
            scan(cd);
            while(streq(co,cd))
            {
                printf("\t###                                                  ###\n");
                printf("\t###   La ciudad destino no puede coincidir con el    ###\n\t");
                printf("###  origen del tramo, por favor intente nuevamente. ###\n\t\t");
                scan(cd);
            }
            if(!Member(Ciudades,cd))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\t###                                                  ###\n");
                    printf("\t###   La ciudad ingresada no esta en el recorrido.   ###\n\t");
                    printf("###   Por favor, intente nuevamente                  ###\n\t\t");
                    scan(cd);
                    if(Member(Ciudades,cd))
                        encontre = TRUE;
                }
            }
            CiudadO = Find(Ciudades,co);
            CiudadD = Find(Ciudades,cd);
            if(!PerteneceAristaGrafo(G,CiudadO, CiudadD))
            {
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###    El tramo no se encuentra dentro de los        ###\n\t");
                printf("###    recorridos de la empresa.                     ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            else
            {
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###    El tramo se encuentra dentro de los           ###\n\t");
                printf("###    recorridos de la empresa.                     ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            break;
        case 3: /*** Crear una nueva linea en la empresa ***/

            printf("\t\n\t########################################################");
            printf("\n\t###                                                  ###\n\t");
            printf("###         Ingrese el codigo de la linea            ###\n\t");
            printf("###                                                  ###\n\t\t");

            scan(codigo);
            if(!Member(Lineas, codigo))
            {
                printf("\n\t###                                                  ###\n\t");
                printf("###       Ingese ciudad origen de la linea           ###\n\t");
                printf("###                                                  ###\n\t\t");
                scan(co);
                while(!Member(Ciudades, co))
                {
                    printf("\n\t###                                                  ###\n\t");
                    printf("###   No existe una ciudad con ese nombre,           ###\n\t");
                    printf("###   por favor, intente nuevamente                  ###\n\t\t");
                    scan(co);
                }
                CiudadO = Find(Ciudades, co);
                printf("\n\t###                                                  ###\n\t");
                printf("###       Ingese ciudad destino de la linea          ###\n\t");
                printf("###                                                  ###\n\t\t");
                scan(cd);
                while(streq(co,cd))
                {
                    printf("\t###                                                  ###\n");
                    printf("\t###   La ciudad destino no puede coincidir con el    ###\n\t");
                    printf("###  origen del tramo, por favor intente nuevamente. ###\n\t\t");
                    scan(cd);
                }
                while(!Member(Ciudades, cd))
                {
                    printf("\n\t###                                                  ###\n\t");
                    printf("###   No existe una ciudad con ese nombre,           ###\n\t");
                    printf("###   por favor, intente nuevamente                  ###\n\t\t");
                    scan(cd);
                }
                CiudadD = Find(Ciudades, cd);
                ExisteTramoEntreCiudades(G,DarIDCiudad(CiudadO),DarIDCiudad(CiudadD),encontre);
                if(!encontre){
                    printf("\t\n\t########################################################");
                    printf("\n\t###                                                  ###\n\t");
                    printf("###        No existe un camino entre las ciudades    ###\n\t");
                    printf("###        ingresadas.                               ###\n\t");
                    printf("###                                                  ###\n\t");
                    printf("########################################################\n\n");
                }else{
                    CrearLinea(linea, codigo, CiudadO, CiudadD);
                    Insert(Lineas, linea);
                    printf("\t\n\t########################################################");
                    printf("\n\t###                                                  ###\n\t");
                    printf("###            Linea creada con exito                ###\n\t");
                    printf("###                                                  ###\n\t");
                    printf("########################################################\n\n");
                }
            }
            else
            {
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###         Ya existe una linea con ese codigo       ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            break;
        case 4:
            if(Lineas != NULL)
                ListarLineas(Lineas);
            else
            {
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###        No existen lineas para listar             ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            break;
        case 5: /*** Agregar parada a la linea ***/
            int ultimoId;
            printf("\t\n\t########################################################");
            printf("\n\t###                                                  ###\n\t");
            printf("###         Ingrese el codigo de la linea            ###\n\t");
            printf("###                                                  ###\n\t\t");
            scan(codigo);
            if(Member(Lineas, codigo))
            {
                linea = Find(Lineas, codigo);
                ultimoId = UltimoIdParada(linea);
                printf("\n\t###                                                  ###\n\t");
                printf("###       Ingese una ciudad para agregar parada      ###\n\t");
                printf("###                                                  ###\n\t\t");
                scan(co);
                if(Member(Ciudades, co))
                {
                    ciudParada = Find(Ciudades, co);
                    DarNombreCiudadOrigen(origLinea, linea);
                    if(CantidadParadasEnLista(linea) == 0)
                    {
                        if(streq(co, origLinea))
                        {
                            ultimoId++;
                            CrearParada(p, ciudParada, ultimoId);
                            InsertParadaEnLista(linea, p);
                            Modify(Lineas, linea);
                            printf("\t\n\t########################################################");
                            printf("\n\t###                                                  ###\n\t");
                            printf("###            Parada agregada con exito             ###\n\t");
                            printf("###                                                  ###\n\t");
                            printf("########################################################\n\n");
                        }
                        else
                        {
                            printf("\t\n\t########################################################");
                            printf("\n\t###                                                  ###\n\t");
                            printf("### La primer parada debe coincidir con la ciudad    ###\n\t");
                            printf("### origen del recorrido.                            ###\n\t");
                            printf("###                                                  ###\n\t");
                            printf("########################################################\n\n");
                        }
                    }
                    else
                    {
                        if(!CerroLinea(linea))
                        {
                            ciudParada = Find(Ciudades, co);
                            if(BuscarCiudadEnParadas(DarListaParadasLinea(linea),ciudParada))
                            {
                                printf("\t\n\t########################################################");
                                printf("\n\t###                                                  ###\n\t");
                                printf("###   La parada ingresada ya pertenece a la linea    ###\n\t");
                                printf("###                                                  ###\n\t");
                                printf("########################################################\n\n");
                                break;
                            }
                            ExisteTramoEntreCiudades(G, DarIdUltimaCiudadLinea(linea), DarIDCiudad(ciudParada), encontre);
                            if(encontre)
                            {
                                ultimoId++;
                                CrearParada(p, ciudParada, ultimoId);
                                InsertParadaEnLista(linea, p);
                                Modify(Lineas, linea);
                                printf("\t\n\t########################################################");
                                printf("\n\t###                                                  ###\n\t");
                                printf("###            Parada agregada con exito             ###\n\t");
                                printf("###                                                  ###\n\t");
                                printf("########################################################\n\n");
                            }
                            else
                            {
                                printf("\t\n\t########################################################");
                                printf("\n\t###                                                  ###\n\t");
                                printf("### No se puede ingresar esa parada ya que no existe ###\n\t");
                                printf("### tramo entre la ultima parada y la nueva.         ###\n\t");
                                printf("###                                                  ###\n\t");
                                printf("########################################################\n\n");
                            }
                        }
                        else
                        {
                            printf("\t\n\t########################################################");
                            printf("\n\t###                                                  ###\n\t");
                            printf("### Ya se ingreso el destino, no se pueden ingresr   ###\n\t");
                            printf("### mas paradas a esta linea.                        ###\n\t");
                            printf("###                                                  ###\n\t");
                            printf("########################################################\n\n");
                        }
                    }
                }
                else
                {
                    printf("\t\n\t########################################################");
                    printf("\n\t###                                                  ###\n\t");
                    printf("###   No existe una ciudad con dicho nombre.         ###\n\t");
                    printf("###                                                  ###\n\t");
                    printf("########################################################\n\n");
                }
            }
            else
            {
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###   No existe una linea con dicho codigo.          ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            break;
        case 6:
            printf("\t\n\t########################################################");
            printf("\n\t###                                                  ###\n\t");
            printf("###         Ingrese el codigo de la linea            ###\n\t");
            printf("###                                                  ###\n\t\t");
            scan(codigo);
            if(Member(Lineas, codigo))
            {
                linea = Find(Lineas, codigo);
                if(CantidadParadasEnLista(linea) > 0)
                    MostrarParadas(linea);
                else
                {
                    printf("\t\n\t########################################################");
                    printf("\n\t###                                                  ###\n\t");
                    printf("###         Dicha linea no posee paradas.            ###\n\t");
                    printf("###                                                  ###\n\t");
                    printf("########################################################\n\n");
                }
            }
            else
            {
                printf("\t\n\t########################################################");
                printf("\n\t###                                                  ###\n\t");
                printf("###   No existe una linea con el codigo ingresado    ###\n\t");
                printf("###                                                  ###\n\t");
                printf("########################################################\n\n");
            }
            break;
        }
    }
    while(opcion != 0);

    //Implementar los destruir
}
