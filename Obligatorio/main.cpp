#include <iostream>
#include "Empresa.h"
#include "Menu.h"
using namespace std;

int main()
{
    int opcion;
    ABB Lineas;
    Linea linea;
    Grafo G;
    CrearGrafo(G);
    Diccionario Ciudades;
    Make(Ciudades);
    Make(Lineas);
    Ciudad CiudadO, CiudadD;
    String codigo, co, cd;
    Tramo t;
    Parada p;
    Boolean encontre;

    printf("****************** Bienvenido al sistema de gestion de transporte ******************\n");
    CargarDiccionarioCiudades(Ciudades);

    do
    {
        MenuPrincipal(opcion);

        switch(opcion)
        {
        case 1:
            printf("\n\n\tCrear un nuevo tramo\n");
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
            while(streq(co,cd)){
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
            InsertarAristaGrafo(G,t);
            printf("\n\n\n#### Tramo creado con exito ####\n\n\n");
            break;
        case 2:
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
                    CiudadO = Find(Ciudades, co);
                    ultimoId++;
                    CrearParada(p, CiudadO, ultimoId);
                    InsertParadaEnLista(linea, p);
                }
                else
                    printf("\nNo existe una ciudad con dicho nombre.\n");
            }
            else
                printf("\nNo existe una linea con dicho codigo.\n");
            break;
        case 6:
            break;

        }
    }
    while(opcion != 0);
}
