#ifndef _Camion.h
#define _Camion.h

#include "String.h"
#include "Camionero.h"
#include "Objeto.h"

class Camion: public Objeto{
	private:
		String matricula;
		String marca;
		int cantViajesAnuales;
		Camionero * camionero;
	public:
		Camion ();
		Camion (String, String, int);
		Camion (const Camion &);
		String getMatricula ();
		String getMarca ();
		int getCantViajesAnuales ();
		Camionero * getCamionero ();
		void setCamionero (Camionero *);
		virtual int tipoCamion () = 0;
		~Camion ();
		long int getClave();
		virtual void print();
		void setCantViajesAnuales (int);
		virtual float darVolumen () = 0;

};

#endif // _Camion.h
