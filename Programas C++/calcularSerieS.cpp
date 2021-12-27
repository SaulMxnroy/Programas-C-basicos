//Autor: Saúl Alfredo Monroy García UP180333
//Programa: contar numeros capicua entre rango
//Fecha de creación: 23/06/2020
//Fecha de modificación: 23/06/2020
//Entrada: limite inferior, limite superios
//Salida: Cuenta de numeros capicua entre el rango introducido

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x=0,exp = 1, n=0,i=0,Fact,aux;
	float s=0,res;
	cout << "Ingrese el valor de n" << endl;
	cin >> n;
	cout << "Ingrese el valor de x" << endl;
	cin >> x;
	
	aux = 1;
	int j = 1;
	for(i; i <= n; i++){
	
		for(aux; aux <= j;aux++) {
			Fact = j * aux;	
		}
	s = s + (pow(x,i)) / Fact;	
	}
	res = s + 1; //agregar el 1/0!
	cout << res;
	return 0;
}
