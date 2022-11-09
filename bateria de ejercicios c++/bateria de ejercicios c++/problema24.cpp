/*
Nombre del archivo: problema24.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float disc;
	float parteinmaginaria;
	float partereal;
	float r;
	float x1;
	float x2;
	cout << " El programa acontinuacion resuelve ecuaciones de segundo grando " << endl;
	cout << "AX^2 + BX + C " << endl;
	cout << " Introdusca el valor de A:" << endl;
	cin >> a;
	cout << a << " X^2 + BX + C " << endl;
	cout << "***************************" << endl;
	cout << " haora ingrese el valor de B:" << endl;
	cin >> b;
	cout << a << " X^2 + " << b << "X + C " << endl;
	cout << "****************************" << endl;
	cout << " Bien ingrese el valor de C:" << endl;
	cin >> c;
	cout << a << " X^2 + " << b << "X" << " + " << c << endl;
	cout << " ***************************" << endl;
	// Proceso 
	disc = (pow(b,2))-4*(a*c);
	if (disc<0) {
		x1 = ((-b)+sqrtf(disc))/(2*a);
		x2 = ((-b)+sqrtf(disc))/(2*a);
		// DATOS SALIDA
		cout << "Raiz 1:" << x1 << endl;
		cout << "Raiz 2:" << x2 << endl;
	} else {
		if (disc<0) {
			partereal = (-b)/(2*a);
			parteinmaginaria = sqrtf(abs(disc))/(2*a);
			// SALIDA
			cout << " Raiz 1 " << partereal << " + " << parteinmaginaria << " i " << endl;
			cout << " Raiz 1 " << partereal << " - " << parteinmaginaria << " i " << endl;
		} else {
			disc = 0;
			r = (-b)/(2*a);
			// SALIDA
			cout << " la Raiz es igual A : " << r << endl;
		}
		cout << "______________RESPUESTA_____________"<<endl;
		cout << " discriminates = " << disc << endl;
	}
	return 0;
}

