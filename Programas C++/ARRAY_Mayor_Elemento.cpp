// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// En C++ no se puede dimensionar un arreglo estático con una dimensión no constante.
// PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
// Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
// este mecanismo aún no está soportado en las traducciones automáticas de PSeInt.
#define ARREGLO_MAX 100

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float arreglo[ARREGLO_MAX];
	int i;
	float mayorr;
	int n;
	cout << "Ingrese la dimension del arreglo" << endl;
	cin >> n;
	mayorr = 0;
	for (i=0;i<=n-1;i++) {
		cout << "Ingrese el elemento " << i+1 << endl;
		cin >> arreglo[i];
		if (mayorr<arreglo[i]) {
			mayorr = arreglo[i];
		}
	}
	cout << "El elemento mayor del vector es: " << mayorr << endl;
	return 0;
}

