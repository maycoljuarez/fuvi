/*
Nombre del archivo: problema17.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int x;
	x = 1;
	a = 0;
	b = 0;
	while (x<=100) {
		if (x%2==0) {
			cout << " Numero multiplo de 2 : " << x << endl;
			a = a+1;
		}
		if (x%3==0) {
			cout << " Numero multiplo de 3 :" << x << endl;
			b = b+1;
		}
		x = x+1;
	}
	cout << "_______________________________Respuesta____________________________"<<endl;
	cout << " Numeros multiplos de 2 : " << a << endl;
	cout << "_______________________________Respuesta____________________________"<<endl;
	cout << " Numeros multiplod de 3 : " << b << endl;
	return 0;
}

