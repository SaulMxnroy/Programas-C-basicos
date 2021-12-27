//Autor: Saúl Alfredo Monroy García UP180333
//Programa: contar dígitos
//Fecha de creación: 14/06/2020
//Fecha de modificación: 14/06/2020
//Entrada: número de cualquier logitud
//Salida: cantidad de dígitos del número insertado

#include <iostream>
using namespace std;
int main () {
	int num,count=0;
	bool end = false;
	
	cout << "Ingrese un número" << endl;
	cin >> num;
	int aux = num;
	while (end == false) {
	aux = (aux - (aux %10)) / 10;
	count = count + 1;
	if (aux == 0) {
		end = true;
	}	
	}
	cout << num <<" Contiene: " << count << " digitos." << endl;
	return 0;
}
