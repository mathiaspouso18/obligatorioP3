#include "Parada.h"

/*** Crear Parada ***/
void CrearParada (Parada &p, Ciudad c, int x){
    p.ParadaCiudad = c;
    p.IdParada = x;
}

Ciudad DarCiudadParada(Parada p)
{
    return p.ParadaCiudad;
}

int DarIDParada(Parada p)
{
    return p.IdParada;
}

void DarNombreCiudadParada(Parada p, String &ciudadParada)
{
    DarNombreCiudad(p.ParadaCiudad, ciudadParada);
}

void MostrarDatosParada(Parada p)
{
    String ciudad;
    DarNombreCiudad(p.ParadaCiudad, ciudad);
    printf("\n\t- Id Parada: %d | ", p.IdParada);
    printf("Ciudad: ");
    print(ciudad);
    printf("\n");
}
