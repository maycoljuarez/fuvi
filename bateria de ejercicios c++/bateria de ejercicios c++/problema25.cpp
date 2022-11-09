/*
Nombre del archivo: problema25.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;


int main() {
	float celsius;
	float fahrenheit;
	float num;
	float sist;
	fahrenheit = 1;
	celsius = 2;
	cout << " con que trabajaremos ";
	cout << " 1 = Fahrenheit y el 2 = Celsius" << endl;
	cin >> sist;
	if (sist==1) {
		cout << " ingrese el valor " << endl;
		cin >> num;
		celsius = (fahrenheit-32)/1.8;
	} else {
		if (2==celsius) {
			cout << " ingrese su valor " << endl;
			cin >> num;
			fahrenheit = (celsius*1.8)+32;
		}
	}
	cout << "_______________________________respuestas_________________________________"<<endl;
	cout << " su valor de gradosFahrenheit a gradosCelsius es de:" << celsius << endl;
	cout << " su valor de gradosCelsius a gradosFahrenheit es de:" << fahrenheit << endl;
	return 0;
}

