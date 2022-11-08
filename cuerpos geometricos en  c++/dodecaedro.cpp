/*
Nombre del archivo: Dodeaedro.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area,volumen,Apent del dodecaedro
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float apotemaBase;
	float Apent;
	float a;
	float AreaTotal;
	float volumen;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el Dodecaedro______________" << endl;
	cout << "Ingrese del apotema base:" << endl;
	cin >> apotemaBase;
	
	//PROCESO
	
	cout << "Ingrese el  valor de a:" << endl;
	cin >> a;
	while ((a<=0)) {
		cout << "Ingrese el alor de a:" << endl;
		cin >> a;
    } 
    AreaTotal = sqrt(25+10)*sqrt(5)*3*pow(a,2);
    
    Apent = a*apotemaBase*5/2;
  
    volumen = sqrt(15+7)*sqrt(5)*pow(a,3)*1/4;
    
    
    
    
    
    
    cout << "__________________Resultados____________________" <<endl;
    cout << " el valor de Apent es de:" << Apent << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}