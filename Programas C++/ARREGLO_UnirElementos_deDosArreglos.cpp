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
	string arreglo1[5];
	string arreglo2[5];
	SIN_TIPO arreglo3[10];
	int i;
	arreglo1[0] = "a";
	arreglo1[1] = "b";
	arreglo1[2] = "c";
	arreglo1[3] = "d";
	arreglo1[4] = "e";
	arreglo2[0] = "f";
	arreglo2[1] = "g";
	arreglo2[2] = "h";
	arreglo2[3] = "i";
	arreglo2[4] = "j";
	for (i=0;i<=4;i++) {
		arreglo3[i] = arreglo1[i];
	}
	for (i=5;i<=9;i++) {
		arreglo3[i] = arreglo2[i-5];
	}
	for (i=0;i<=9;i++) {
		cout << arreglo3[i] << endl;
	}
	return 0;
}

