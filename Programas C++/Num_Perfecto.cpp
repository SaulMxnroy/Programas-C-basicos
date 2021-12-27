

#include<iostream>
using namespace std;

int main() {
	int divisor,num,resto,sumadivisor,i;

	cout << "Ingrese un número" << endl;
	cin >> num;
	sumadivisor = 0;
	for (i=1;i<=num-1;i++) {
		resto = num % i;
		if (resto==0) {
			divisor = i;
			sumadivisor = sumadivisor+divisor;
		}
	}
	if (sumadivisor==num) {
		cout << "El número " << num << ", es perfecto" << endl;
	} else {
		cout << "El número " << num << ", no es perfecto" << endl;
	}
	return 0;
}

