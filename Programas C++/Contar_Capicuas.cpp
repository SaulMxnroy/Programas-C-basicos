//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Programa: contar numeros capicua entre rango
//Fecha de creaci�n: 23/06/2020
//Fecha de modificaci�n: 23/06/2020
//Entrada: limite inferior, limite superios
//Salida: Cuenta de numeros capicua entre el rango introducido

#include<iostream>
using namespace std;

int main() {

	int n1,n2,cuentacapi = 0,aux;
	int resultado, num, resto;

	do {
		cout << "Ingrese el primer n�mero" << endl;
		cin >> n1;
		cout << "Ingrese el segundo n�mero" << endl;
		cin >> n2;
		if (n2<n1) {
			cout << "El segundo n�mero debe ser mayor al primero, intente otra vez!" << endl;
			cout << "" << endl;
		}
		if ((n1<=0 || n2<=0)) {
			cout << "Ingrese solo n�meros enteros positivos!" << endl;
			cout << " " << endl;
		}
	} while (!((n2>n1 && n2>0 && n1>0)));
	
	for(n1;n1 <= n2; n1++){
        num = n1;
        aux = num;
        resultado = 0;
        while(num > 0){
            resto = num % 10;
            num = num / 10;
            resultado = resultado * 10 + resto;
        }
        if(resultado == aux){
        cuentacapi = cuentacapi + 1;	
		}
}
	
	cout << "Entre los n�meros ingresados hay: " << endl;
	cout << cuentacapi << " numeros capicua." << endl;
	
	return 0;
}

