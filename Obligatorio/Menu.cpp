#include "Menu.h"

void MenuPrincipal(int &opcion)
{
    printf("\t\n\t");
    printf("Menu Principal");
    printf("\n\n\t");
    printf("1 - Agregar tramo entre ciudades");
    printf("\n\t");
    printf("2 - Comprobar secuencia de tramos");
    printf("\n\t");
    printf("3 - Ingresar linea al sistema");
    printf("\n\t");
    printf("4 - Listar lineas");
    printf("\n\t");
    printf("5 - Agregar parada a linea");
    printf("\n\t");
    printf("6 - Listar paradas de una linea");
    printf("\n\n");
    printf("0 - Salir ");
    printf("\n\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);
}
