/*
Nombre:Problema35
Autor: Pablo vargas
Lugar: Itv


*/

#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float fx;
	float x;
	cout << " Ingrese el Valor de x " << endl;
	cin >> x;
	if (x>0) {
		fx = (pow((x-2),2))/2+(pow((x-4),4))/4+(pow((x-6),6))/6;
		cout << " El valor positivo para x es de: " << fx << endl;
	} else {
		if (x<0) {
			fx = (pow((x-2),2))/2+(pow((x-4),4))/4+(pow((x-6),6))/6;
			cout << " El valor negativo para x es de: " << fx << endl;
		}
	}
	return 0;
}

