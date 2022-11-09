/*
Nombre del archivo: Problema3.cpp
autor: pablo vargas
lugar: itv
intrucciones:Diseñar un algoritmo que pida por teclado tres números; si el primero es
negativo, debe imprimir el producto de los tres y si no lo es, imprimirá la
suma.

*/
#include<cmath>
#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		
		int Numero1,Numero2,Numero3;
		float producto,suma;
		//DATOS DE ENTRADA
		
		cout << " de cuanto es el valor del primer numero: " <<endl;
		cin >> Numero1;
		cout << " de cuanto es el valor del segundo numero: " <<endl;
		cin >> Numero2;
		cout << " de cuanto es el valor del segundo numero: " <<endl;
		cin >> Numero3;
		
		
		if (Numero1<0){
			producto =Numero1*Numero2*Numero3;
			cout << "__________________Resultado____________________"<<endl;
			cout << "el producto de los 3 numeros que ingreso es: " <<producto<<endl;
		}
		else
		if(Numero1>0){
		suma = Numero1+Numero2+Numero3;
		cout << "______________________Resultado____________________"<<endl;
		cout << "la suma de los 3 numeros que ingreso es:" <<suma<<endl;
		}
	
	


		return 0;
	}	
		