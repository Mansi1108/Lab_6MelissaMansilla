#include "TrianguloE.h"
double TrianguloE::ObArea() {
	return (1.73/4)*(Lado *Lado) ;
}

double TrianguloE::ObPerimetro() {
	return 3 * Lado;
}


TrianguloE::TrianguloE()
{
}


TrianguloE::~TrianguloE()
{
}
