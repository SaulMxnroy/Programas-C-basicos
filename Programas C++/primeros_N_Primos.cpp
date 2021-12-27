
#include<iostream>
using namespace std;

int main() {

	int i,num,resto,x,acum,cuenta = 0;


		cout << "Ingrese un número" << endl;
		cin >> num;
	
		if (num <= 0) {
			cout << "Ingrese solo números enteros positivos!" << endl;
			cout << " " << endl;
		}

	for (i=1;i<=num;i++) {
		x = 1;
		acum = 0;
		while (x<=i) {
			resto = i % x;
			if (resto==0) {
				acum = acum+1;
			}
			x = x+1;
		}
		if ((acum==2)) {
			cuenta = cuenta + 1;
		
		}
	}
		cout << "Cantidad de números primos hasta el número ingresado: \n" <<cuenta << endl;
	return 0;
}

