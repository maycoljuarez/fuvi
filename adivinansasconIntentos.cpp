/*
Nombre del archivo: adivinanzasconintentos.cpp
autor: danilo noguera
lugar: itv
intrucciones: 

*/

#include<iostream>
#include<cstdlib>
#include<ctime>

	using namespace std;
	
	int main(){
		srand(time(nullptr));
		int aleatorio = rand() % 10;
		int num,intento= 1;
		
		do{
			cout << " adivine un numero entre 0 y 10 " <<endl;
		    cin >> num;
		if(num== aleatorio){
			cout << " felicidades acertaste." <<endl;
			intento = 4 ;	
		}else{
			cout << " numero incorrecto." <<endl;
			
			if(intento == 3){
				cout <<" usted ha agotado sus intentos" <<endl;
			}
			intento++;
		}
		
		}while (intento<4);{
			cout << " el numero ganador era:" <<endl;
			cout << "fin de la aplicacion " << endl;
			
			return 0;
	
				
		}
	
		}
	
		
	
	

			