
#include<iostream>
using namespace std;
int main() {
	int num1;
	int num2;
	int num3;
	int num4;
	float por1;
	float por2;
	float por3;
	float por4;
	int suma;
	suma = 0;
	cout << "Ingrese el número 1" << endl;
	cin >> num1;
	cout << "Ingrese el número: 2" << endl;
	cin >> num2;
	cout << "Ingrese el número: 3" << endl;
	cin >> num3;
	cout << "Ingrese el número: 4" << endl;
	cin >> num4;
	suma = num1+num2+num3+num4;
	cout << "Suma: " << suma << endl;
	por1 = (num1*100/suma);
	por2 = (num2*100/suma);
	por3 = (num3*100/suma);
	por4 = (num4*100/suma);
	cout << "Porcentaje de número " << num1 << " en " << suma << ", es: " << por1 << "%" << endl;
	cout << "Porcentaje de número " << num2 << " en  " << suma << ", es: " << por2 << "%" << endl;
	cout << "Porcentaje de número " << num3 << " en  " << suma << ", es: " << por3 << "%" << endl;
	cout << "Porcentaje de número " << num4 << " en  " << suma << ", es: " << por4 << "%" << endl;
	return 0;
}

