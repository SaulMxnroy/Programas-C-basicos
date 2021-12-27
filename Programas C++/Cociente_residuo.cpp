
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
	cout << "Cociente de su división: " << cociente << endl;
	cout << "Residuo de su división: " << residuo << endl;
	return 0;
}

