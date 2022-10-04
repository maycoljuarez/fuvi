/*
Nombre del archivo:pitagora.cpp
autor: danilo noguera
lugar: itv
intrucciones:generar numeros aleatorios
*/

#include<iostream>
#include<cstdlib>// c standar library
#include<ctime>
	using namespace std;
	
int main(){
	long tiempoTrascurrido = time(0); // tiempo que a transcurido en segundos desde 1 enero 1970
	srand(tiempoTrascurrido); // seed ramdom, semilla de inicio
	int aleatorio = rand() % 10;
	int num;
	
	cout << " adivine un numero entre 0 y 10 ";
	cin >> num;
	
	if(num == aleatorio){
		cout << " felicidades aserto ";
		}else {
			cout << " lo siento no asero ";
		}
	
	
	return 0;
	
}

