#pragma once
class Poligono2
{
public:
	Poligono2();
	~Poligono2();
public:
	virtual double ObArea(double largo); 
	virtual double ObPerimetro(double largo);
	void DefinirLado(double l) {Lado = l;}
protected:
	double Lado;
};

