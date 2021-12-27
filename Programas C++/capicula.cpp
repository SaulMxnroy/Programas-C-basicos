//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Programa: numero capicua
//Fecha de creaci�n: 15/06/2020
//Fecha de modificaci�n: 15/06/2020
//Entrada: N�mero entero
//Salida: El n�mero es o no capicua

#include <iostream>
using namespace std;
int main() {
	int num,aux,dig,invertido=0;
	cout << "Ingrese un n�mero entero." << endl;
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

