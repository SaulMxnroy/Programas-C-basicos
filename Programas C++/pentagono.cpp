//Programa: Area-Perimetro-pentágono
//Autor: Saúl Alfredo Monroy García
//Fecha de creacion: 29/05/2020
//Fecha de modificacion: 29/05/2020
//Entradas: lado y apotema
//Salidas: perimetro y area

#include <iostream>
using namespace std;

int main ()
{
	double lado,apotema,perimetro,area;
	
  cout << "Ingresa la medida de un lado" << endl;
  cin >> lado;
  cout << "Ingresa la medida de la apotema" << endl;
  cin >> apotema;
  perimetro = lado * 5;
  area = (perimetro * apotema) / 2;
  cout << "El perimetro del pentagono es " << perimetro << endl;
  cout << "El area del pentagono es " << area << endl;
  
  return 0;
}
