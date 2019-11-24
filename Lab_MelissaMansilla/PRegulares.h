#pragma once
#include "PoligonosR.h"
class PRegulares : public PoligonosR
{
public:
	PRegulares();
	~PRegulares();
public:
	double ObPerimetro(double NumLados, double Largolado);
	double ObArea(double NumLados, double largoLado, double apotema);
};

