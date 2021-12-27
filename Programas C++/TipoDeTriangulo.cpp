// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	SIN_TIPO lado1;
	SIN_TIPO lado2;
	SIN_TIPO lado3;
	cout << "Ingrese la medida el primer lado" << endl;
	cin >> lado1;
	cout << "Ingrese la medida el segundo lado" << endl;
	cin >> lado2;
	cout << "Ingrese la medida el tercer lado" << endl;
	cin >> lado3;
	if ((lado1==lado2 && lado1==lado3)) {
		cout << "Triángulo equilátero" << endl;
	}
	if (((lado1==lado2 && lado3!=lado1) || (lado2==lado3 && lado3!=lado1) || (lado1==lado3 && lado2!=lado1))) {
		cout << "Triángulo isóceles" << endl;
	}
	if ((lado1!=lado2 && lado3!=lado2 && lado3!=lado1)) {
		cout << "Triángulo escaleno" << endl;
	}
	return 0;
}

