
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int cociente;
	int dividendo;
	int divisor;
	int residuo;
	cout << "Ingrese el dividendo" << endl;
	cin >> dividendo;
	cout << "Ingrese el divisor" << endl;
	cin >> divisor;
	cociente = int(dividendo/divisor);
	residuo = dividendo%divisor;
	cout << "Cociente de su divisi�n: " << cociente << endl;
	cout << "Residuo de su divisi�n: " << residuo << endl;
	return 0;
}

