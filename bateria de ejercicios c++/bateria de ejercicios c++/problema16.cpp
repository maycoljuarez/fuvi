/*
Nombre del archivo: problema1o.cpp
autor: pablo vargas
lugar: itv
intrucciones:

*/

#include<iostream>
using namespace std;

int main() {
	int n;
	int x;
	x = 1;
	while (x!=0) {
		cout << " Digite un numero " << endl;
		cin >> n;
		if (n==0) {
			x = n;
		}
	}
	return 0;
}

