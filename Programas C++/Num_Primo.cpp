//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Programa: N�mero primo
//Fecha de creaci�n: 15/06/2020
//Fecha de modificaci�n: 15/06/2020
//Entrada: Numero entero
//Salida: El n�mero ingresado es primo o no

#include<iostream>
using namespace std;
int main() {
	
	int acum,num,i,resto;
	cout << "Ingresa un n�mero para saber si es primo" << endl;
	cin >> num;
	acum = 0;
	for (i = 1;i <= num;i++) {
		resto = num % i;
		if (resto == 0) {
			acum = acum + 1;
		}
	}
	if ((acum == 2)) {
		cout << "Es primo" << endl;
	} else {
		cout << "No es primo" << endl;
	}
	return 0;
}

