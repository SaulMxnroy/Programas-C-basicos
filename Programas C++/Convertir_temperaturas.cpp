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
	float c;
	float f;
	float k;
	f = 0;
	c = 0;
	k = 0;
	cout << "Ingrese una temperatura en grados Farenheit" << endl;
	cin >> f;
	c = (f-32)/1.8;
	k = (f+459.67)/1.8;
	cout << "Celsius: " << c << endl;
	cout << "Kelvin: " << k << endl;
	return 0;
}

