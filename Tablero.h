#ifndef TABLERO_H
#define TABLERO_H

#include "Jugador.h"
#include "Casilla.h"
#include "Dado.h"
#include <iostream>
#include <fstream>

class Tablero{
	private:
		Dado dado;
		Casilla** casillas;
		Jugador** jugadores;
		Desplazamiento** desplazamientos;
		int cantidadJugadores;
		int cantidadDesplazamientos;
		int turno;

	public:
		Tablero(Jugador** pJugadores, int size){
			turno = 0;
			casillas = new Casilla*[100];
			jugadores = pJugadores;
			cantidadJugadores = size;

			cargarDesplazamientos("desp.txt");
			desplazamientos = new Desplazamiento*[cantidadDesplazamientos];

			for(int i = 0; i < 100; i++){

				Desplazamiento* d = new Desplazamiento();

				for(int j = 0; j < cantidadDesplazamientos; j++){
					if((*desplazamientos[j]).getOrigen() == i){
						d = desplazamientos[j];
					}
				}

				Casilla* c = new Casilla(i, d);
				casillas[i] = c;
			}

		}

		void cargarDesplazamientos(string file){
			ifstream inputFile;
			const char* f = file.c_str();

			inputFile.open(f);

			int numDesp;

			if(inputFile.is_open()){
				inputFile >> numDesp;
				cantidadDesplazamientos = numDesp;
				//cout << numDesp << endl;
				desplazamientos = new Desplazamiento*[numDesp];

				int origen;
				int destino;
				int cont = 0;

				while(!inputFile.eof()){
					inputFile >> origen;
					inputFile >> destino;

					//cout << origen << " " << destino << endl;

					Desplazamiento* d = new Desplazamiento(origen, destino);
					desplazamientos[cont] = d;
					cont++;
				}

				inputFile.close();
			}

		}

		void mostrarTablero(){
			int cont = 0;

			for(int i = 9; i >= 0; i--){

				if(cont%2 != 0){
					for(int j = 0; j < 10; j++){
						cout << "| " << imprimirCasilla((i*10)+j);
					}
				}else{
					for(int j = 9; j >= 0; j--){
						cout << "| " << imprimirCasilla((i*10)+j);
					}
				}

				cout << "|" << endl;
				cont ++;
			}

		}

		char imprimirCasilla(int posicion){
			char s = '|';
			Casilla* c = casillas[posicion];

			for(int i = 0; i < cantidadDesplazamientos; i++){
				if(posicion == (*desplazamientos[i]).getOrigen()){
					s = (*desplazamientos[i]).getCharOrigen();
				}else if (posicion == (*desplazamientos[i]).getDestino()){
					s = (*desplazamientos[i]).getCharDestino();
				}
			}

			for(int i = 0; i < cantidadJugadores; i++){
				if((*jugadores[i]).getPosicion() == posicion){
					s = (*jugadores[i]).getFicha();
				}
			}



			if (s == '|'){
				if((*c).getDesplazamiento().getOrigen() == -1){
					s = ' ';
				}else{
					s = (*c).getDesplazamiento().getCharOrigen();
				}

			}


			return s;
		}

		bool gane(){
			bool gano = false;

			for(int i = 0; i < cantidadJugadores; i++){
				Jugador* j = jugadores[i];

				if((*j).getPosicion() == 99){
					gano = true;
				}
			}

			return gano;
		}

		void jugar(){
			while(!gane()){
				string t;

				cout << "------------------------" << endl;

				Jugador* j = jugadores[turno];

				cout << "Es el turno de " << (*j).getNombre() << endl;
				mostrarTablero();

				cout <<  endl << "Escriba D y presione ENTER para tirar el dado - ";
				cin >> t;

				int avance = dado.tirarDado();

				cout << "¡El dado ha caido en el número " << avance << "!" << endl;
				cout << (*j).getNombre() << " avanza " << avance << " casillas..." << endl;

				int nPos;

				if((*j).getPosicion() + avance > 99){
					nPos = 99;
				}else{
					nPos = (*j).getPosicion() + avance;
				}

				(*j).setPosicion(nPos);

				actualizarPosiciones();

				if(turno+1 >= cantidadJugadores){
					turno = 0;
				}else{
					turno++;
				}
			}
			Jugador* j;

			for(int i = 0; i < cantidadJugadores; i++){
				if((*jugadores[i]).getPosicion() == 99){
					j = jugadores[i];
				}
			}

			cout << "-------------------------" << endl << "¡" <<  (*j).getNombre() << " ha ganado! " << endl;
		}

		void actualizarPosiciones(){
			for(int i = 0; i < cantidadJugadores; i++){
				for(int j = 0; j < cantidadDesplazamientos; j++){
					if((*jugadores[i]).getPosicion() == (*desplazamientos[j]).getOrigen()){
						(*jugadores[i]).setPosicion((*desplazamientos[j]).getDestino());

						if((*desplazamientos[j]).getCharOrigen() == 'h'){
							cout << "¡" << (*jugadores[i]).getNombre() << " ha caído en una escalera!" << endl;
						}else{
							cout << "¡" << (*jugadores[i]).getNombre() << " ha caído en una serpiente!" << endl;

						}
					}
				}
			}
		}
};

#endif
