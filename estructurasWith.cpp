/*
Nombre del archivo: estructurtaWith
autor: danilo noguera
lugar: itv
intrucciones: ejmplo de la estructura de control condicionales multiples sewith
*/


#include<iostream>

	using namespace std;
	
	int main(){
	int op;
    cout << "Menu de opciones: " <<endl;
	cout << "1- computasoras\n2-smarphonen\n3- tablets\n4- salir" << endl;	
	cout << "seleccione su opcion: " ;
	cin  >> op;
	
	switch(op){
		case 1:
			cout << " usted selecciono computadoras" <<endl;
			break;
		case 2:
			cout << " usted selecciono smarphone" <<endl;
			break;
		case 3:
			cout << " usted selecciono tablets" <<endl;
			break;
		case 4:
		    cout << " se ha salido de la aplicacion" <<endl;
	        break;	
	    default:
		    cout << " la opcion seleccionada es invalida " <<endl;
			    
	}
    
	return 0;
}