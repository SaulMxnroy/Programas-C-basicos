//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Programa: digito m�ximo
//Fecha de creaci�n: 14/06/2020
//Fecha de modificaci�n: 14/06/2020
//Entrada: n�mero de cualquier logitud
//Salida: d�gito mayor del n�mero ingresado

#include<iostream>
using namespace std;

int main() {
	int num,dig,max =0;
	cout << "Ingrese num" << endl;
	cin >> num;
	while ((num > 0)) {
		dig = num %10;
		if ((dig>max)) {
		max = dig;
		}
		num = num / 10;
	}
	cout << "el d�gito mayor es: " << max << endl;
	return 0;
}

