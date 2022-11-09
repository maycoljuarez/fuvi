/*
Nombre del archivo: Problema5.cpp
autor: pablo vargas
lugar: itv
intrucciones:. Realizar un algoritmo que lea un número por teclado. En caso de que ese
número sea 0 o menor que 0, se saldrá del programa imprimiendo antes un
mensaje de error. Si es mayor que 0, se deberá calcular su cuadrado y la raíz
cuadrada del mismo, visualizando el número que ha tecleado el usuario y
su resultado (“Del numero X, su potencia es X y su raíz X”).

*/
#include<cmath>
#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		float potencia;
		float raizCuadrada;
		int num;
		
		cout << " favor de ingresar un numero: " <<endl;
		cin >>num;
		
		if(num<=0){
			cout << "a ocurrido un error"<<endl;
		}
		else
		if(num>0){
			potencia=pow(num,2);
			raizCuadrada=sqrt(num);
			cout << "______________________________Resultado________________________________"<<endl;
			cout << "la potencia del numero que ingreso es de: " <<potencia<<endl;
			cout << "la raiz cuadrada del numero que ingreso es de: " <<raizCuadrada<<endl;
		}
	


		return 0;
	}	