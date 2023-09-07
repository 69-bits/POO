#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona
{
public:
	//Constructor por defecto
	Persona();
	//Destructor
	~Persona();
	//Este metodo se encarga de devolver un nombre
	string getName()
		{
			return nombre;
		}
	//Este metodo se encarga de devolver una edad
	int getAge()
		{
			return edad;
		}
	
	void setName(string name);

	void setAge(int age);

private:
	string nombre;
	int edad;
};

Persona::Persona()
{
}

Persona::~Persona()
{
}