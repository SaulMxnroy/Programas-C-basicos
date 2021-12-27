//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Programa: digito m�ximo
//Fecha de creaci�n: 14/06/2020
//Fecha de modificaci�n: 14/06/2020
//Entrada: n�mero de cualquier logitud
//Salida: d�gito mayor del n�mero ingresado

#include <iostream>
using namespace std;
int main () {
	int num;
	long int dig,max = 0;
	bool end = false;
	
	cout << "Ingrese un n�mero" << endl;
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
	cout << "El d�gito mayor es: "<< max << endl;
	return 0;
}
