/*
Nombre del archivo: problema23.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	string nombre;
	float total;
	int x;
	a = 0;
	total = 0;
	x = 0;
	cout << " digame solo su primer nombre" << endl;
	cin >> nombre;
	while (a!=3) {
		cout << " 1 nuestro menu " << endl;
		cout << " 2 cuenta " << endl;
		cout << " 3 salir " << endl;
		cin >> a;
		if (a==1) {
			b = 0;
			while (b!=4) {
				cout << " 1 = bocadillo de jamon C$ 1.5 " << endl;
				cout << " 2 = refresco C$ 1.05 " << endl;
				cout << " 3 = cerveza C$ 0.75 " << endl;
				cout << " 4 salir " << endl;
				cin >> b;
				if (b==1) {
					total = total+1.5;
				} else {
					if (b==2) {
						total = total+1.05;
					} else {
						if (b==3) {
							total = total+0.75;
						}
					}
				}
			}
		} else {
			if (a==2) {
				cout << "___________________________Cuenta____________________________"<<endl;
				cout << nombre << " su cuenta total es de : C$ " << total << endl;
			}
		}
	}
	return 0;
}

