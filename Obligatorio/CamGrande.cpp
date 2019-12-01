//#include "stdafx.h"
#include "CamGrande.h"

CamGrande :: CamGrande (String mat, String marc, int cantViajesA, float vol, Fecha fecAdquirido): Camion(mat,marc,cantViajesA), fechaAdquirido(fecAdquirido){
	volumen = vol;
}

float CamGrande :: getVolumen (){
	return volumen;
}

Fecha CamGrande :: getFechaAdquirido (){
	return fechaAdquirido;
}

void CamGrande :: setVolumen (float vol){
	volumen = vol;
}

void CamGrande :: setFechaAdquirido (Fecha fecAdquirido){
	fechaAdquirido = fecAdquirido;
}

int CamGrande :: tipoCamion (){
	return 2;
}

CamGrande :: ~CamGrande (){
}

void CamGrande :: print(){
    Camion :: print();
    printf(" - Volumen: - %5.2f", volumen);
    printf(" - Fecha adquirido: ");
    fechaAdquirido.print();
}

float CamGrande :: darVolumen(){
    float a=getVolumen();
return getVolumen();

}
