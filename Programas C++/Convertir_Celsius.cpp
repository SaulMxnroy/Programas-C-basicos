//Programa: Convertir Celsius
//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//creaci�n 25.05.20
//modificaci�n 25.05.20
//Entrada: Temperatura en grados Celsius
//Salida: Equivalencias en Fahrenheit y Kelvin

#include<iostream>
using namespace std;


int main() {
	float c;
	float f;
	float k;
	cout << "Ingrese la temperatura en Celsius:" << endl;
	cin >> c;
	f = c * (9/5) + 32;
	k = c + 273.15;
	cout << "Grados Farenheit: " << f << endl;
	cout << "Grados Kelvin: " << k << endl;
	return 0;
}

