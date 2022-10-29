/*
Nombre del archivo: arreglosbidimencionales.cpp
autor: danilo noguera
lugar: itv
intrucciones: ejemplos de arreglos
*/

#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		
		// tipo dato nombre arreglo [ dimension01] [ dimension02]
		
		int matrizA[2][2];
		cout << " ingrese los datos: " << endl;
		for ( int i = 0; i < 2; i++){ // para recorrer las filas
		
			for (int j = 0; j < 2; j++){ // para recorrer las columnas
			
				cout << " elemento [" << i << "," << j << "] = ";
				cin >> matrizA[i][j];
			}
		}
		cout << "**************************************" << endl;
		for ( int i = 0; i < 2; i++){ // para recorrer las filas
		
			for (int j = 0; j < 2; j++){ // para recorrer las columnas
			
				cout << right <<  setw(15) << " elemento [" << i << "," << j << "] = " << matrizA[i][j];
				
			}
			cout << endl;
		}
		cout << endl;
		
		double matrizB[2][2] {};
			for ( int i = 0; i < 2; i++){ // para recorrer las filas
		
			for (int j = 0; j < 2; j++){ // para recorrer las columnas
			
				cout << right <<  setw(15) << " elemento [" << i << "," << j << "] = " << matrizB[i][j];
				
			}
			cout << endl;
		}
		
		return 0;
	
}