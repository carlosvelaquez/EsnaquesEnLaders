#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
using namespace std;

class Jugador{
	private:
		string nombre;
		char ficha;
		int posicion;
	public:
		Jugador(string pNombre, char pFicha){
			posicion = 0;
			nombre = pNombre;
			ficha = pFicha;
		}

		string getNombre(){
			return nombre;
		}

		char getFicha(){
			return ficha;
		}

		int getPosicion(){
			return posicion;
		}

		void setPosicion(int pPosicion){
			posicion = pPosicion;
		}
};

#endif
