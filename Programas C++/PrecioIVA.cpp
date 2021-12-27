//Programa: IVA 16%
//Autor: Saúl Alfredo Monroy García UP180333
//creación 25.05.20
//modificación 25.05.20
//Entrada: preciobruto(sin IVA)
//Salida: IVA calculado, precio con IVA incluido


#include<iostream>
using namespace std;



int main() {
	float iva;
	float preciobruto;
	float precioventa;
	cout << "Ingrese el valor de venta del producto" << endl;
	cin >> preciobruto;
	iva = preciobruto*0.16;
	cout << "IVA (16%): $" << iva << endl;
	precioventa = preciobruto+iva;
	cout << "Precio de venta con IVA: $" << precioventa << endl;
	return 0;
}

