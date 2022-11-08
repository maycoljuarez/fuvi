/*
Nombre del archivo: cono.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area lateral,total,volumen del cono
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float generatriz;
	float AreaLateral;
	float Perimetro;
	float Altura;
	float AreaTotal;
	float volumen;
	float base;
	float radioMenor;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el cono______________" << endl;
	cout << " ingrese el valor de la genertriz: " <<endl;
	cin >> generatriz;
	cout << " haora ingresar el  valor del del perimetro " << endl;
	cin >> Perimetro;
	
	//PROCESO
	
	while ((Perimetro<=0 && generatriz<=0)) {
		cout << "favor ingrese cuanto es el valor del perimetro :" << endl;
		cin >> Perimetro;
		cout << " Ingrese el valor de la generatiz :" << endl;
		cin >> generatriz;
	}
	AreaLateral = (Perimetro*generatriz)/2;
	
	cout << "Ingrese el valor del radio:" << endl;
	cin >> radioMenor;
	while ((radioMenor<=0)) {
		cout << "Ingrese cuanto vale el radio:" << endl;
		cin >> radioMenor;
    } 
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
    volumen = (M_PI * pow(radioMenor,2) * Altura)/3;
    cout << "__________________Resultados____________________" <<endl;
    cout << " el area lateral es de:" << AreaLateral << endl;
    cout << " el Volumen es de:" << volumen << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	

	
	return 0;
	
	
	
}