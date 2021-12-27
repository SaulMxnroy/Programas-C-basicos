//Autor: Saúl Alfredo Monroy García UP180333
//Programa: restas sucesivas
//Fecha de creación: 14/06/2020
//Fecha de modificación: 14/06/2020
//Entrada: dividendo, divisor
//Salida: cociente, residuo
#include<iostream>
using namespace std;


int main() {
	int cociente=0,dividendo,divisor,residuo=0;
	
	cout << "Ingrese un dividendo" << endl;
	cin >> dividendo;
	cout << "Ingrese el divisor" << endl;
	cin >> divisor;
	while (dividendo>=divisor) {
		dividendo = dividendo-divisor;
		cociente = cociente + 1;
		if (dividendo<divisor) {
			residuo = dividendo;
		}
	}
	cout << "Cociente: " << cociente << endl;
	cout << "Residuo: " << residuo << endl;
	return 0;
}

