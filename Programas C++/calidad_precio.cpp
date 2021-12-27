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
	float calidad;
	float precio;
	float producto;
	precio = 0;
	cout << "Elija una calidad (1,2,3):" << endl;
	cout << "Calidad I " << " Calidad II " << " Calidad III" << endl;
	cin >> calidad;
	cout << "" << endl;
	cout << "Elija un producto (1,2,3):" << endl;
	cout << " Producto I  " << "  Producto II " << "  Producto III " << endl;
	cin >> producto;
	cout << "" << endl;
	if ((calidad==1 && producto==1)) {
		precio = 5000;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==1 && producto==2)) {
		precio = 4500;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==1 && producto==3)) {
		precio = 4000;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==2 && producto==1)) {
		precio = 4500;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==2 && producto==2)) {
		precio = 4000;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==2 && producto==3)) {
		precio = 3500;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==3 && producto==1)) {
		precio = 4000;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==3 && producto==2)) {
		precio = 3500;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad==3 && producto==3)) {
		precio = 3000;
		cout << "Precio: " << precio << endl;
	}
	if ((calidad<1 || calidad>3)) {
		cout << "La calidad ingresada no existe" << endl;
	}
	if ((producto<1 || producto>3)) {
		cout << "El producto seleccionado no existe" << endl;
	}
	return 0;
}

