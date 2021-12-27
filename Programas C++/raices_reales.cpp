/*Programa: raíces reales
  Autor: Saúl Alfredo Monroy García UP180333
  Fecha de creación: 01/06/2020
  Fecha de modificación: 01/06/2020
  Entradas: valores de a,b,c
  Salidas: valores de x1,x2
*/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a,b,c;
	bool esvalido;
	float x1;
	float x2;
	cout << "Valor de a:" << endl;
	cin >> a;
	cout << "Valor de b:" << endl;
	cin >> b;
	cout << "Valor de c:" << endl;
	cin >> c;
	x1 = 0;
	x2 = 0;
	esvalido = true;
	if (a==0) {
		cout << "Error, division entre cero" << endl;
		esvalido = false;
	}
	if (((pow(b,2))-4*a*c)==0) {
		cout << "Error, raiz cero" << endl;
		esvalido = false;
	}
	if (((pow(b,2))-4*a*c) < 0) {
		cout << "Error, raiz imaginaria" << endl;
		esvalido = false;
	}
	if (esvalido==true) {
		x1 = (-b+sqrtf(((pow(b,2))-4*a*c)))/(2*a);
		x2 = (-b-sqrtf(((pow(b,2))-4*a*c)))/(2*a);
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	return 0;
}

