/*Autor: Saúl Alfredo Monroy García UP180333
  Programa: Sumatoria de x^n/n!
  Fecha de creación: 23/06/2020
  Fecha de modificación: 23/06/2020
  Entradas: Valor de x, numero de términos n
  Salidas: Sumatoria*/
#include <iostream>
using namespace std;

int main()
{
    float x, sum, iter;
    int i, n;

    cout << "Valor de x: ";
    cin >> x;
    cout << "Valor de n: ";
    cin >> n;
    sum = 1;
    iter = 1;
    for (i = 1; i <= n; i++) 
    {
        iter = iter * x / i; // x^n / n!
        sum = sum + iter; // x^n / n! + x^(n+1) / (n+1)!
    }
    cout << "S : " << sum << endl;
    return 0;
}
