//Programa: 
//Autor: Saúl Alfredo Monroy García UP180333
//creación 25.05.20
//modificación 25.05.20
//Entrada: valor de N
//Salida: Suma

#include<iostream>
using namespace std;

int main() {
	int n;
	int s;
	do {
		cout << "Ingrese un valor positivo para N" << endl;
		cin >> n;
	} while (n<=0);
	s = n*(n+1)/2;
	cout << "Suma: " << s << endl;
	return 0;
}

