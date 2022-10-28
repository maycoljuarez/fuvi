/*
Nombre del archivo: arreglos.cpp
autor: danilo noguera
lugar: itv
intrucciones: ejemplos de arreglos
*/

#include<iostream>

	using namespace std;
	int cant;
	int main(){
	
	
	//tipo de dato nombre arrelo [tamaño/dimension]
	   cout << " ingrese la cantidad de datos ";
	   cin >> cant;
	   
	  double promedioNotas[cant];
	  double precios[10] {};
	  for(int i = 0; i < 10; i++){
	  	cout << precios[i] << " ";
	  }
	  
	  // promedioNotas[0] = 15.2;
	  // promedioNotas[1] = 55.8;
	  
	  cout << " ingrese los datos: " <<endl;
	  for(int i = 0; i< cant ;i++){
	    	cout << " elementos [ " <<i<< "] = ";
	    	cin >> promedioNotas[i];
	  	
	  }
	   cout << " ingrese los datos: " <<endl;
	  for(int i = 0; i< 10 ;i++){
	    	cout << " elementos [ " <<i<< "] = "<< promedioNotas[i] << endl;
	  	
	  }
	  

	
		return 0;
	
}