/*
Nombre del archivo: problema14.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	float media;
	float n;
	float suma;
	int total;
	int x;
	cout << " total de numeros a evaluar " << endl;
	cin >> total;
	suma = 0;
	x = 1;
	while (x<=total) {
		cout << " ingrese el numero " << x << endl;
		cin >> n;
		suma = suma+n;
		x = x+1;
	}
	media = suma/total;
	cout << "_______________________________Respuesta____________________________"<<endl;
	cout << " la media aritmetica es " << media << endl;
	return 0;
}

