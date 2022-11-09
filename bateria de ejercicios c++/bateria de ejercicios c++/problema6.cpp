/*
Nombre del archivo: Problema6.cpp
autor: pablo vargas
lugar: itv
intrucciones:Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas
hay en el curso actual. Diseñar un algoritmo para este propósito.

*/
#include<cmath>
#include<iomanip>
#include<iostream>
	using namespace std;

	int main(){
		
		double Porcentni,Porcentninas;
		int numNi,numNinas,total;
		
		cout << " ingrese cuantos estudiantes masculinos hay en la escuela: " <<endl;
		cin >>numNi;
		cout << " ingrese cuantos estudiantes femeninas hay en la escuela: " <<endl;
		cin >>numNinas;
		
		total = numNi+numNinas;
		
		Porcentni = numNi*100/total;
		Porcentninas = numNinas*100/total;
		
		cout << "______________________________Resultado_______________________________"<<endl;
		cout << " el porcentajes de estudiantes(M) es de: " <<Porcentni<<"%"<<endl;
		cout << " el porcentajes de estudiantes(F) es de: " <<Porcentninas<<"%"<<endl;
		
		

		return 0;
	}	