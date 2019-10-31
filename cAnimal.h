#pragma once
#include <iostream>




class cAnimal
{
	float peso;
	float altura;
	char sexo;
	int cant_patas;
	//string id;
	char tamanio;
	static int cont;

public:

	virtual void alimentar() = 0;
	
	cAnimal();
	virtual ~cAnimal();


};

