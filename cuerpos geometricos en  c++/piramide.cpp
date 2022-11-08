/*
Nombre del archivo: piramide.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area lateral,total de la piramide
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float ApotemaPerimetro;
	float AreaLateral;
	float Perimetro;
	float Altura;
	float AreaTotal;
	float volumen;
	float base;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular la piramide______________" << endl;
	cout << " favor de ingresar cuanto vale el perimetro: " <<endl;
	cin >> Perimetro;
	cout << " haora ingresar el  valor del apotema del perimetro " << endl;
	cin >> ApotemaPerimetro;
	
	//PROCESO
	
	while ((Perimetro<=0 && ApotemaPerimetro<=0)) {
		cout << "favor ingrese cuanto es el valor del perimetro :" << endl;
		cin >> Perimetro;
		cout << " Ingrese el valor del Apotema el perimetro :" << endl;
		cin >> ApotemaPerimetro;
	}
	AreaLateral = (Perimetro*ApotemaPerimetro)/2;
	
	cout << "Ingrese el area base:" << endl;
	cin >> base;
	while ((base<=0)) {
		cout << "Ingrese el area base:" << endl;
		cin >> base;
    } 
    AreaTotal = AreaLateral+base;
    
    	cout << "Ingrese el valor de la altura:" << endl;
	cin >> Altura;
	while ((Altura<=0)) {
		cout << "Ingrese el valor de la altura:" << endl;
		cin >> Altura;
	}
    volumen = (base*Altura)/3;
    cout << "__________________Resultados____________________" <<endl;
    cout << " el area lateral es de:" << AreaLateral << endl;
    cout << " el Volumen es de:" << volumen << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	

	
	return 0;
	
	
	
}
