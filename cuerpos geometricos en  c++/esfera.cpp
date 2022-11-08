/*
Nombre del archivo: esfera.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area lateral,total,volumen de la esfera
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float Area;
	float volumen;
    float radioMenor;
    
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular la esfera______________" << endl;
	cout << " ingrese el valor del radio menor : " <<endl;
	cin >> radioMenor;
	
	//PROCESO
	
    Area = 4 * M_PI * pow(radioMenor,2);
    
    volumen =  M_PI * pow(radioMenor,3) * 4/3;
    cout << "__________________Resultados____________________" <<endl;
    cout << " el Area de la esfera es de:" << Area << endl;
    cout << " el Volumen es de:" << volumen << endl;

	
	return 0;
	
	
	
}