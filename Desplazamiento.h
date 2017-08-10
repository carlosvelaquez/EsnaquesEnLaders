#ifndef DESPLAZAMIENTO_H
#define DESPLAZAMIENTO_H

class Desplazamiento{
	private:
		int origen;
		int destino;
		char charOrigen;
		char charDestino;

	public:
		Desplazamiento(){
			origen = -1;
		}

		Desplazamiento(int pOrigen, int pDestino){
			origen = pOrigen;
			destino = pDestino;

			if(origen > destino){
				charOrigen = 'S';
				charDestino = 's';
			}else{
				charOrigen = 'h';
				charDestino = 'H';
			}
		}

		int getOrigen(){
			return origen;
		}
		int getDestino(){
			return destino;
		}

		char getCharOrigen(){
			return charOrigen;
		}

		char getCharDestino(){
			return charDestino;
		}
};

#endif
