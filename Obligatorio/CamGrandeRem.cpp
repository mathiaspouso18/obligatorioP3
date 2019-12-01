//#include "stdafx.h"
#include "CamGrandeRem.h"

CamGrandeRem :: CamGrandeRem (String mat, String marc, int cantViajesA, float vol, Fecha fecAdquirido, float capacidad): CamGrande(mat,marc,cantViajesA, vol, fecAdquirido){
	capRemolque = capacidad;
}

float CamGrandeRem :: getCapRemolque (){
	return capRemolque;
}

void CamGrandeRem :: setCapRemolque (float capacidad){
	capRemolque = capacidad;
}

int CamGrandeRem :: tipoCamion (){
	return 3;
}

CamGrandeRem :: ~CamGrandeRem (){
}

void CamGrandeRem :: print(){
    //Camion::print();
    CamGrande::print();
    printf("- Capacidad de remolque: %5.2f", capRemolque);
}


float CamGrandeRem :: darVolumen(){
return getVolumen()+getCapRemolque();

}
