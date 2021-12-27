
#include<iostream>
using namespace std;
int main() {
	float hrs;
	float minutos;
	float seg;
	cout << "Ingrese una cantidad de tiempo en Horas" << endl;
	cin >> hrs;
	minutos = hrs*60;
	seg = hrs*3600;
	cout << "La candidad: " << hrs << "hr(s), equivale a: " << endl;
	cout << minutos << " minutos" << endl;
	cout << seg << " segundos" << endl;
	return 0;
}

