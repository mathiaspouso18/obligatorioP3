#ifndef _CamGrande.h
#define _CamGrande.h

#include "Camion.h"
#include "Fecha.h"
class CamGrande : public Camion{
	private:
		float volumen;
		Fecha fechaAdquirido;
	public:
		CamGrande (String, String, int, float, Fecha);
		float getVolumen ();
		Fecha getFechaAdquirido ();
		void setVolumen (float);
		void setFechaAdquirido (Fecha);
		int tipoCamion ();
		bool tieneRemolque();
		~CamGrande ();
		void print();
		float darVolumen();
};

#endif // _CamGrande.h
