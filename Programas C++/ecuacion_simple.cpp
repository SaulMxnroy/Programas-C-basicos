//Programa: Ecuaciones A,B,C,D
//Autor: Saúl Alfredo Monroy García UP180333
//creación 25.05.20
//modificación 25.05.20
//Entrada: valores para las variables a,b
//Salida: resultados de las variables c,d

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float d;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	cout << "Ingrese el valor de a:" << endl;
	cin >> a;
	cout << "Ingrese el valor de b:" << endl;
	cin >> b;
	c = ((4*pow(a,4))+(3*b*a+pow(b,2)))/((pow(a,2))-(pow(b,2)));
	d = ((3*pow(c,2))+a+b)/4;
	cout << "valor de c: " << c << endl;
	cout << "valor de d: " << d << endl;
	return 0;
}

