//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//Programa: Estaciones del a�o
//Fecha de creaci�n: 08/06/2020
//Fecha de modificaci�n: 08/06/2020
//Entrada: dia,mes
//Salida: estaci�n

#include<iostream>
using namespace std;

int main() {
	int dia,mes;
	
	cout << "Ingrese el n�mero de d�a" << endl;
	cin >> dia;
	cout << "Ingrese el n�mero de mes" << endl;
	cin >> mes;	

	//Condiciones para cada temporada
	if ((dia>=21 && mes==12 || mes==1 || mes==2 || (mes==3 && dia<=20))) {
		cout << "Invierno" << endl;
	}
	if ((dia>=21 && mes==3 || mes==4 || mes==5 || (mes==6 && dia<=21))) {
		cout << "Primavera" << endl;
	}
	if ((dia>=22 && mes==6 || mes==7 || mes==8 || (mes==9 && dia<=22))) {
		cout << "Verano" << endl;
	}
	if ((dia>=23 && mes==9 || mes==10 || mes==11 || (mes==12 && dia<=20))) {
		cout << "Oto�o" << endl;
	}
	return 0;
}

