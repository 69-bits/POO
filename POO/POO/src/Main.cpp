#include <iostream>
#include "Persona.h"

using namespace std;

void multiplicar(float num1, float num2)
{
	cout << "El resultado de la multiplicacion es " << num1 * num2 << endl;
}

int main()
{	
	Persona pepe;
	pepe.setName("Pepe")
	cout << "Nombre: " << pepe.getName() <<endl;

	/*
	string nombre;
	cout << "Su nombre es... " << endl;
	cin >> nombre;

	cout << "Tu nombre es " << nombre << endl;

	for (int i = 1; i <= 5; i++)
			cout << "Numero " << i << endl;

	multiplicar(2, 6);
	*/
}