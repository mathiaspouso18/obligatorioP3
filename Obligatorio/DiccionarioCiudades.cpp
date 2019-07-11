#include "DiccionarioCiudades.h"

void Crear (Hash &H)
{
    int i;
    for(i=0; i<B; i++)
        CrearLista(H[i]);
}

Boolean Pertenece (Hash H, String clave)
{
    int cubeta = h(clave);
    return PerteneceLista (H[cubeta],clave);
}

//Precondición: !Pertenece(H,DarClave(e))
void Insertar (Hash &H, String e)
{
    int cubeta = h(e);
    Insfront(H[cubeta],e);
}

//Precondición: !Pertenece(H,DarClave(e))
int Obtener (Hash H, String clave)
{
    int cubeta = h(clave);
    return ObtenerEnLista (H[cubeta],clave);
}

//Precondición: !Pertenece(H,DarClave(e))
void Eliminar (Hash &H, String clave)
{
    int cubeta = h(clave);
    BorrarEnLista (H[cubeta],clave);
}

int h(String clave)
{
    return SumarASCII(clave) % B;
}
