
#include <iostream>
#include <stdio.h>
#include "stdlib.h"
#include <ostream>
#include <string>
#include "Enum.h"
using namespace std;


int menu();

int main()
{

	string 

	int opcion;
	evento eventito;
	cVuelo* vuelo = new cVuelo();
	do {
		opcion = menu();
		switch (opcion) {
		case 1:
			//H
			break;
		case 2:
			vuelo->Solicitar_Despegue();
			recibir_evento(solicitar_depegue);
			break;
		case 3:
			Despegar();
			recibir_evento(despegar);
			break;
		case 4:
			Hablarporaltavoz();
			recibir_evento(hablar_altavoz);
			break;
		case 5:
			Recibir_comida();
			recibir_evento(entrega_comida);
			break;
		case 6:
			Solicitar_comida();
			recibir_evento(solicitar_comidap);
			break;
		case 7:
			Recibir_bebida();
			recibir_evento(entrega_bebida);
			break;
		case 8:
			Solicitar_bebida();
			recibir_evento(solicitar_bebidap);
			break;
		case 9:
			Arrebatarse();
			Reducir_pasajero();
			recibir_evento(arrebato);
			break;
		case 10:
			Recibir_masaje();
			recibir_evento(recibir_masaje);
			break;
		case 12:
			Recibir_champagne();
			recibir_evento(recibir_champagne);
			break;
		case 14:
			Descomponerse();
			Atender_pasajero();
			recibir_evento(descompostura);
			break;
		case 15:
			Solicitar_aterrizaje();
			recibir_evento(solicitar_aterrizaje);
			break;
		case 16:
			Aterrizar();
			recibir_evento(aterrizar);
			break;
		}
	} while (opcion != 17);
}

int menu()
{
	int opcion;
	cout << "\n MENU DE VUELO " << endl;
	cout << "1- Ingresar pasajeros" << endl;
	cout << "2- Solicitar despegue" << endl;
	cout << "3- Despegar" << endl;
	cout << "4- Hablar por altavoz" << endl;
	cout << "5- Entregar comida a los pasajeros" << endl;
	cout << "6- Entregar comida a los pilotos" << endl;
	cout << "7- Entregar bebida a los pasajeros" << endl;
	cout << "8- Entregar bebida a los pilotos" << endl;
	cout << "9- Arrebatar un pasajero" << endl;
	cout << "10- Recibir masaje" << endl;
	cout << "11- Usar toilete" << endl;
	cout << "12- Recibir champagne" << endl;
	cout << "13- Trabajar en notebook" << endl;
	cout << "14- Descomponerse" << endl;
	cout << "15- Solicitar aterrizaje" << endl;
	cout << "16- Aterrizar" << endl;
	cout << "17- Finalizar" << endl;
}


