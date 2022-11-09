/*
Nombre del archivo: problema21.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/
#include<iostream>
using namespace std;


int main() {
	int i;
	int j;
	int n;
	cout << " digite un numero " << endl;
	cin >> n;
	for (i=n;i>=1;i--) {
		for (j=0;j<=(n-i-1);j++) {
			cout << "";
		}
		for (j=1;j<=i;j++) {
			cout << "*";
		}
		cout << "" << endl;
	}
	return 0;
}

