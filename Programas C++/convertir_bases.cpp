//Autor: Saúl Alfredo Monroy García UP180333
//Programa: Convertir a bases menores a 10
//Fecha de creación: 15/06/2020
//Fecha de modificación: 19/06/2020
//Entrada: Numero entero en base 10, base menor a 10
//Salida: numero convertido a una base menor a 10
#include<math.h>
#include <iostream>
using namespace std;

int main() {
	int cociente,base;
	cout << "Ingrese un numero en base 10 " << endl;
	cin >> cociente; 
	cout << "Ingrese la base" << endl;
	cin >> base;
	
	int num = 0;
	int res = 0;
	int i = 0;
	
	while(cociente != 0){
	res = cociente % base;	
	cociente = cociente / base;
	num = (res * pow(10,i)) + num;
	i++;
}
	cout << "Numero convertido a base " << base << " es: " << endl;
	cout << num;
	return 0;
}

