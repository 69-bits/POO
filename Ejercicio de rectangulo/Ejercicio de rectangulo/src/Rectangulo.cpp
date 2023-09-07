#include "Rectangulo.h"

Rectangulo::Rectangulo()
{
}

Rectangulo::~Rectangulo()
{
}

void Rectangulo::setHeight(int height)
{
	altura = height;
}
void Rectangulo::setWeight(int weight)
{
	ancho = weight;
}
void Rectangulo::setArea()
{
	area = altura * ancho;
}
void Rectangulo::setPerimeter()
{
	perimetro = 2 * (altura + ancho);
}