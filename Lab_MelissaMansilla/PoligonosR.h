#pragma once
class PoligonosR
{
public:
	PoligonosR();
	~PoligonosR();
public:
	virtual double ObtenerArea(double NumLados, double Medidalado);
	virtual double ObtenerPerimetro(double NumLados, double MedidaLado, double apotema);
};

