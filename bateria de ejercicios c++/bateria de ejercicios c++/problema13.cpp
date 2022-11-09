/*
Nombre del archivo: problema1o.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	float n;
	float sumapares;
	float x;
	cout << " cuantos numeros desea sumar " << endl;
	cin >> n;
	sumapares = 0;
	for (x=1;x<=n;x++) {
		if (x%2==0) {
			sumapares = sumapares+x;
		}
	}
	cout << "_______________________________Respuesta____________________________"<<endl;
	cout << " La suma de los " << n << " numeros pares  es: " << sumapares << endl;
	return 0;
}

