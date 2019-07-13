#include <iostream>
#include "Empresa.h"
#include "Menu.h"
using namespace std;

int main()
{
    int opcion;
    AVL Lineas;
    Diccionario Ciudades;
    Ciudad c;
    Make(Ciudades);
    Make(Lineas);

    do
    {
        MenuPrincipal(opcion);

        switch(opcion)
        {
        }
    }while(opcion != 0);
}
