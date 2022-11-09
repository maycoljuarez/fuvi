/*
Nombre del archivo: mayorOmenor.cpp
autor: pablo vargas
lugar: itv
intrucciones: Algoritmo que lea dos números y nos diga cuál de ellos es mayor o bien si
son iguales..
*/

#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		
		int Numero1,Numero2;
		
		cout << " ingrese el primer numero:" <<endl;
		cin >> Numero1;
		cout << " ingrese el valor del segundo numero:" <<endl;
		cin >> Numero2;
		
		if(Numero1==Numero2){
			cout << "_______________Resultado_________________"<<endl;
			cout << " los numeros son iguales:";
		}else
		if(Numero1>Numero2){
			cout << "_______________Resultado_________________"<<endl;
			cout << " el Numero mayor es el:" <<Numero1 <<endl;
			
		}else
	   	cout << "_______________Resultado_________________"<<endl;
		cout << " el numero menor es el:" <<Numero2<<endl;
     	
		

		return 0;
	}	
		