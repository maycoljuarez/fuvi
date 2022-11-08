/*
Nombre del archivo: tronco de piramide.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area total, area Lateral,volumen del tronco de piramide
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
    float AB,Ab;
	float AreaTotal;
	float Arealateral;
	float volumen;
	float PB,Pb;
	float h;
	float Apotemapiramide;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el Tronco de la piramide______________" << endl;
	cout << "Ingrese el  valor del apotema de la piramide:" << endl;
	cin >> Apotemapiramide;
	
	//PROCESO
	
	cout << "Ingrese el  valor de PB:" << endl;
	cin >> PB;
	while ((PB<=0)) {
		cout << "Ingrese el valor de PB:" << endl;
		cin >> PB;
    } 
    
	cout << "Ingrese el  valor de Pb:" << endl;
	cin >> Pb;
	while ((Pb<=0)) {
		cout << "Ingrese el valor de Pb:" << endl;
		cin >> Pb;
    } 
    
    Arealateral= PB+Pb/2*Apotemapiramide;
    
   	cout << "Ingrese el  valor de AB:" << endl;
	cin >> AB;
	while ((AB<=0)) {
		cout << "Ingrese el alor de AB:" << endl;
		cin >> AB;
    } 
    
    	cout << "Ingrese el  valor de Ab:" << endl;
	cin >> Ab;
	while ((Ab<=0)) {
		cout << "Ingrese el alor de Ab:" << endl;
		cin >> Ab;
    } 
    AreaTotal = Arealateral+AB+Ab;
    
    cout << "Ingrese el  valor de h:" << endl;
	cin >> h;
	while ((h<=0)) {
		cout << "Ingrese el alor de h:" << endl;
		cin >> h;
    } 
  
    volumen = h*(AB+Ab)+sqrt(AB*Ab)*1/3;
    cout << "__________________Resultados____________________" <<endl;
    cout << " el valor del area lateral es de:" << Arealateral<< endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}