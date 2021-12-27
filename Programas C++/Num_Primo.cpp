//Autor: Saúl Alfredo Monroy García UP180333
//Programa: Número primo
//Fecha de creación: 15/06/2020
//Fecha de modificación: 15/06/2020
//Entrada: Numero entero
//Salida: El número ingresado es primo o no

#include<iostream>
using namespace std;
int main() {
	
	int acum,num,i,resto;
	cout << "Ingresa un número para saber si es primo" << endl;
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

