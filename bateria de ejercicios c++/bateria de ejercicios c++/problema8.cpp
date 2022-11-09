/*
Nombre del archivo: Problema8.cpp
autor: pablo vargas
lugar: itv
intrucciones:Realizar un algoritmo que, dado un número entero, visualice en pantalla si
es par o impar. En el caso de ser 0, debe visualizar “el número no es par ni
impar”.
*/
#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){

		int num;
		
		cout << "ingrese el numero a evaluar: " << endl;
		cin >> num;
		
		if(num==0){
		cout << "__________________Resultado__________________"<<endl;
		cout << " el numero que ingreso no es par ni impar";
		}
		else if(num%2==0){
			cout << "_______________Resultado_________________"<<endl;
			cout << "el numero que ingreso es par" ;
		}
		else{
		cout << "_______________Resultado_________________"<<endl;
		cout << "el numeo que ingreso es impar";
		}
		

		return 0;
	}