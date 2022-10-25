/*
Nombre del archivo: semaforo.cpp
autor: danilo noguera
lugar: itv
intrucciones:otromas ejemplos de if
*/
#include<iostream>

	using namespace std;
	 
	int main(){
		int edad;
		char color;
		cout << " ingrese su edad: ";
		cin >> edad ;
		
		if(edad < 17){
			cout << " no tiene la edad requerida para conducir " << endl;}
			
			else if (edad > 70){
				cout << " ya no puede conducir " << endl;
			}
		    else{
		 	cout << " color del semaforo: ( r = rojo,a = amarillo;v = verde )";
		 	cin >> color;
		 	
		 	
		 	if(color == 'r'){
		 		cout << " redusca la velocidad hasta detenerse suavemente." << endl;
			 } else if (color == 'a'){
			 	cout << " tenga precaucion no puede avanzar." <<endl;
			 } else if (color == 'v'){
			 	cout << " siga adelante." << endl;
			 } else{
			 	cout << " color invalido." << endl;
			 }
		 }
		
		cout << " fin del programa." << endl;
		
	return 0;
}