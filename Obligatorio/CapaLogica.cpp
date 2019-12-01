//#include "stdafx.h"
#include "CapaLogica.h"

CapaLogica :: CapaLogica(): arbolCamioneros(), hashCamiones(){
}

void CapaLogica :: AltaCamionero(long int cedula, String nombre, int tat, Fecha f, TipoMensaje &msj){
    Camionero * c = new Camionero(cedula, nombre, tat, f);
    if(!arbolCamioneros.member(c->getCedula())){
        arbolCamioneros.Insert(c);
        msj = OK;
    }
    else{
        msj = YA_EXISTE_CAMIONERO;
    }
}

void CapaLogica :: ListarCamioneros(Iterador &iter, TipoMensaje &msj){
	if(!arbolCamioneros.esVacio()){
		arbolCamioneros.listarCamioneros(iter);
		msj = OK;
	}else
		msj = DICC_CAMIONEROS_VACIO;
}

void CapaLogica :: ListarCamiones(Iterador &iter, TipoMensaje &msj){
    if(!hashCamiones.esVacio()){
		hashCamiones.listarCamiones(iter);
		msj = OK;
	}else
		msj = DICC_CAMIONES_VACIO;
}

void CapaLogica :: ListarCamionCamionero(Iterador &iter, String mat, TipoMensaje &msj){
    if(!hashCamiones.esVacio()){
        if(hashCamiones.member(mat)){
            hashCamiones.listarCamionCamionero(iter, mat);
            msj = OK;
        }else
            msj = NO_EXISTE_CAMION;
    }
    else{
        msj = DICC_CAMIONES_VACIO;
    }
}

void CapaLogica :: CamionesxTipo(int &sim, int &gran, int &rem, TipoMensaje &msj){
	if(!hashCamiones.esVacio()){
		hashCamiones.camionesXTipo(sim,gran,rem);
		msj = OK;
	}else
		msj = DICC_CAMIONES_VACIO;
}

int CapaLogica :: ContarCamGrandes(Fecha f){
	return 0;
}

void CapaLogica :: AltaCamion(Camion * c,long int cedula, TipoMensaje &msj){
    if(arbolCamioneros.member(cedula)){
        Camionero * ca = arbolCamioneros.Find(cedula);
        c->setCamionero(ca);
        if(!hashCamiones.member(c->getMatricula())){
            hashCamiones.Insert(c);
            msj = OK;
        }
        else{
            msj = YA_EXISTE_CAMION;
        }
    }
    else{
        msj = NO_EXISTE_CAMIONERO;
    }
}

float CapaLogica :: VolumenTotal(){
	return hashCamiones.CalcularVolumen();
}


