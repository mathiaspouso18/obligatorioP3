#include <iostream>
#include "Empresa.h"
#include "Menu.h"
using namespace std;

int main()
{
    int opcion;
    ABB Lineas;
    Linea linea;
    Diccionario Ciudades;
    Make(Ciudades);
    Make(Lineas);
    Ciudad CiudadO, CiudadD;
    String codigo, co, cd;
    Tramo t;
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
            }
            else
                printf("Ya existe una linea con dicho codigo\n");
            break;
        case 4:
            if(Lineas != NULL)
                ListarLineas(Lineas);
            else
                printf("No hay lineas que mostrar.");
            break;
        case 5:
            break;
        case 6:
            break;

        }
    }
    while(opcion != 0);
}
