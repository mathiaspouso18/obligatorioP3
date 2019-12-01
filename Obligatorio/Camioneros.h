#ifndef CAMIONEROS_H_INCLUDED
#define CAMIONEROS_H_INCLUDED

#include "Iterador.h"
#include "Camionero.h"
#include "EnumMensajes.h"

class Camioneros
{
    private:
        struct Nodo
        {
            Camionero * info;
            Nodo * hizq;
            Nodo * hder;
        };

        Nodo * ABB;

        void destruirArbol (Nodo * &);
        bool perteneceEnArbol (Nodo *, long int);
        void insertEnArbol (Nodo * &, Camionero *);
        Camionero * obtenerEnArbol (Nodo *, long int);
        void cargarIterador (Nodo *, Iterador &);

    public:
        Camioneros ();
        ~ Camioneros ();
		bool esVacio();
        bool member (long int);
        void Insert (Camionero *);
        Camionero * Find (long int);
        void listarCamioneros (Iterador &);
};

#endif // CAMIONEROS_H_INCLUDED
