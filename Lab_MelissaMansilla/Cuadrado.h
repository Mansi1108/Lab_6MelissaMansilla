#pragma once
#include "Poligono.h"
class Cuadrado : public Poligono
{
public:
	Cuadrado();
	~Cuadrado();
public:
	double ObArea(double l);
	double ObPerimetro(double l);
};

