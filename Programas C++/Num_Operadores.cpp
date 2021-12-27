//Autor: Saúl Alfredo Monroy García UP180333
//Programa: Operadores y dos números
//Fecha de creación: 08/06/2020
//Fecha de modificación: 08/06/2020
//Entrada: dos números enteros y un operador
//Salida: resultado de operación

#include<iostream>
using namespace std;

int main() {
	int num1,num2,res;
	char op;
	
	cout << "Ingrese un número: " << endl;
	cin >> num1;
	cout << "Ingrese un operador (+, -, *, /) " << endl;
	cin >> op;
	cout << "Ingrese un número: " << endl;
	cin >> num2;
	
	//Switch para cada operador
	switch (op) {
	case '+':
		res = num1+num2;
		cout << "resultado: " << res << endl;
		break;
	case '-':
		res = num1-num2;
		cout << "resultado: " << res << endl;
		break;
	case '*':
		res = num1*num2;
		cout << "resultado: " << res << endl;
		break;
	case '/':
		if ((num2==0)) { //No se puede dividir entre cero
			cout << "Error, no se puede dividir entre 0." << endl; 
			res = 0;
			cout << "resultado: " << res << endl;

		} else {
			res = num1/num2;
			cout << "resultado: " << res << endl;
		}
		break;
	}
	return 0;
}

