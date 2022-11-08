/*
Nombre del archivo: prisma.cpp
Autor: Pablo emilio vargas rivera
Instrucciones: calcular el area lateral,total y el prima
*/

#include<math.h>
#include<iostream>

using namespace std ;

int main() {
	
	float AreaLateral;
	float Perimetro;
	float Altura;
	float AreaTotal;
	float volumen;
	float base;
	// DATOS DE ENTRADA
	cout << " favor de ingresar cuanto vale el perimetro: " <<endl;
	cin >> Perimetro;
	cout << " haora ingresar la altura: " << endl;
	cin >> Altura;
	
	//PROCESO
	
	while ((Perimetro<=0 && Altura<=0)) {
		cout << "favor ingrese cuanto es el valor del perimetro :" << endl;
		cin >> Perimetro;
		cout << " Ingrese el valor de la altura :" << endl;
		cin >> Altura;
	}
	AreaLateral = Perimetro*Altura;
	
	cout << "Ingrese el area base:" << endl;
	cin >> base;
	while ((base<=0)) {
		cout << "Ingrese el area base:" << endl;
		cin >> base;
    } 
    AreaTotal = AreaLateral+2*base;
    volumen = base*Altura;
    cout << " el area lateral es de:" << AreaLateral << endl;
    cout << " el Volumen es de:" << volumen << endl;
    cout << " el area total es de:" << AreaTotal << endl;
	
	return 0;
	
	
	
}
