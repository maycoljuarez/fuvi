/*
Nombre del archivo: adivinansa.cpp
autor: danilo noguera
lugar: itv
intrucciones: 
*/

#include<iostream>

	using namespace std;
	
	int main(){
		int aleatorio,tabla;
		cout << " cual es la tabla que desea ";
		cin >>tabla;
		
		for (int i = 1;i < 10;i++){
			if (i%2 == 0){
				cout  << i << " x " << aleatorio  << " = "   << aleatorio*i <<  endl;
			}
		}
	
		return 0;
	
}
	