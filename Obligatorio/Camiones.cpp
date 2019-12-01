//#include "stdafx.h"
#include "Camiones.h"

int Camiones :: h(String clave){
	return (clave.stringLongInt() % B);
}

void Camiones :: crearLista (nodo * &L){
	L = NULL;
}

 void Camiones :: destruirLista (nodo * &L){
	 nodo * aux = L;
	 while (aux != NULL){
		 L = aux->sig;
		 delete (aux);
		 aux = L;
	 }
	 L = aux;
 }

 bool Camiones :: perteneceLista (nodo * L, String mat){
	 bool existe = false;
	 while (!existe && L != NULL)
		if (L->info->getMatricula() == mat)
			existe = true;
		else
			L = L->sig;
	 return existe;
 }

 void Camiones :: insFrontEnLista (nodo * &L, Camion * cam){
	 nodo * aux = new nodo;
	 aux->info = cam;
	 aux->sig = L;
	 L = aux;
 }

 Camion * Camiones :: obtenerEnLista (nodo * L, String mat){
	 while (!(L->info->getMatricula() == mat))
		L = L->sig;
	 return (L->info);
 }

Camiones :: Camiones (){
	for (int i=0; i < B; i++)
		crearLista(Hash[i]);
}

bool Camiones :: esVacio(){
	bool esVacio = true;
	int i=0;
    while(i < B && esVacio){
        Lista L = Hash[i];
        if(L != NULL && L->info != NULL){
            esVacio = false;
        }
        else{
            i++;
        }
    }

    return esVacio;
}

bool Camiones :: member (String mat){
	int cubeta = h(mat);
	return perteneceLista (Hash[cubeta], mat);
}

void Camiones :: Insert (Camion * cam){
	int cubeta = h(cam->getMatricula());
	insFrontEnLista (Hash[cubeta], cam);
}

Camion * Camiones :: find (String mat){
	int cubeta = h(mat);
	return obtenerEnLista (Hash[cubeta], mat);
}

Camiones :: ~Camiones (){
	for (int i=0; i < B; i++)
		destruirLista(Hash[i]);
}

void Camiones :: listarCamiones(Iterador &iter){
    for(int i = 0; i < B; i++){
        Camion * cam;
        Lista L = Hash[i];
        while(L != NULL){
            cam = L->info;
            iter.insertar(cam);
            L = L->sig;
        }
    }
}

void Camiones :: listarCamionCamionero(Iterador &iter, String mat){
    int cubeta = h(mat);
    Camion * cam = obtenerEnLista(Hash[cubeta], mat);
    iter.insertar (cam);
    Camionero * camionero = cam->getCamionero();
    iter.insertar(camionero);
}

void Camiones :: camionesXTipo(int &sim, int &gran, int&rem){
	for(int i=0; i<B; i++){
		Lista L = Hash[i];
		while(L != NULL){
			switch(L->info->tipoCamion()){
				case 1:	sim++; break;
				case 2: gran++; break;
				case 3: rem++; break;
			}
			L = L->sig;
		}
	}
}

/*void Camiones :: cargarIterador (camion * cam, Iterador &iter)
{
		iter.insertar (cam);
}*/

float Camiones :: CalcularVolumen(){
     float total=0;
     int opcion;
     for(int i = 0; i < B; i++){
        Lista L = Hash[i];
        while(L != NULL){
            switch(L->info->tipoCamion()){
            case 1:
                total=total+L->info->darVolumen()*L->info->getCantViajesAnuales();
                break;
            case 2:
                total=total+L->info->darVolumen()*L->info->getCantViajesAnuales();
                break;
            case 3:
                total=total+L->info->darVolumen()*L->info->getCantViajesAnuales();

                break;
            }
            L = L->sig;
        }
    }
    return total;
}
