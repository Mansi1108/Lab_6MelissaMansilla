#include "PRegulares.h"

double PRegulares::ObPerimetro(double NumLados, double Largolado)
{
	return (NumLados * Largolado);
}

double PRegulares::ObArea(double NumLados, double largoLado, double apotema)
{
	return  ((NumLados * largoLado * apotema) / 2);
}

PRegulares::PRegulares()
{
}


PRegulares::~PRegulares()
{
}
