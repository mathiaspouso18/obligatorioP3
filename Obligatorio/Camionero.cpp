//#include "stdafx.h"
#include "Camionero.h"

#ifndef Constructores
Camionero::Camionero():nombre(), fechaNacimiento()
{
    cedula = 0;
    cantTatuajes = 0;
}

Camionero::Camionero(long int pCedula, String pNombre, int pCantTatuajes, Fecha pFechaNacimiento):nombre(pNombre), fechaNacimiento(pFechaNacimiento)
{
    cedula = pCedula;
    cantTatuajes = pCantTatuajes;
}

Camionero::Camionero(const Camionero &otro):nombre(otro.nombre), fechaNacimiento(otro.fechaNacimiento)
{
    cedula = otro.cedula;
    cantTatuajes = otro.cantTatuajes;
}

Camionero::~Camionero()
{
}
#endif // Constructores

#ifndef Getters

long int Camionero::getCedula()
{
    return cedula;
}

String Camionero::getNombre()
{
    return nombre;
}

int Camionero::getCantTatuajes()
{
    return cantTatuajes;
}

Fecha Camionero::getFechaNacimiento()
{
    return fechaNacimiento;
}

#endif // Getters

#ifndef Setters

void Camionero::setCedula(long int pCedula)
{
    cedula = pCedula;
}

void Camionero::setNombre(String pNombre)
{
    nombre = pNombre;
}

void Camionero::setCantTatuajes(int pCantTatuajes)
{
    cantTatuajes = pCantTatuajes;
}

void Camionero::setFechaNacimiento(Fecha pFechaNacimiento)
{
    fechaNacimiento = pFechaNacimiento;
}
#endif // Setters

long int Camionero :: getClave(){
    return cedula;
}

void Camionero :: print(){
    printf("\n\tCedula: %d - ", cedula);
    printf("Nombre: ");
    nombre.print();
    printf(" - ");
    printf("Cantidad de tatuajes: %d - ", cantTatuajes);
    printf("Fecha de nacimiento: ");
    fechaNacimiento.print();
}
