/*
Nombre del archivo: icosaedro.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area total, volumen del icosaedro
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float a;
	float AreaTotal;
	float volumen;
	
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el Icosaedro______________" << endl;

	
	//PROCESO
	
	cout << "Ingrese el  valor de a:" << endl;
	cin >> a;
	while ((a<=0)) {
		cout << "Ingrese el alor de a:" << endl;
		cin >> a;
    } 
    AreaTotal = 5*pow(a,2)*sqrt(3);
  
	
    volumen = pow(a,3)*5/12*(3+sqrt(5));
    cout << "__________________Resultados____________________" <<endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}