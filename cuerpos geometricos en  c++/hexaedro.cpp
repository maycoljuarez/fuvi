/*
Nombre del archivo: hexaedro.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area,volumen,D del hexaedro
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float D;
	float a;
	float AreaTotal;
	float volumen;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el Hexaedro______________" << endl;

	
	//PROCESO
	
	cout << "Ingrese el  valor de a:" << endl;
	cin >> a;
	while ((a<=0)) {
		cout << "Ingrese el alor de a:" << endl;
		cin >> a;
    } 
    AreaTotal = 6*pow(a,2);
    
    cout << "Ingrese el  valor de D:" << endl;
	cin >> D;
	while ((D<=0)) {
		cout << "Ingrese el alor de D:" << endl;
		cin >> D;
    } 
    D = a*sqrt(3);
  
  
	
    volumen = pow(a,3);
    cout << "__________________Resultados____________________" <<endl;
    cout << " el valor de D es de:" << D << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}