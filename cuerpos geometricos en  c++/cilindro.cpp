/*
Nombre del archivo: cilindro.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area lateral,total y del cilindro
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	
	float AreaLateral;
	float radioMenor;
	float Altura;
	float AreaTotal;
	float volumen;
	float base;
	// DATOS DE ENTRADA
	cout << "_________Sistema para calcular el cilindro________" << endl;
	cout << " ingrese el valor del radio menor: " <<endl;
	cin >> radioMenor;
	cout << " haora ingresar la altura: " << endl;
	cin >> Altura;
	
	//PROCESO
	
	while ((radioMenor<=0 && Altura<=0)) {
		cout << "favor ingrese cuanto es el valor del radio menor :" << endl;
		cin >> radioMenor;
		cout << " Ingrese el valor de la altura :" << endl;
		cin >> Altura;
	}
	AreaLateral = M_PI * radioMenor * Altura;
	
	cout << "Ingrese el area base:" << endl;
	cin >> base;
	while ((base<=0)) {
		cout << "Ingrese el area base:" << endl;
		cin >> base;
    } 
    AreaTotal = AreaLateral+2*base;
    volumen = base*Altura;
    cout << "__________________Resultados_______________________"; 
    cout << " el area lateral es de:" << AreaLateral << endl;
    cout << " el Volumen es de:" << volumen << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	
	return 0;
	
	
	
}
