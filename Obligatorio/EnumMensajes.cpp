//#include "stdafx.h"
#include "EnumMensajes.h"

void MostrarMensaje(TipoMensaje tipo){

    switch (tipo){
        case OK: printf("\tProcedimiento finalizado con exito!\n");break;
        case YA_EXISTE_CAMIONERO: printf("\tERROR: El camionero ya existe en el sistema\n");break;
        case NO_EXISTE_CAMIONERO: printf("\tERROR: El camionero no existe en el sistema\n");break;
        case YA_EXISTE_CAMION: printf("\tERROR: El camion ya existe en el sistema\n");break;
        case NO_EXISTE_CAMION: printf("\tERROR: El camion no existe en el sistema\n");break;
		case DICC_CAMIONEROS_VACIO: printf("\tERROR: No existen camioneros ingresados en el sistema\n");break;
		case DICC_CAMIONES_VACIO: printf("\tERROR: No existen camiones ingresados en el sistema\n");break;

    }
}
