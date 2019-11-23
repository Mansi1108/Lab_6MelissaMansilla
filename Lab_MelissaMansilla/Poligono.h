#pragma once
class Poligono
{
public:
	Poligono();
	~Poligono();
public:
	virtual double ObArea(double l) = 0;
	virtual double ObPerimetro(double l);
};

