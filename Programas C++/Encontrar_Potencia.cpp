//Programa: Potencia de una variable
//Autor: Saúl Alfredo Monroy García UP180333
//creación 25.05.20
//modificación 25.05.20
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

