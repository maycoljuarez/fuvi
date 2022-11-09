/*
Nombre del archivo: problema20.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int n;
	cout << " ingrese un numero " << endl;
	cin >> n;
	for (a=1;a<=n;a++) {
		for (b=1;b<=n;b++) {
			if (a>1 && a<n && b>1 && b<n) {
				cout << "  ";
			} else {
				cout << "* ";
			}
		}
		cout << "" << endl;
	}
	return 0;
}

