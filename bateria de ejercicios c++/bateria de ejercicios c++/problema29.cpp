/*
Nombre del archivo: problema29.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	float num1;
	float num2;
	float num3;
	float sumadelos3nums;
	cout << " ingrese el primer numero" << endl;
	cin >> num1;
	cout << " ingrese el segundo numero" << endl;
	cin >> num2;
	cout << " ingrese el tercer numero" << endl;
	cin >> num3;
	sumadelos3nums = num1+num2+num3;
	if (num1+num2==num3) {
		cout << " son iguales " << endl;
	} else {
		cout << " son distints" << endl;
	}
	cout << "_________________________Respuesta___________________________"<<endl;
	cout << " la suma de los tres numeros es:" << sumadelos3nums << endl;
	return 0;
}

