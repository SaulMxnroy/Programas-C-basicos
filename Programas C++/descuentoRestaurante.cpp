/*Programa: Descuento_restaurante
  Autor: Saúl Alfredo Monroy García UP180333
  Fecha de creación: 01/06/2020
  Fecha de modificación: 01/06/2020
  Entradas: costo de la cuenta
  Salidas: monto de descuento, impuesto, importe
*/

#include<iostream>
using namespace std;

int main() {
	float costo;
	float descuento;
	float importe;
	float iva;
	float precio;
	cout << "Costo de la cuenta:" << endl;
	cin >> costo;
	if (costo<=100 && costo>0) {
		descuento = 0.10;
		precio = costo-costo*descuento;
		iva = 0.16;
		importe = precio+precio*iva;
	}
	if (costo>100) {
		descuento = 0.20;
		precio = costo-(costo*descuento);
		iva = 0.16;
		importe = precio+precio*iva;
	}
	cout << "monto de descuento: $" << costo*descuento << endl;
	cout << "impuesto: $" << precio*0.16 << endl;
	cout << "importe a pagar: $" << importe << endl;
	return 0;
}

