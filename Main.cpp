#include <iostream>
#include "Tablero.h"

using namespace std;

int main(){
	int cantidadJugadores;

	cout << "Bienvenido a Esnaques en Laders" << endl << "----------------------------" << endl
		<< "Cuantas personas van a jugar? - ";

	cin >> cantidadJugadores;
	Jugador** jugadores = new Jugador*[cantidadJugadores];

	cout << endl;
	cout << "Ingrese los datos de los jugadores." << endl;


	for(int i = 0; i < cantidadJugadores; i++){
		cout << endl << "Jugador " << i + 1 << endl;
		cout << "Nombre: ";
		string nombre;
		cin >> nombre;

		cout << "Ficha: ";
		char ficha;
		cin >> ficha;

		Jugador* j = new Jugador(nombre, ficha);
		jugadores[i] = j;
	}

	cout << "----------------------------" << endl;

	Tablero* tablero = new Tablero(jugadores, cantidadJugadores);
	(*tablero).jugar();


	return 0;
}
