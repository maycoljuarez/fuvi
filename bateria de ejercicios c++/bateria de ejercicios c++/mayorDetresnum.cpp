/*
Nombre del archivo: mayorDetresnum.cpp
autor: pablo vargas
lugar: itv
intrucciones: Algoritmo que lea tres números distintos y nos diga cuál de ellos es el
mayor.

*/

#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		
		int Numero1,Numero2,Numero3;
		
		cout << " ingresar el valor del primer numero:" << endl;
		cin >>Numero1;
		cout << " ingrese el valor del segundo numero:" << endl;
		cin >> Numero2;
		cout << " ingresar el tercer numero:" << endl;
		cin >> Numero3;
		
		if(Numero1>Numero2&&Numero1>Numero3){
			cout << "__________________________Resultado_________________________________"<<endl;
			cout << "el numero de mayor valor de los 3 que ingreso es:" <<Numero1<<endl;
		}else
		if(Numero2>Numero1&&Numero2>Numero3){
			cout << "__________________________Resultado_________________________________"<<endl;
			cout << " el numero de mayor valor de los 3 que ingreso es:" <<Numero2<<endl;
		}else
		if(Numero3>Numero1&&Numero3>Numero2){
			cout << "__________________________Resultado_________________________________"<<endl;
			cout << " el valor de mayor valor de los 3 numeros que ingreso es:" <<Numero3<<endl;
		}

		return 0;
	}	
		