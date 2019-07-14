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

    do
    {
        MenuPrincipal(opcion);

        switch(opcion)
        {
        case 1:
            CargarDiccionarioCiudades(Ciudades);
            break;
        case 4:
            Ciudad CiudadO, CiudadD;
            String codigo, co, cd;
            printf("\nIngrese codigo de linea: ");
            scan(codigo);
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
            break;
        case 5:
            ListarLineas(Lineas);
            break;
        }
    }
    while(opcion != 0);
}
