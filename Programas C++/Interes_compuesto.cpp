//Programa: Inter�s compuesto
//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Fecha de creaci�n: 29/02/2020
//Fecha de modificaci�n: 29/02/2020
//Entrada: capital,tasa,tiempo
//Salida: monro, interes

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int capital,tiempo;
	double tasa,monto,interes;
	
	cout << "Ingrese el valor del capital: " << endl;
	cin >> capital;
	cout << "Ingrese el valor de la tasa de inter�s:" << endl;
	cin >> tasa;
	cout << "Ingrese el tiempo:" << endl;
	cin >> tiempo;
	
	monto =  pow((1 + tasa / 100 ),tiempo) * capital;
	interes = monto - capital;
	cout << "monto: " << monto << endl;
	cout << "Interes: " << interes << endl;
	return 0;
}
