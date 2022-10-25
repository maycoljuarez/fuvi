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
	int op1,cant;
	double precio;
    cout << "Menu de opciones: " <<endl;
	cout << "a- computasoras\nb-smarphonen\nc- tablets\nd- salir" << endl;	
	cout << "seleccione su opcion: " ;
	cin  >> op;
	
	switch(op){
		case'a':
		
			cout << " usted selecciono computadoras" <<endl;
			cout << " que computadora desea abquirir:" <<endl;
			cout << "1- desktop\n2-laptop";
			cin >> op1;
			switch(op1){
				case 1:
					cout <<"cantidad a comprar";
					cin >> cant;
					precio = 550.99;
					cout << " lo que pagara sera de $ " << cant*precio*1.15 << endl;
			}
			break;
			case 2:
				cout << " que computadora desea abquirir:" <<endl;
		      	cout << "1- desktopn2-laptop";
					cout <<"cantidad a comprar";
					cin >> cant;
					precio = 950.99;
					cout << " lo que pagara sera de $ " << cant*precio*1.15 << endl;
			
			
		case 'b':
			cout << " usted selecciono smarphone" <<endl;
			break;
		case 'c':
			cout << " usted selecciono tablets" <<endl;
			break;
		case 'd':
		    cout << " se ha salido de la aplicacion" <<endl;
	        break;	
	    default:
		    cout << " la opcion seleccionada es invalida " <<endl;
			    
	}
    
	return 0;
}