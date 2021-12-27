
#include<iostream>
using namespace std;
int main() {
	float area;
	float lado;
	float perimetro;
	cout << "Ingrese la medida del lado del cuadrado" << endl;
	cin >> lado;
	area = lado*lado;
	perimetro = lado*4;
	cout << "El área es: " << area << endl;
	cout << "El perímetro es: " << perimetro << endl;
	return 0;
}

