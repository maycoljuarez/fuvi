/*
Nombre del archivo: interambio de variables.cpp
autor: pablo vargas
lugar: itv
intrucciones: Dadas dos variables numéricas A y B, que el usuario debe teclear interambiarlas.
*/

#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		
		int A,B;
		int auxiliar;
		cout << " cuanto vale A:" << endl;
		cin >> A;
		cout << " cuanto vale B:" << endl;
		cin >> B;
		
		auxiliar = A;
		A=B;
 		B=auxiliar;
 		
		cout <<"_____________Resultados_______________"<<endl;
		cout << " el valor de A haora es:" <<A<< endl;
		cout << " el nuevo valor de B es:" <<B<< endl;
		
		return 0;
	}	
		