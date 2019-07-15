#include <iostream>
#include "Menu.h"
#include "ABBLineas.h"
using namespace std;

int main()
{
    int opcion;
    ABB Lineas;
    Linea linea;
    Diccionario Ciudades;
    Make(Ciudades);
    Make(Lineas);

    printf("*****************BIENVENIDO AL SISTEMA DE ADMINISTRACION DE TRANSPORTE*****************\n");
    CargarDiccionarioCiudades(Ciudades);

    do
    {
        MenuPrincipal(opcion);

        switch(opcion)
        {
        case 3:
            Ciudad CiudadO, CiudadD;
            String codigo, co, cd;
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
                String cod;
                printf("\nIngrese el codigo de la linea: ");
                scan(cod);
                if(Member(Lineas, cod))
                {

                }
                else
                    printf("No existe dicha linea");
            break;
        }
    }
    while(opcion != 0);
}
