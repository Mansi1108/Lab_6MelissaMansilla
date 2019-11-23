#pragma once
class Poligono2
{
public:
	Poligono2();
	~Poligono2();
public:
	virtual double ObtenerArea() = 0; 
	virtual double ObtenerPerimetro() = 0;
	void DefinirLado(double l) {Lado = l;}
protected:
	double Lado;
};

