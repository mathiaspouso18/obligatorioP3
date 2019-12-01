#ifndef ITERADOR_H_INCLUDED
#define ITERADOR_H_INCLUDED
#include "Objeto.h"

class Iterador{
	private:
		struct Nodo{
			Objeto * info;
			Nodo * sig;
		};
		Nodo * prim;
		Nodo * ulti;
		Nodo * actual;
	public:
		Iterador();
		void insertar(Objeto *);
		bool hayMasObjetos();
		Objeto * proximoObjeto();
		~Iterador();
};

#endif // ITERADOR_H_INCLUDED
