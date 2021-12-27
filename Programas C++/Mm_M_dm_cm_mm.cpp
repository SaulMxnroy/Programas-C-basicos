
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int cm;
	int dm;
	int metros;
	int milimetros;
	int mm;
	metros = 0;
	dm = 0;
	cm = 0;
	mm = 0;
	cout << "Ingrese una cantidad de milímetros: " << endl;
	cin >> mm;
	metros = int(mm/1000);
	dm = ((mm%1000)-(mm%100))/100;
	cm = ((mm%100)-(mm%10))/10;
	milimetros = mm%10;
	cout << metros << " Metros " << dm << " decímetros " << cm << " centímetros " << milimetros << " milímetros. " << endl;
	return 0;
}

