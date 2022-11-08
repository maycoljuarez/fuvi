/*
Nombre del archivo: Huso Esferico.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area total, volumen del Huso esferico
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float Radiomenor;
	float Numerodegrados;
	float AreaTotal;
	float volumen;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el Huso Esferico______________" << endl;

	
	//PROCESO
	
	cout << "Ingrese el  valor del Radio menor:" << endl;
	cin >> Radiomenor;
	while ((Radiomenor<=0)) {
		cout << "Ingrese el valor del Radio menor :" << endl;
		cin >> Radiomenor;
    } 
    AreaTotal = (4*M_PI*pow(Radiomenor,2)*Numerodegrados)/360;
    
    cout << "Ingrese el numero de grados:" << endl;
	cin >> Numerodegrados;
	while ((Numerodegrados<=0)) {
		cout << "Ingrese el numero de grados:" << endl;
		cin >> Numerodegrados;
    } 

    volumen = 4/3*(M_PI*pow(Radiomenor,3)*Numerodegrados)/360;
    cout << "__________________Resultados____________________" <<endl;
    cout << " el valor del volumen es de:" << volumen << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}