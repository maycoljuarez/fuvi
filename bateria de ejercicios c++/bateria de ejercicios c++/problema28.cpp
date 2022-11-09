/*
Nombre del archivo: problema28.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;
#define ARREGLO_MAX 100

int main() {
	int cantidadnumeros;
	int contimpares;
	int contpares;
	int i;
	int nums[ARREGLO_MAX];
	cout << "Cuántos numeros va a ingresar? ";
	cin >> cantidadnumeros;
	cout << "Ingrese los numeros: " << endl;
	for (i=1;i<=cantidadnumeros;i++) {
		cin >> nums[i-1];
	}
	for (i=1;i<=cantidadnumeros;i++) {
		if ((nums[i-1]%2==0)) {
			contpares = contpares+1;
			cout << "Los numeros pares son: " << nums[i-1] << endl;
		} else {
			contimpares = contimpares+1;
			cout << "Los numeros impares son: " << nums[i-1] << endl;
		}
	}
	cout << "_______________________________respuestas_________________________________"<<endl;
	cout << "La cantidad de numeros pares ingresados fue " << contpares << endl;
	cout << "La cantidad de numeros impares ingresados fue " << contimpares << endl;
	return 0;
}

