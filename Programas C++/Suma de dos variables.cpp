
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int resta;
	int suma;
	cout << "Ingrese dos números enteros:" << endl;
	cin >> a;
	cin >> b;
	suma = a+b;
	resta = a-b;
	cout << "Los resultados son:" << endl;
	cout << "suma: (" << a << " + " << b << ") = " << suma << endl;
	cout << "resta: (" << a << " - " << b << ") = " << resta << endl;
	return 0;
}

