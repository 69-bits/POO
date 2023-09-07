#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
	float num1;
	float num2;

	cout << "Hey, dame una altura..." << endl;
	cin >> num1;

	cout << "Hey, dame un ancho..." << endl;
	cin >> num2;

	Rectangulo figura;
	figura.setHeight(num1);
	figura.setWeight(num2);
	figura.setArea();
	figura.setPerimeter();
	cout << "altura: " << figura.getHeight() << endl;
	cout << "ancho: " << figura.getWeight() << endl;
	cout << "area: " << figura.getArea() << endl;
	cout << "perimetro: " << figura.getPerimeter() << endl;
}