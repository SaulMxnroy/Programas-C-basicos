//Autor: Saúl Alfredo Monroy García UP180333
//Programa: digito máximo
//Fecha de creación: 14/06/2020
//Fecha de modificación: 14/06/2020
//Entrada: número de cualquier logitud
//Salida: dígito mayor del número ingresado

#include <iostream>
using namespace std;
int main () {
	int num;
	long int dig,max = 0;
	bool end = false;
	
	cout << "Ingrese un número" << endl;
	cin >> num;
	int aux = num;
	while (end == false) {
		dig = aux % 10;
		aux = (aux - (aux %10)) / 10;
		
		if (dig > max) {
			max = dig;
		}
		
		if (aux == 0) {
			end = true;
		}	
	}
	cout << "El dígito mayor es: "<< max << endl;
	return 0;
}
