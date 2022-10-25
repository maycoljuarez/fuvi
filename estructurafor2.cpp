/*
Nombre del archivo: adivinansa.cpp
autor: danilo noguera
lugar: itv
intrucciones: 
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
	using namespace std;
	
	int main(){
		bool temp,esEncontrado = false;
		int contimpar = 0,contpar = 0,aleatorio, num ,cant;
		cout << " ingrese un numero ";
		cin >> num;
		cout << " cantidad de numero ";
		cin >>cant;
		srand(time(nullptr));
		for (int i = 1;i < cant;i++){
			
			
			aleatorio = rand() %100;
			cout << aleatorio << " " ;
			if(num==aleatorio){
				esEncontrado=true;
				temp = aleatorio;
			}
			
		}
		if(esEncontrado){
			cout << "\nel" << num <<  " fue encontrado." << endl;
		    cout << "\nel" << temp <<  " fue encontrado." << endl;	
		}else{
			cout << "\nel" << num <<  " no fue encontrado." << endl;
		}
		
	
		return 0;
	
}