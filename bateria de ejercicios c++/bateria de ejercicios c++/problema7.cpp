/*
Nombre del archivo: Problema7.cpp
autor: pablo vargas
lugar: itv
intrucciones:Una tienda ofrece un descuento del 15% sobre el total de la compra durante
el mes de febrero. Dado un mes y un importe (monto), calcular cuál es la
cantidad que se debe cobrar al cliente.

*/
#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		
		float precio,descuento,total;
		cout << "_______________Bienvenido a nuestra tienda_________________"<<endl;
		cout << " de cuanto es el valor del producto que lleva: " <<endl;
		cin >>precio;
		
		descuento = precio*0.15;
		total = precio-descuento;
		cout <<"_________________________________________Resultados_________________________________________________"<<endl;
		cout << " su precio final con el descuento aplicado durante el mes de febrero es de: " <<"C$"<<total<<endl;
		
		
		

		return 0;
	}