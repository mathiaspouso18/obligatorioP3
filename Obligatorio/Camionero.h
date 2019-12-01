#ifndef _Camionero_h
#define _Camionero_h

#include "Fecha.h"
#include "String.h"
#include "Objeto.h"
#include <stdio.h>

class Camionero : public Objeto{
    private:
        long int cedula;
        String nombre;
        int cantTatuajes;
        Fecha fechaNacimiento;
    public:
        Camionero();
        Camionero(long int, String, int, Fecha);
        Camionero(const Camionero&);
        ~Camionero();
        long int getCedula();
        String getNombre();
        int getCantTatuajes();
        Fecha getFechaNacimiento();
        void setCedula(long int);
        void setNombre(String);
        void setCantTatuajes(int);
        void setFechaNacimiento(Fecha);
        long int getClave();
        void print();
};

#endif // _Camionero_h
