/*
Nombre del archivo: tienecovid.cpp
autor: danilo noguera
lugar: itv
intrucciones: mas ejemplos de estructuras condicionale el programa le va a pedir al usuario que sintomas tiene y en base a eso se le va a diagosticar o no covid19
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

	using namespace std;
	
	int main(){
		srand(time(nullptr));
		int aleatorio = rand() % 10;
		int num;

		cout << " adivine un numero entre 0 y 10 " <<endl;
		cin >> num;
		
		while ( num != aleatorio){
			cout << " adivine un numero entre 0 y 10 " << endl;
			cin >>num;
			
		}
		
		cout << " felicidades, acertaste." << endl;
	
		
		return 0;
	
}
	