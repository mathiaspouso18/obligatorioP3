#include "Menu.h"

void MenuPrincipal(int &opcion)
{
    printf("\t\n\t");
    printf("Menu Principal");
    printf("\n\n\t");
    printf("1 - Agregar todas las ciudades");
    printf("\n\t");
    printf("2 - Agregar tramo entre ciudades");
    printf("\n\t");
    printf("3 - Comprobar secuencia de tramos");
    printf("\n\t");
    printf("4 - Ingresar linea al sistema");
    printf("\n\t");
    printf("5 - Listar lineas");
    printf("\n\t");
    printf("6 - Agregar parada a linea");
    printf("\n\t");
    printf("7 - Listar paradas de una linea");
    printf("\n\n\t");
    printf("0 - Salir ");
    printf("\n\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
}
