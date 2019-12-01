#ifndef CAMIONES_H_INCLUDED
#define CAMIONES_H_INCLUDED

#include "CamSimple.h"
#include "CamGrandeRem.h"
#include "Iterador.h"
#include "EnumMensajes.h"

const int B=100;
class Camiones{
	private:
		struct nodo{
				Camion * info;
				nodo * sig;
				};
        typedef nodo * Lista;
		Lista Hash[B];

		int h(String);
		void crearLista (nodo * &);
		void destruirLista (nodo * &);
		bool perteneceLista (nodo *, String);
		void insFrontEnLista (nodo * &, Camion *);
		Camion * obtenerEnLista (nodo *, String);
        //void cargarIterador (nodo *, Iterador &);
	public:
		Camiones();
		bool esVacio();
		bool member(String);
		// precondici�n: el camion no es miembro de la colecci�n
		void Insert(Camion *);
		// precondici�n: el camion es miembro de la colecci�n
		Camion * find(String);
		~Camiones();
		void listarCamiones(Iterador &);
		void listarCamionCamionero(Iterador &, String);
		void camionesXTipo(int &, int &, int&);
		float CalcularVolumen();
};

#endif
