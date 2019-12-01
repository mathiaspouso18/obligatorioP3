#ifndef CAPALOGICA_H_INCLUDED
#define CAPALOGICA_H_INCLUDED
#include "Camioneros.h"
#include "Camiones.h"

class CapaLogica{
    private:
        Camioneros arbolCamioneros;
        Camiones hashCamiones;
    public:
         CapaLogica();
         void AltaCamion(Camion*,long int, TipoMensaje &);
         void AltaCamionero(long int, String, int, Fecha, TipoMensaje &);
         void ListarCamioneros(Iterador &, TipoMensaje &);
         void ListarCamiones(Iterador &, TipoMensaje &);
         void ListarCamionCamionero(Iterador &, String, TipoMensaje &);
		 void CamionesxTipo(int &, int &, int &, TipoMensaje &);
         int ContarCamGrandes(Fecha);
         float VolumenTotal ();

};

#endif // CAPALOGICA_H_INCLUDED
