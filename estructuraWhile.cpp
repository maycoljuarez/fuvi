/*
Nombre del archivo: tienecovid.cpp
autor: danilo noguera
lugar: itv
intrucciones: mas ejemplos de estructuras condicionale el programa le va a pedir al usuario que sintomas tiene y en base a eso se le va a diagosticar o no covid19
*/

#include<iomanip>
#include<iostream>

	using namespace std;
	
	int main(){
		string nombre;
		int edad;
		cout << " ingrese su nombre:";
		getline(cin,nombre);
		cout << " \ningrese su edad: ";
		cin >> edad;
		
	
		while(edad < 0 ){
			cout << " ingrese su edad.";
			cin >> edad;
		}
		cout << " bienvenido," << nombre << endl;
		cout << " fin de la aplicacion.";


	
	return 0;
}