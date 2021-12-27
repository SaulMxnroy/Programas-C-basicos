//Autor: Saúl Alfredo Monroy García UP180333
//Programa: digito máximo
//Fecha de creación: 14/06/2020
//Fecha de modificación: 14/06/2020
//Entrada: número de cualquier logitud
//Salida: dígito mayor del número ingresado

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
	cout << "el dígito mayor es: " << max << endl;
	return 0;
}

