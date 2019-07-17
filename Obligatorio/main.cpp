#include <iostream>
#include "Empresa.h"
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
        case 1:
            printf("Crear un nuevo tramo\n");
            printf("Ingese ciudad origen del tramo: ");
            scan(co);
            if(!Member(Ciudades,co))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\nLa ciudad ingresada no esta en el recorrido; Por favor intente nuevamente :");
                    scan(co);
                    if(Member(Ciudades,co))
                        encontre = TRUE;
                }
            }
            printf("\nIngese ciudad destino del tramo: ");
            scan(cd);
            while(streq(co,cd))
            {
                printf("\nLa ciudad destino no puede coincidir con el origen del tramo; Por favor, intente nuevamente : ");
                scan(cd);
            }
            if(!Member(Ciudades,cd))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\nLa ciudad ingresada no esta en el recorrido; Por favor intente nuevamente :");
                    scan(cd);
                    if(Member(Ciudades,cd))
                        encontre = TRUE;
                }
            }
            CiudadO = Find(Ciudades,co);
            CiudadD = Find(Ciudades,cd);
            CrearTramo(t,CiudadO,CiudadD);
            ExisteTramoEntreCiudades(G, DarIDCiudad(CiudadO), DarIDCiudad(CiudadD), encontre);
            if(!encontre)
            {
                InsertarAristaGrafo(G,t);
                printf("\n\n\n#### Tramo creado con exito ####\n\n\n");
            }
            else
            {
                printf("\n\n\n#### El tramo creado ya existe ####\n\n\n");
            }
            break;
        case 2:
            //comprobar secuencia de tramos
            printf("\nIngese ciudad origen del tramo: ");
            scan(co);
            if(!Member(Ciudades,co))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\nLa ciudad ingresada no esta en el recorrido\nPor favor intente nuevamente :");
                    scan(co);
                    if(Member(Ciudades,co))
                        encontre = TRUE;
                }
            }
            printf("\nIngese ciudad destino del tramo: ");
            scan(cd);
            while(streq(co,cd))
            {
                printf("\nLa ciudad destino no puede coincidir con el origen del tramo\nPor favor, intente nuevamente : ");
                scan(cd);
            }
            if(!Member(Ciudades,cd))
            {
                encontre = FALSE;
                while(!encontre)
                {
                    printf("\nLa ciudad ingresada no esta en el recorrido\nPor favor intente nuevamente :");
                    scan(cd);
                    if(Member(Ciudades,cd))
                        encontre = TRUE;
                }
            }
            CiudadO = Find(Ciudades,co);
            CiudadD = Find(Ciudades,cd);
            CrearTramo(t,CiudadO,CiudadD);
            ExisteTramoEntreCiudades(G, DarIDCiudad(CiudadO), DarIDCiudad(CiudadD), encontre);
            if(!encontre)
            {
                printf("\n\n\n#### El tramo no esta en los recorridos de la empresa ####\n\n\n");
            }
            else
            {
                printf("\n\n\n#### El tramo se encuentra actualmente en los recorridos de la empresa ####\n\n\n");
            }
            break;
        case 3:
            printf("\nIngrese codigo de linea: ");
            scan(codigo);
            if(!Member(Lineas, codigo))
            {
                printf("Ingrese Ciudad de origen: ");
                scan(co);
                while(!Member(Ciudades, co))
                {
                    printf("No existe la ciudad con el nombre ");
                    print(co);
                    printf("; Ingrese nuevamente: ");
                    scan(co);
                }
                CiudadO = Find(Ciudades, co);
                printf("Ingrese Ciudad de destino: ");
                scan(cd);
                while(!Member(Ciudades, cd))
                {
                    printf("No existe la ciudad con el nombre ");
                    print(cd);
                    printf("; Ingrese nuevamente: ");
                    scan(cd);
                }
                CiudadD = Find(Ciudades, cd);
                CrearLinea(linea, codigo, CiudadO, CiudadD);
                Insert(Lineas, linea);
                printf("\n#### Linea creada con exito ####\n");
            }
            else
                printf("Ya existe una linea con dicho codigo\n");
            break;
        case 4:
            if(Lineas != NULL)
                ListarLineas(Lineas);
            else
                printf("\nNo hay lineas que mostrar.\n");
            break;
        case 5:
            int ultimoId;
            printf("\nIngrese codigo de linea: ");
            scan(codigo);
            if(Member(Lineas, codigo))
            {
                linea = Find(Lineas, codigo);
                ultimoId = UltimoIdParada(linea);
                printf("Ingrese ciudad para la parada: ");
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
                            printf("\n#### Parada agregada con exito ####\n");
                        }
                        else
                            printf("\nLa primer ciudad debe coincidir con la ciudad de origen.\n");
                    }
                    else
                    {
                        if(!CerroLinea(linea))
                        {
                            ciudParada = Find(Ciudades, co);
                            ExisteTramoEntreCiudades(G, DarIdUltimaCiudadLinea(linea), DarIDCiudad(ciudParada), encontre);
                            if(encontre)
                            {
                                ultimoId++;
                                CrearParada(p, ciudParada, ultimoId);
                                InsertParadaEnLista(linea, p);
                                Modify(Lineas, linea);
                                printf("\n#### Parada agregada con exito ####\n");
                            }
                            else
                                printf("\nNo se puede ingresar esa parada ya que no existe un tramo entre la ultima parada y la nueva.\n");
                        }
                        else
                            printf("\nYa se ingreso el destino, no puede ingresar mas paradas.\n");
                    }
                }
                else
                    printf("\nNo existe una ciudad con dicho nombre.\n");
            }
            else
                printf("\nNo existe una linea con dicho codigo.\n");
            break;
        case 6:
            printf("\nIngrese codigo de linea: ");
            scan(codigo);
            if(Member(Lineas, codigo))
            {
                if(CantidadParadasEnLista(linea) > 0)
                    MostrarParadas(linea);
                else
                    printf("\nDicha linea no posee paradas.\n");
            }
            else
                printf("\nNo existe una linea con dicho codigo.\n");
            break;
        }
    }
    while(opcion != 0);
}
