#include "Dado.h"
#include <stdlib.h>
#include <time.h>

Dado::Dado(){
	valor = 1;
}

int Dado::tirarDado(){
	srand(time(NULL));
	//TODO: random 1 - 6
	
	valor = (rand()%6) + 1;
	return valor;
}

int Dado::getValor(){
	return valor;
}
