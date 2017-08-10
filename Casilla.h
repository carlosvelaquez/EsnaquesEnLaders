#ifndef CASILLA_H
#define CASILLA_H

#include "Desplazamiento.h"

class Casilla{
	private:
		int numero;
		Desplazamiento desplazamiento;
	public:
		Casilla(int pNumero, Desplazamiento* pDesplazamiento){
			numero = pNumero;
			desplazamiento = *pDesplazamiento;
		}

		int getNumero(){
			return numero;
		}
		Desplazamiento getDesplazamiento(){
			return desplazamiento;
		}
};

#endif
