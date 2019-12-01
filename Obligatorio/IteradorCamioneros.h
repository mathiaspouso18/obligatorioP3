#ifndef ITERADORCAMIONEROS_H_INCLUDED
#define ITERADORCAMIONEROS_H_INCLUDED
#include "Camionero.h"

class IteradorCamioneros{

private:
    typedef struct NodoL
    {
        Camionero * info;
        NodoL * sig;
    }NodoCamionero;

    NodoCamionero * prim;
    NodoCamionero * ult;
    NodoCamionero * actual;

    /*typedef struct
    {
        NodoCamionero * prim;
        NodoCamionero * ult;
    } IteradorCam;*/

public:
    IteradorCamioneros();
    void insertar(Camionero *);
    bool hayMasCamioneros();
    Camionero * proximoCamionero();
    ~IteradorCamioneros();
};


#endif // ITERADORCAMIONEROS_H_INCLUDED
