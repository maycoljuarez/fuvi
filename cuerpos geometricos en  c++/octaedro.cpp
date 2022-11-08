/*
Nombre del archivo: Octaedro.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area total, volumen del Octaedro 
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float a;
	float AreaTotal;
	float volumen;
	
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el Octaedro______________" << endl;

	
	//PROCESO
	
	cout << "Ingrese el  valor de a:" << endl;
	cin >> a;
	while ((a<=0)) {
		cout << "Ingrese el alor de a:" << endl;
		cin >> a;
    } 
    AreaTotal = 2 * (pow (a,2)* sqrt(a));
  
	
    volumen = (sqrt(2))/3*pow(a,3);
    cout << "__________________Resultados____________________" <<endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}