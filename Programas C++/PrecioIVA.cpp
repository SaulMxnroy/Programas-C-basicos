//Programa: IVA 16%
//Autor: Sa�l Alfredo Monroy Garc�a UP180333
//creaci�n 25.05.20
//modificaci�n 25.05.20
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

