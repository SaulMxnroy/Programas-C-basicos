//Autor: Saúl Alfredo Monroy García UP180333
//Programa: dias de meses
//Fecha de creación: 08/06/2020
//Fecha de modificación: 08/06/2020
//Entrada: num de mes, año
//Salida: año, mes en palabra, num de días

#include<iostream>
using namespace std;

int main() {
	int mes, anio,dias;
	string month;
	cout << "Ingrese un número de mes" << endl;
	cin >> mes;
	cout << "Ingrese un número de año (yyyy)" << endl;
	cin >> anio;
	//Switch para cada número de mes
	switch (mes) {
		case 1:
			month = "enero";
			dias = 31;
			break;
		case 2:
			month = "febrero";
			if (anio % 4 == 0 && anio % 100 != 0  || anio % 400 == 0){ //Condicion año bisiesto
				dias = 29;	
			} else {
				dias = 28;
			}
			break;
		case 3:
			month = "marzo";
			dias = 31;
			break;
		case 4:
			month = "abril";
			dias = 30;
			break;
		case 5:
			month = "mayo";
			dias = 31;
			break;
		case 6:
			month = "junio";
			dias = 30;
			break;
		case 7:
			month = "julio";
			dias = 31;
			break;
		case 8:
			month = "agosto";
			dias = 31;
			break;
		case 9:
			month = "septiembre";
			dias = 30;
			break;
		case 10:
			month = "octubre";
			dias = 31;
			break;
		case 11:
			month = "noviembre";
			dias = 30;
			break;
		case 12:
			month = "diciembre";
			dias = 31;
			break;
	}
	
	cout << "El año es: " << anio << endl;
	cout << "El mes es: " << month << " y tiene " << dias << " dias." << endl;
return 0;
}


