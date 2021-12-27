
#include<iostream>
using namespace std;

int main() {

	int i,n1,n2,resto,x,acum;

	do {
		cout << "Ingrese el primero número" << endl;
		cin >> n1;
		cout << "Ingrese el segundo número" << endl;
		cin >> n2;
		if (n2<n1) {
			cout << "El segundo número debe ser mayor al primero, intente otra vez!" << endl;
			cout << "" << endl;
		}
		if ((n1<=0 || n2<=0)) {
			cout << "Ingrese solo números enteros positivos!" << endl;
			cout << " " << endl;
		}
	} while (!((n2>n1 && n2>0 && n1>0)));
	for (i=n1;i<=n2;i++) {
		x = 1;
		acum = 0;
		while (x<=i) {
			resto = i%x;
			if (resto==0) {
				acum = acum+1;
			}
			x = x+1;
		}
		if ((acum==2)) {
			cout << i << endl;
		}
	}
	return 0;
}

