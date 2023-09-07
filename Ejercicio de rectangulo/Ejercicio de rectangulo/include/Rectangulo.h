#pragma once
#include <iostream>
#include <string>

using namespace std;

class Rectangulo	
{
public:
	Rectangulo();
	~Rectangulo();

	int getHeight()
	{
		return altura;
	}
	int getWeight()
	{
		return ancho;
	}

	int getArea()
	{
		return area;
	}

	int getPerimeter()
	{
		return perimetro;
	}

	void setHeight(int altura);
	void setWeight(int ancho);

	void setArea();
	void setPerimeter();

private:
	int altura;
	int ancho;
	int perimetro;
	int area;

};
