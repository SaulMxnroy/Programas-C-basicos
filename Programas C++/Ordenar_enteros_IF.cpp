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
	int a,b,c;
	
	//Se ingresan los n�meros
	cout << "Ingrese un n�mero entero: " << endl;
	cin >> a;
	cout << "Ingrese un n�mero entero: " << endl;
	cin >> b;
	cout << "Ingrese un n�mero entero: " << endl;
	cin >> c;

	//comparaciones entre n�meros
	if(c>b && b>a) {
	cout << a << b << c << endl;
	cout << c<<b<<a << endl;
	}
	else if(a> b && b>c){
	cout << c<<b<<a << endl;	
	cout << a<<b<<c << endl;
	}
	else if(a>b && c>a){
	cout << b<<a<<c << endl;	
	cout << c<<a<<b << endl;
	}
	else if(a>c && c>b){
	cout << b<<c<<a << endl;
	cout << a<<c<<b << endl;
	}
	else if(b>c && b>a&&a>c){
	cout << c<<a<<b << endl;
	cout << b<<a<<c << endl;	
	}
	else {
	cout << a<<c<<b << endl;
	cout << b<<c<<a << endl;	
	}
	return 0;
}
