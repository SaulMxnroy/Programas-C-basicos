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
	float cociente;
	float dividendo;
	float divisor;
	float residuo;
	cout << "Ingrese dividendo" << endl;
	cin >> dividendo;
	cout << "Ingrese divisor" << endl;
	cin >> divisor;
	cociente = 0;
	if (dividendo<divisor) {
		cout << "El dividendo debe ser mayor al divisor" << endl;
	}
	residuo = dividendo;
	while (residuo>=divisor) {
		residuo = residuo-divisor;
		cociente = cociente+1;
	}
	cout << "El cociente es: " << cociente << endl;
	cout << "El residuo es: " << residuo << endl;
	return 0;
}

