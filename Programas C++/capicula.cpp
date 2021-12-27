//Autor: Saúl Alfredo Monroy García UP180333
//Programa: numero capicua
//Fecha de creación: 15/06/2020
//Fecha de modificación: 15/06/2020
//Entrada: Número entero
//Salida: El número es o no capicua

#include <iostream>
using namespace std;
int main() {
	int num,aux,dig,invertido=0;
	cout << "Ingrese un número entero." << endl;
	cin >> num;
	aux = num;
	while (aux > 0) {
		dig = aux % 10; //obtener el digito
		aux = aux /10;
		invertido = invertido * 10 + dig; //se guarda el numero de manera invertida
	}
	if (invertido == num) {
		cout << "Numero capicua" << endl;
	} else {
		cout << "No es capicua" << endl;
	}
	return 0;
}

