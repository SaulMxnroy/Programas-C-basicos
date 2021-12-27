/*Programa: Num positivo, negativo, neutro
  Autor: Sa�l Alfredo Monroy Garc�a UP180333
  Fecha de creaci�n: 01/05/2020
  Fecha de modificaci�n: 01/05/2020
  Entradas: n�mero entero
  Salidas: doble del n�mero || cero || triple del n�mero
*/

#include <iostream>
using namespace std;
int main () {
	int num = 0;
	cout << "Ingrese un n�mero entero: " << endl;
	cin >> num;
	
	if (num > 0 ) {
		num = num * 2;
		cout << "N�mero positivo; resultado: " << num << endl;
	}
	
	if (num == 0) {
		cout << "N�mero neutro; resultado: " << num << endl;
	}
	
	if (num < 0) {
		num = num * 3;
		cout << "N�mero negativo; resultado: " << num << endl;
	}
	return 0;
}
