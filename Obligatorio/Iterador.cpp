//#include "stdafx.h"
#include "Iterador.h"

Iterador :: Iterador (){
	prim = NULL;
	ulti = NULL;
	actual = NULL;
}

void Iterador :: insertar (Objeto * o){
	Nodo * nuevo = new Nodo;
	nuevo->info = o;
	nuevo->sig = NULL;
	if (prim == NULL){
		prim = nuevo;
		ulti = nuevo;
		actual = nuevo;
	}else{
		ulti->sig = nuevo;
		ulti = ulti -> sig;
	}
}

bool Iterador :: hayMasObjetos (){
	return (bool) (actual != NULL);
}

Objeto * Iterador :: proximoObjeto (){
	Objeto * resu = actual -> info;
	actual = actual -> sig;
	return resu;
}

Iterador :: ~Iterador(){
	 Nodo * aux = prim;
	 while (aux != NULL){
		 prim = prim -> sig;
		 delete aux;
		 aux = prim;
	 }
 }
