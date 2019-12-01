// ObligatorioP4.cpp: define el punto de entrada de la aplicación de consola.
//
#include "Menu.h"
//#include "stdafx.h"

void MenuPrincipal (int &opcion){
    printf("\t\n\t");
    printf("Menu Principal");
    printf("\n\n\t");
    printf("1 - Ingresar nuevo camion");
    printf("\n\t");
    printf("2 - Listado de camiones registrados en el sistema");
    printf("\n\t");
    printf("3 - Listar un camion");
    printf("\n\t");
    printf("4 - Ingresar nuevo camionero");
    printf("\n\t");
    printf("5 - Listado de camioneros registrados en el sistema");
    printf("\n\t");
    printf("6 - Cantidad de metros cubicos anuales de toda la flota de camiones registrados");
    printf("\n\t");
    printf("7 - Modificar cantidad de viajes anuales de un camion especifico");
    printf("\n\t");
    printf("8 - Cantidad de camiones de cada tipo");
    printf("\n\t");
    printf("9 - Listar camionero con la mayor cantidad de tatuajes");
    printf("\n\t");
    printf("10 - Cantidad de camiones registrados a partir de una fecha");
    printf("\n\t");
    printf("0 - Salir ");
    printf("\n\n");
    printf("Ingrese una opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);
}

