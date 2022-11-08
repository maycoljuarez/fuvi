/*
Nombre del archivo: ortoedro.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular la diadonal y el vertice del ortoedro
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	float c;
	float b;
	float a;
	float Diagonal;
	float vertice;
	// DATOS DE ENTRADA
	cout << "_______________Sistema para calcular el ortoedro______________" << endl;

	
	//PROCESO
	
	cout << "Ingrese el  valor de a:" << endl;
	cin >> a;
	while ((a<=0)) {
		cout << "Ingrese el alor de a:" << endl;
		cin >> a;
    } 
    Diagonal = sqrt(pow(a,2))+sqrt(pow(b,2))+sqrt(pow(c,3));
    
    cout << "Ingrese el  valor de b:" << endl;
	cin >> b;
	while ((b<=0)) {
		cout << "Ingrese el alor de b:" << endl;
		cin >> b;
    } 
    
      cout << "Ingrese el  valor de c:" << endl;
	cin >> c;
	while ((c<=0)) {
		cout << "Ingrese el alor de c:" << endl;
		cin >> c;
    } 
 
  
	
    vertice = a*b*c;
    cout << "__________________Resultados____________________" <<endl;
    cout << " el valor de la diagonal es de:" << Diagonal << endl;
	cout << " el Vertice es de:" << vertice << endl;

	
	return 0;
	
	
	
}