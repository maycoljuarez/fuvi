/*
Nombre del archivo: problema1o.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;

int main() {
	int n;
	float suma;
	int x;
	cout << " Ingrese un Numero " << endl;
	cin >> n;
	suma = 0;
	for (x=1;x<=n;x++) {
		cout << x << endl;
		suma = suma+x;
	}
	cout << "_______________________________Respuesta____________________________"<<endl;
	cout << " La suma de los " << n << " primeros numeros es: " << suma << endl;
	return 0;
}

