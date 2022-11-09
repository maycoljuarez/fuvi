/*
Nombre del archivo: problema1o.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>


using namespace std;

int main() {
	float pruebaadmision;
	float titulo;
	float titulobachiller;
	cout << " Bienvenido ala wed del instuto tegnologico victoria " << endl;
	cout << " cuenta usted con un titulo de bachiller? pulse el numero 1 Si usted cuenta con un titulo o el 2 Si no " << endl;
	cin >> titulo;
	if (titulo==1) {
		cout << "______________________Respuesta_____________________"<<endl;
		cout << " usted puede acceder al ciclo formativo " << endl;
	} else {
		cout << "___________________________________________Respuesta____________________________________________"<<endl;
		cout << " si no cuenta con titulo la unica forma de ingresar es aprobando las prubas de acceso " << endl;
	}
	return 0;
}

