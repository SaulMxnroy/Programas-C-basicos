// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float digito;
	float may;
	int num;
	cout << "Ingrese un número" << endl;
	cin >> num;
	digito = 0;
	may = 0;
	while ((num>0)) {
		digito = num%10;
		if ((may<digito)) {
			may = digito;
		}
		num = int(num/10);
	}
	cout << "el dígito mayor es: " << may << endl;
	return 0;
}

