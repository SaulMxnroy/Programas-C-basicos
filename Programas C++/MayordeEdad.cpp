/*Programa: Mayor/Menor de edad
  Autor: Saúl Alfredo Monroy García UP180333
  Fecha de creación: 01/05/2020
  Fecha de modificación: 01/05/2020
  Entradas: año de nacimiento
  Salidas: "mayor/menor de edad", edad
*/

#include <iostream>
using namespace std;
int main () {
	int anioNacimiento = 0;
	int anioActual = 2020;
	int edad = 0;
	cout << "Ingrese su anio de nacimiento" << endl;
	cin >> anioNacimiento;
	edad = anioActual - anioNacimiento;
	if (edad >= 18) {
		cout << "Es mayor de edad con: " << edad << " anios" << endl;
		} else {
		cout << "Es menor de edad con: " << edad << " anios" << endl;
			   }
	return 0;
}
