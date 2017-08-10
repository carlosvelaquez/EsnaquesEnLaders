#include "Jugador.h"
#include <string>

using namespace std;

string Jugador::getNombre(){
	return nombre;
}

string Jugador::getColor(){
	return color;
}

void Jugador::setNombre(string pNombre){
	nombre = pNombre;
}

void Jugador::setColor(string pColor){
	color = pColor;
}
