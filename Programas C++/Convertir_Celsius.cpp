//Programa: Convertir Celsius
//Autor: Saúl Alfredo Monroy García UP180333
//creación 25.05.20
//modificación 25.05.20
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

