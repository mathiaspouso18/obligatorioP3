#ifndef _CamSimple.h
#define _CamSimple.h
#include "Camion.h"

class CamSimple : public Camion{
	private:
		String depto;
	public:
		CamSimple (String, String, int, String);
		String getDepto ();
		void setDepto (String);
		int tipoCamion ();
		~CamSimple ();
		void print();
		float darVolumen();
};

#endif
