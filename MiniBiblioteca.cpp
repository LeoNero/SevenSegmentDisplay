#include "MiniBiblioteca.h"

long transformaEscala(long valorParaTransformar, long valorVelhoMinimo, long valorVelhoMaximo, long valorNovoMinimo, long valorNovoMaximo) {
	long novoValor = ((valorParaTransformar - valorVelhoMinimo) * (valorNovoMaximo - valorNovoMinimo) / (valorVelhoMaximo - valorVelhoMinimo)) + valorNovoMinimo;

	return novoValor;
}

void converteNumeroBinarioParaDisplay(int pinoA, int pinoB, int pinoC, int pinoD, int estadoPinoA, int estadoPinoB, int estadoPinoC, int estadoPinoD) {
	if ((estadoPinoA == 0) || (estadoPinoA == 1) || (estadoPinoB == 0) || (estadoPinoB == 1) || (estadoPinoC == 0) || (estadoPinoC == 1) || (estadoPinoD == 0) || (estadoPinoD == 1)) {
		digitalWrite(pinoA, estadoPinoA);
		digitalWrite(pinoB, estadoPinoB);
		digitalWrite(pinoC, estadoPinoC);
		digitalWrite(pinoD, estadoPinoD);
	} 
}


void mostrarNumeroNoDisplay(int valorDisplay, int pinoA, int pinoB, int pinoC, int pinoD) {
	
	int a = pinoA;
	int b = pinoB;
	int c = pinoC;
	int d = pinoD;

	switch (valorDisplay) {
	    case 0:
	      converteNumeroBinarioParaDisplay(a, b, c, d, 0, 0, 0, 0);
	      break;

	    case 1:
	      converteNumeroBinarioParaDisplay(a, b, c, d, 1, 0, 0, 0);
	      break;

	    case 2:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 0, 1, 0, 0);
	    	break;

	    case 3:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 1, 1, 0, 0);
	    	break;

	    case 4:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 0, 0, 1, 0);
	    	break;

	    case 5:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 1, 0, 1, 0);
	    	break;

	    case 6:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 0, 1, 1, 0);
	    	break;

	    case 7:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 1, 1, 1, 0);
	    	break;

	    case 8:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 0, 0, 0, 1);
	    	break;

	    case 9:
	    	converteNumeroBinarioParaDisplay(a, b, c, d, 1, 0, 0, 1);
	    	break;

	    default:
	       break;
	}
}

