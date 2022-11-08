/*
Nombre del archivo: troncodeCono.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area total, area Lateral,volumen del tronco de cono
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float Radiomayor;
	float Radiomenor;
	float generatriz;
	float AreaTotal;
	float Arealateral;
	float volumen;
	float AB,Ab;
	float h;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el Tronco del cono______________" << endl;
	cout << "Ingrese el  valor de la generatriz:" << endl;
	cin >> generatriz;
	
	//PROCESO
	
	cout << "Ingrese el  valor del radio mayor:" << endl;
	cin >> Radiomayor;
	while ((Radiomayor<=0)) {
		cout << "Ingrese el alor de Radio mayor:" << endl;
		cin >> Radiomayor;
    } 
    
    cout << "Ingrese el  valor del radio menor:" << endl;
	cin >> Radiomenor;
	while ((Radiomenor<=0)) {
		cout << "Ingrese el alor de Radio menor:" << endl;
		cin >> Radiomenor;
    } 
    
    Arealateral= M_PI*Radiomayor+Radiomenor;
    
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
  
    volumen = 1/3*M_PI*h*pow(Radiomayor,2)+pow(Radiomenor,2)+Radiomayor*Radiomenor;
    cout << "__________________Resultados____________________" <<endl;
    cout << " el valor del area lateral es de:" << Arealateral<< endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}