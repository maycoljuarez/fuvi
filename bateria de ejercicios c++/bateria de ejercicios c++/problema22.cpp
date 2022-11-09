/*
Nombre del archivo: problema22.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	int ano;
	int anio;
	cout << " digite un anio " << endl;
	cin >> ano;
	if (ano%4==0) {
		if (ano%100==0) {
			if (ano%400==0) {
				cout << " el anio " << ano << " es bisiesto" << endl;
			} else {
				cout << " el anio " << ano << " no es bisiesto " << endl;
			}
		} else {
			cout << " el anio " << ano << " es bisiesto" << endl;
		}
	} else {
		cout << " el anio " << ano << " no es bisiesto " << endl;
	}
	return 0;
}

