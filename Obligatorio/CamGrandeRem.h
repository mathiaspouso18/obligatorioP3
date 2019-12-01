#include "CamGrande.h"

class CamGrandeRem : public CamGrande{
	private:
		float capRemolque;
	public:
		CamGrandeRem (String, String, int, float, Fecha, float);
		float getCapRemolque ();
		void setCapRemolque (float);
		int tipoCamion ();
		~CamGrandeRem ();
		void print();
		float darVolumen();
};
