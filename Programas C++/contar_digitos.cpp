//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Programa: contar d�gitos
//Fecha de creaci�n: 14/06/2020
//Fecha de modificaci�n: 14/06/2020
//Entrada: n�mero de cualquier logitud
//Salida: cantidad de d�gitos del n�mero insertado

#include <iostream>
using namespace std;
int main () {
	int num,count=0;
	bool end = false;
	
	cout << "Ingrese un n�mero" << endl;
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
