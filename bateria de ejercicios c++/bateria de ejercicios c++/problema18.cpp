/*
Nombre del archivo: problema18.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	int ano;
	int anio;
	int dia;
	int mes;
	string nombremes;
	cout << " favor ingrse el dia " << endl;
	cin >> dia;
	cout << " haora ingrese el mes " << endl;
	cin >> mes;
	cout << " ingrese el anio " << endl;
	cin >> ano;
	if (dia<1 || dia>31) {
		do {
			cout << " Dia fuera de rango " << endl;
			cout << " ingrese un dia " << endl;
			cin >> dia;
		} while (!(dia>0 && dia<32));
	}
	if (mes<1 || mes>12) {
		do {
			cout << " Mes fuera de rango " << endl;
			cout << " favor ingresar el mes " << endl;
			cin >> mes;
		} while (!(mes>0 && mes<13));
	}
	if (ano<1) {
		do {
			cout << " año fuera de rango " << endl;
			cout << " ingrese el anio " << endl;
			cin >> ano;
		} while (ano<=0);
	}
	switch (mes) {
	case 1:
		nombremes = " enero ";
		break;
	case 2:
		nombremes = " febrero ";
		break;
	case 3:
		nombremes = " marzo ";
		break;
	case 4:
		nombremes = " abril ";
		break;
	case 5:
		nombremes = " mayo ";
		break;
	case 6:
		nombremes = " junio ";
		break;
	case 7:
		nombremes = " julio ";
		break;
	case 8:
		nombremes = " agosto ";
		break;
	case 9:
		nombremes = " septiembre ";
		break;
	case 10:
		nombremes = " octubre ";
		break;
	case 11:
		nombremes = " noviembre ";
		break;
	case 12:
		nombremes = " diciembre ";
		break;
	}
	cout << dia <<   "de"   << nombremes <<   "del"   << ano << endl;
	return 0;
}

