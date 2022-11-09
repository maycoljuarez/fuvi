/*
Nombre del archivo: problema15.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;

int main() {
	int contador;
	string contra;
	contador = 1;
	while (contador<=3) {
		cout << " hola denuevo ingresa tu clave " << endl;
		cin >> contra;
		if (contra=="tuani") {
			cout << " la clave es correcta " << endl;
			contador = 4;
		} else {
			if (contador==3) {
				cout << " has fallado los intentos permitidos" << endl;
			} else {
				cout << " la clave es incorrecta " << endl;
			}
			contador = contador+1;
		}
	}
	return 0;
}

