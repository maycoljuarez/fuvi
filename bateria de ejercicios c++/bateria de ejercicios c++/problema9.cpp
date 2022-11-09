/*
Nombre del archivo: problema9
autor: pablo vargas
lugar: itv
intrucciones:
*/

#include<iostream>
using namespace std;


int main() {
	float num;
	do {
		cout << " ingrese el numero a evaluar " << endl;
		cin >> num;
	} while (num<=0);
	if (num==0) {
		cout << "----------------------Resultado------------------------"<<endl;
		cout << " el numero " << num << " no es par ni impar " << endl;
	} else {
		if (num <=2==0) {
			cout << "----------------------Resultado------------------------"<<endl;
			cout << " el numero " << num << " es un numero par " << endl;
		} else {
			cout << "----------------------Resultado------------------------"<<endl;
			cout << " el numero " << num << " no es un numero par " << endl;
		}
	}
	return 0;
}

