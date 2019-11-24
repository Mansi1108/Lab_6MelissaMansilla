#include "TrianguloE.h"
double TrianguloE::ObArea(double lado) {
	return (1.73/4)*(Lado *Lado) ;
}

double TrianguloE::ObPerimetro(double lado) {
	return 3 * Lado;
}


TrianguloE::TrianguloE()
{
}


TrianguloE::~TrianguloE()
{
}
