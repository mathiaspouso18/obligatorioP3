//#include "stdafx.h"
#include "CamSimple.h"

CamSimple :: CamSimple (String mat, String marc, int cantViajesA, String dep): Camion(mat,marc,cantViajesA), depto(dep){

}

String CamSimple :: getDepto (){
	return depto;
}

void CamSimple :: setDepto (String dep){
	depto = dep;
}

int CamSimple :: tipoCamion (){
	return 1;
}

CamSimple :: ~CamSimple (){
}

void CamSimple :: print(){
    Camion :: print();
    printf(" - Departamento: ");
    depto.print();
}

float CamSimple :: darVolumen (){
return 10;



}
