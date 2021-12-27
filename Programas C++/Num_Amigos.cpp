// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float a;
	float b;
	float c1;
	float c2;
	float num1;
	float num2;
	cout << "Ingrese un número" << endl;
	cin >> num1;
	cout << "Ingrese otro número" << endl;
	cin >> num2;
	c1 = 0;
	c2 = 0;
	for (a=1;a<=num1/2;a++) {
		if (num1%a==0) {
			c1 = c1+a;
		}
	}
	for (b=1;b<=num2/2;b++) {
		if (num2%b==0) {
			c2 = c2+b;
		}
	}
	if (c1==num2) {
		cout << "Números amigos" << endl;
	} else {
		cout << "No son números amigos" << endl;
	}
	return 0;
}

