//#include "stdafx.h"
#include "Camion.h"

Camion :: Camion (): matricula("XXX0000"), marca(){
	cantViajesAnuales = 0;
	camionero = NULL;
}

Camion :: Camion (String mat, String marc, int cantViajesA): matricula(mat), marca(marc){
	cantViajesAnuales = cantViajesA;
	camionero = NULL;
}

Camion :: Camion (const Camion &otro): matricula(otro.matricula), marca(otro.marca){
	cantViajesAnuales = otro.cantViajesAnuales;
	camionero = otro.camionero;
}

String Camion :: getMatricula (){
	return matricula;
}

String Camion :: getMarca (){
	return marca;
}

int Camion :: getCantViajesAnuales (){
	return cantViajesAnuales;
}

Camionero * Camion :: getCamionero (){
	return camionero;
}

void Camion :: setCamionero (Camionero * c){
	camionero = c;
}

void Camion :: setCantViajesAnuales(int pCantViajesAnuales){
    cantViajesAnuales = pCantViajesAnuales;
}

Camion :: ~Camion (){
}

long int Camion :: getClave(){
    return matricula.stringLongInt();
}

void Camion :: print(){
    printf("\n\tMatricula: ");
    matricula.print();
    printf(" - Marca: ");
    marca.print();
    printf(" - Cantidad de viajes anuales: %d", cantViajesAnuales);
}
