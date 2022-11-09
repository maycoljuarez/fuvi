/*
Nombre:Problema32
Autor: Pablo vargas
Lugar: Itv


*/

#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int maximo;
	int x;
	cout << " Ingrese dos numeros " << endl;
	cin >> a >> b;
	if (a>0 && b>0) {
		maximo = 1;
		x = 1;
		while (x<=a) {
			if (a%x==0 && b%x==0) {
				if (x>maximo) {
					maximo = x;
				}
			}
			x = x+1;
		}
		cout << " __________________Respuesta______________ "<<endl;
		cout << " el maximo comun divisor es: " << maximo << endl;
	} else {
		cout << " debes ingresar numeros mayores a 0 " << endl;
	}
	return 0;
}

