/*
Nombre del archivo: problema1o.cpp
autor: pablo vargas
lugar: itv
intrucciones: calculo de cuadrado de los 9 primeros numeros naturales

*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	float num;
	// Calculo del cuadrado de los primeros 9 numeros naturale
	cout << " ingrese un valor del 1 al 9 para saber su cadrado " << endl;
	cin >> num;
	if (num==2) {
		cout << "______________________Respuesta_____________________"<<endl;
		cout << " el cuadrado de 2 es " << sqrtf(2) << endl;
	} else {
		if (num==3) {
			cout << "______________________Respuesta_____________________"<<endl;
			cout << " el cuadrado de 3 es " << sqrtf(3) << endl;
		} else {
			if (num==4) {
				cout << "______________________Respuesta_____________________"<<endl;
				cout << " el cuadrado de 4 es " << sqrtf(4) << endl;
			} else {
				if (num==5) {
					cout << "______________________Respuesta_____________________"<<endl;
					cout << " el cuadrado de 5 es " << sqrtf(5) << endl;
				} else {
					if (num==6) {
						cout << "______________________Respuesta_____________________"<<endl;
						cout << " el cuadrado de 6 es " << sqrtf(6) << endl;
					} else {
						if (num==7) {
							cout << "______________________Respuesta_____________________"<<endl;
							cout << " el cuadrado de 7 es " << sqrtf(7) << endl;
						} else {
							if (num==8) {
								cout << "______________________Respuesta_____________________"<<endl;
								cout << " el cuadrado de 8 es " << sqrtf(8) << endl;
							} else {
								if (num==9) {
									cout << "______________________Respuesta_____________________"<<endl;
									cout << " el cuadrado de 9 es " << sqrtf(9) << endl;
								} else {
									if (num==1) {
										cout << "______________________Respuesta_____________________"<<endl;
										cout << " el cuadrado de 1 es " << sqrtf(1) << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

