//Programa: Potencia de una variable
//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//creaci�n 25.05.20
//modificaci�n 25.05.20
//Entrada: variable base
//Salida: variable exponencial


#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float n;
	float potencia;
	cout << "Ingrese el valor de a:" << endl;
	cin >> a;
	cout << "Ingrese la potencia n:" << endl;
	cin >> n;
	potencia = pow(a,n);
	cout << "El resultado de " << a << " a la " << n << " es: " << potencia << endl;
	return 0;
}

