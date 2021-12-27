//Autor: Saúl Alfredo Monroy García UP180333
//Programa: Puntaje Dados
//Fecha de creación: 08/06/2020
//Fecha de modificación: 08/06/2020
//Entrada: puntuaciones
//Salida: calificacion

#include<iostream>
using namespace std;

int main() {
	int pts = 0;
	int sum = 0;
	string cal;
	bool error = false;
	for (int i=1; i<4; i++) {
		
		//Los puntos deben estar entre 1 y 6
		cout << "Puntaje " << i << ":"<<  endl;
		cin >> pts;	
		
		if (pts < 1 || pts >6) {
			error = true; //Si se ingresan valores no permitidos, entonces hay un error
			cout << "Ingrese solamente puntajes de 1 a 6!" << endl; 
		} 
		else if (pts == 6) { //Sólo se toman en cuenta puntajes iguales a 6
			sum += pts;	
		}
	
		//Obtener resultados
	if (sum < 6) {
		cal = "Ha perdido";
	}
	if (sum == 6) {
		cal = "Bronce";
	} 
		if (sum == 12) {
		cal = "Plata";
	} 
		if (sum == 18) {
		cal = "Oro";
	} 
	
	}
	if (error){
		cout << "Intente otra vez, con puntajes validos: 1,2,3,4,5,6." << endl;
	}
	else { //No hay errores, mostrar resultados
	cout << "Puntaje: " << sum << endl; 
	cout << "Calificacion: " << cal ; 
	}

return 0;
}

