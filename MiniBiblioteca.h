#ifndef MiniBiblioteca_h

	#define MiniBiblioteca_h

	#include <Arduino.h>

	long transformaEscala(long valorParaTransformar, long valorVelhoMinimo, long valorVelhoMaximo, long valorNovoMinimo, long valorNovoMaximo);
	void converteNumeroBinarioParaDisplay(int pinoA, int pinoB, int pinoC, int pinoD, int estadoPinoA, int estadoPinoB, int estadoPinoC, int estadoPinoD);
	void mostrarNumeroNoDisplay(int valorDisplay, int pinoA, int pinoB, int pinoC, int pinoD);

#endif

