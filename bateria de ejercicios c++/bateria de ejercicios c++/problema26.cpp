/*
Nombre del archivo: problema26.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	int prod;
	int res;
	int x;
	cout << " cuando se ingrse cero(0) el programa finalizara" << endl;
	prod = 0;
	x = 1;
	res = 1;
	while (x!=0) {
		cout << " ingrese un numero " << endl;
		cin >> x;
		if (x!=0) {
			res = res*x;
			prod = res;
		}
	}
	cout << "_____________________Respuesta___________________"<<endl;
	cout << " el producto de los numeros es:" << prod << endl;
	return 0;
}

