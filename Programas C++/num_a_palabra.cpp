//Autor: Saúl Alfredo Monroy García UP180333
//Programa: Número a palabra
//Fecha de creación: 08/06/2020
//Fecha de modificación: 08/06/2020
//Entrada: num (dígito de 0 a 9)
//Salida: palabra que representa al número (ej. "nueve")

#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Ingrese un número" << endl;
	cin >> num;
	
	//switch para cada dígito de 0 a 9
	switch (num) {
	case 0:
		cout << "cero" << endl;
		break;
	case 1:
		cout << "uno" << endl;
		break;
	case 2:
		cout << "dos" << endl;
		break;
	case 3:
		cout << "tres" << endl;
		break;
	case 4:
		cout << "cuatro" << endl;
		break;
	case 5:
		cout << "cinco" << endl;
		break;
	case 6:
		cout << "seis" << endl;
		break;
	case 7:
		cout << "siete" << endl;
		break;
	case 8:
		cout << "ocho" << endl;
		break;
	case 9:
		cout << "nueve" << endl;
		break;
	}
	return 0;
}

