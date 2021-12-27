/*Programa: Num positivo, negativo, neutro
  Autor: Saúl Alfredo Monroy García UP180333
  Fecha de creación: 01/05/2020
  Fecha de modificación: 01/05/2020
  Entradas: número entero
  Salidas: doble del número || cero || triple del número
*/

#include <iostream>
using namespace std;
int main () {
	int num = 0;
	cout << "Ingrese un número entero: " << endl;
	cin >> num;
	
	if (num > 0 ) {
		num = num * 2;
		cout << "Número positivo; resultado: " << num << endl;
	}
	
	if (num == 0) {
		cout << "Número neutro; resultado: " << num << endl;
	}
	
	if (num < 0) {
		num = num * 3;
		cout << "Número negativo; resultado: " << num << endl;
	}
	return 0;
}
