/*
Nombre del archivo: 
autor: danilo noguera
lugar: itv
intrucciones:otro ejemplo de nums aleatoriod
*/

#include<iostream>
#include<cstdlib>// c standar library
#include<ctime>
	using namespace std;
	
	int main(){
	long tiempoTrascurrido = time(0); // tiempo que a transcurido en segundos desde 1 enero 1970
	srand(tiempoTrascurrido); // seed ramdom, semilla de inicio
	int valorMax = 6, valorMin = 1;

	
	// formula para generar numeros dentro de un rango
	short dado1 =  (rand() % (valorMax - valorMin + 1)) + valorMin;
	short dado2 =  (rand() % (valorMax - valorMin + 1)) + valorMin;
	
	
	cout << dado1 << " , " << dado2 ;
	return 0;
}
	
	