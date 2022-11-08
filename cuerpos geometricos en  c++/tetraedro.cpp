/*
Nombre del archivo: tetraedro.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area total, H,volumen del tetraedro
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float H;
	float a;
	float AreaTotal;
	float volumen;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el tetraedro______________" << endl;

	
	//PROCESO
	
	cout << "Ingrese el  valor de a:" << endl;
	cin >> a;
	while ((a<=0)) {
		cout << "Ingrese el alor de a:" << endl;
		cin >> a;
    } 
    AreaTotal = (pow (a,2)* sqrt(a));
    
    cout << "Ingrese el  valor de H:" << endl;
	cin >> H;
	while ((H<=0)) {
		cout << "Ingrese el alor de H:" << endl;
		cin >> H;
    } 
    H = a*sqrt(6)/3;
  
  
	
    volumen = (sqrt(2))/12*pow(a,3);
    cout << "__________________Resultados____________________" <<endl;
    cout << " el valor de H es de:" << H << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}