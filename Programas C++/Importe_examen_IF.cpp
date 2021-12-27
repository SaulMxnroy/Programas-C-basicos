//Autor: Saúl Alfredo Monroy García UP180333
//Programa: Importe examen
//Fecha de creación: 08/06/2020
//Fecha de modificación: 08/06/2020
//Entrada: tipo de colegio, nivel social
//Salida: Importe a pagar

#include<iostream>
using namespace std;

int main() {
	int costo;
	string colegio,nivel;

		cout << "Colegio de procedencia:" << endl;
		cout << "-Federal" << endl;
		cout << "-Particular" << endl;
		cout << "" << endl;	
		cin >> colegio;
		cout << "" << endl;	
		cout << "seleccione un nivel social:" << endl;
		cout << "-A" << endl;
		cout << "-B" << endl;	
		cout << "-C" << endl;
		cout << "" << endl;	
		cin >> nivel;
		//Federal
		if (colegio == "Federal" || colegio == "federal") {
		if (nivel == "A" || nivel == "a") {
		costo = 300;		
		}
		if (nivel == "B" || nivel == "b") {
		costo = 200;		
		}
		if (nivel == "C" || nivel == "c") {
		costo = 100;		
		}
	}
	//Particular
	if (colegio == "Particular" || colegio =="particular") {
		if (nivel == "A" || nivel == "a") {
		costo = 400;		
		}
		if (nivel == "B" || nivel == "b") {
		costo = 300;		
		}
		if (nivel == "C" || nivel == "c") {
		costo = 200;		
		}
	}
	
	cout << "El importe a pagar es de: " << costo << endl;

return 0;
}
